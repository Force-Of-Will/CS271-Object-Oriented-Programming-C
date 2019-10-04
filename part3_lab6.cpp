// part3.cpp
//Benjamin Longwell
//total cost shipping calculator
#include <iostream>
using namespace std;

int totalCost(int shipping = 0, int boxCost = 4, int numBoxes = 1);

int main()
{
    cout<<"This is the function called without parameters:"<<endl;
    cout<<"The shipping rate for free shipping, a single box cost of $4 is $"<< totalCost()<<endl;
    cout<<"This is the function called with a single parameter: "<<endl;
    cout<<"The shipping rate for $10 shipping, a single box cost of $4 is $"<< totalCost(10)<<endl;
    cout<<"This is the function called with two parameters:"<<endl;
    cout<<"The shipping rate for $5 shipping, one box of $5 is $"<<totalCost(5, 5)<<endl;
    cout<<"This is the function using all three parameters:"<<endl;
    cout<<"The shipping rate for $3 shipping, 2 boxes at $5 each is $"<<totalCost(3, 5, 2)<<endl;
}//end main

int totalCost(int shipping, int boxCost, int numBoxes){
    return(shipping +(boxCost*numBoxes));
}//end totalCost
