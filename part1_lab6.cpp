//Benjamin Longwell
//Lab6
//part1.cpp


#include <iostream>

using namespace std;

double circleArea(int radius);
int main()
{
    int radius;
    
    cout<<"Enter a radius (-1 to end)"<<endl;
    cin>>radius;
    while(radius != -1){
        cout<<"Area of circle with radius "<< radius << " is " << circleArea(radius)<<endl;
        cout<<"Enter a radius (-1 to end)"<<endl;
        cin>>radius;
    }//end while

    return 0;
}
double circleArea(int radius){
    return radius * radius * 3.14159;
}//end circleArea
