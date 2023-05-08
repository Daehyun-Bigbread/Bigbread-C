#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_BSIZE 10
int cnt=0;
static sem_t hsem, num_buff, num_data;

void *Producer(void *arg) // producer
{
	int i, tmp;
	for(;;)
	{
		sem_wait(&num_buff);
		sem_wait(&hsem);
		cnt++;
		printf("prod cnt: %d \n", cnt);
		sleep(1);
		sem_post(&hsem);
		sem_post(&num_data);
	}

	printf("Producer Ends\n");
	return NULL;
}


void *Consumer(void *arg) // consumer
{
	int i, tmp;
	for(;;)
	{
		sem_wait(&num_data);
		sem_wait(&hsem);
		cnt--;
		printf("cons cnt: %d \n", cnt);
		sleep(1);
		sem_post(&hsem);
		sem_post(&num_buff);
	}

	printf("Consumer Ends\n");
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t thread1;
	pthread_t thread2;

	if(sem_init(&hsem, 0, 1) < 0)
	{
		fprintf(stderr, "Semaphore Initialization Error\n");
		return 1;
	}

	if(sem_init(&num_buff, 0, MAX_BSIZE) < 0)
	{
		fprintf(stderr, "Semaphore Initialization Error\n");
		return 1;
	}

	if(sem_init(&num_data, 0, 0) < 0)
	{
		fprintf(stderr, "Semaphore Initialization Error\n");
		return 1;
	}

	pthread_create(&thread1, NULL, Producer, NULL);
	pthread_create(&thread2, NULL, Consumer, NULL);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	printf("%d\n", cnt);
	sem_destroy(&hsem);
	return 0;
	
}
