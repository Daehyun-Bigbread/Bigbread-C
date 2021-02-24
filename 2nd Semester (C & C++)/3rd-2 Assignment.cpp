#include <iostream>
#include <ctype.h>
#include <string.h>
#include <algorithm>

using namespace std;

bool Palindrome(string string) //회문검사 하는 함수 
{
    int length = string.length();
    for (int a = 0; a < length / 2; a++)
    {
        if (string.at(a) != string.at(length - a - 1))
            return false; //0 
    }
    return true; //1
}

bool Return_Value(string x, string y) { return x < y; } //x,y를 받아서 x < y이면 ture, 아니면 false 값을 리턴해준다.  

int main()
{
    string Input_value; //input_value 받은 값을 저장 
    cin >> Input_value;

    transform(Input_value.begin(), Input_value.end(), Input_value.begin(), [](unsigned char c) { return tolower(c); }); //대문자를 소문자로 변환  

    string Palindrome_List[Input_value.length()]; //회문의 길이  
    int Palindrome_List_Index = 0;
    int Value_Max;

    for (int b = Input_value.length() + 1; b >= 1; b--) // 뒤에서 부터 검사 
    {
        bool Value_found = false;
        for (int c = 0; c + b < Input_value.length() + 1; c++) //앞에서 부터 검사 
        {
            string string = Input_value.substr(c, b); //값 저장 (substr?) 
            if (Palindrome(string)) // 
            {
                Value_Max = b;
                Value_found = true;
                Palindrome_List[Palindrome_List_Index++] = string;
            }
        }
        if (Value_found) //찾으면 
            break; //멈춘다 
    }

    sort(Palindrome_List, Palindrome_List + Palindrome_List_Index, Return_Value); //사전순 배열 
    cout << Value_Max << endl; //숫자출력 
    cout << Palindrome_List[0] << endl; //문자여러출력. 

    return 0;
}
