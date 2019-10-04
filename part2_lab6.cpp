//Benjamin Longwell
//Lab6
//part2.cpp

#include <iostream>

using namespace std;

int sumByValue(int);

void sumByReference(int&);

int main()
{
    int num, num1;
    cout<<"Please enter the value of num"<<endl;
    cin>>num;
    cout<<"The value of num before sumByValue is "<< num<<endl;
    cout<<"The value of num after sumByValue is "<< sumByValue(num)<<endl;
    
    cout<<"Please enter the value of the next number"<<endl;
    cin>>num1;
    cout<<"The value of num1 before sumByReference is "<<num1<<endl;
    int &num1ref = num1;
    sumByReference(num1ref);
    cout<<"The value of num1 after sumByReference is "<<num1<<endl;
    return 0;
}//end main

int sumByValue(int num){
    int sum = 0;
    for(int i = 0; i <= num; i++){
        sum = sum +i;
    }//end for
    return sum;
}//end sumByValue 

void sumByReference(int & numberReference){
    const int num = numberReference;
    int sum = 0;
    for(int i = 0; i < num; i++){
        sum = sum + i;
    }//end for
    numberReference = sum;
}//end sumByReference

