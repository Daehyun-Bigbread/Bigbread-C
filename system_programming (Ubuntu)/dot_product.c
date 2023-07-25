#include <pthread.h> 
#include <stdio.h> 
#include <malloc.h> 
typedef struct
{ 
	double *a; // first vector
	double *b; // second vector
	double sum; // dot product of two vectors
	int veclen; // dimension
} DOTDATA; 

#define NUMTHRDS 4 
#define VECLEN 100 

DOTDATA dotstr; 

pthread_t callThd[NUMTHRDS]; 
pthread_mutex_t mutexsum;

void *dotprod(void *arg)
{ 
	int i, start, end, offset, len ; 
	double mysum, *x, *y; 
	
	offset = (int)arg; 
	len = dotstr.veclen; 
	start = offset*len; 
	end = start + len; 
	x = dotstr.a; y = dotstr.b; 

	/* Perform the dot product */
	mysum = 0; 
	for (i=start; i < end ; i++)
	{ 
		mysum += (x[i] * y[i]); 
	} 
	/* Lock a mutex prior to updating the value in the shared structure, and unlock it upon updating. */

	pthread_mutex_lock (&mutexsum); 
	dotstr.sum += mysum; 
	pthread_mutex_unlock (&mutexsum); pthread_exit((void*) 0); 
}

int main (int argc, char *argv[])
{ 
	int i; 
	double *a, *b; 
	int status; 

	a = (double*) malloc (NUMTHRDS*VECLEN*sizeof(double)); 
	b = (double*) malloc (NUMTHRDS*VECLEN*sizeof(double)); 
	for (i=0; i < VECLEN*NUMTHRDS; i++)
	b[i]= a[i]=1; // for easy testing

	dotstr.veclen = VECLEN; 
	dotstr.a = a; 
	dotstr.b = b; 
	dotstr.sum=0; 
	pthread_mutex_init(&mutexsum, NULL);

	/* Create threads to perform the dot-product */ 
	
	for(i=0;i < NUMTHRDS; i++) { 
	pthread_create( &callThd[i], NULL, 
	dotprod, (void *)i); 
	}
 
	/* Wait on the other threads */ 
	for(i=0;i < NUMTHRDS; i++) { 
	pthread_join( callThd[i], (void **)&status); 
	} 

	/* After joining, print out the results and cleanup */ 
	printf ("Sum = %f \n", dotstr.sum); 
	free (a); free (b); 
	pthread_mutex_destroy(&mutexsum); 
	pthread_exit(NULL); 
}
