#include <iostream>
#include "Date.h"
#include "LongDate.h"
using namespace std;
int main() {
  Date myDate = Date(1,22,2001);
  cout<<"This is myDate using the Date class:"<<endl;
  cout << myDate.getMonth() << "/" << myDate.getDay() << "/" << myDate.getYear()<< endl;

  cout<<"incrementing myDate..."<<endl;
  myDate.increment();
  cout<<"this is myDate, incremented:"<<endl;
  cout << myDate.getMonth() << "/" << myDate.getDay() << "/" << myDate.getYear()<< endl;

  cout<<"this is myDate, but incremented 10 days:"<<endl;
  for( int i = 0; i < 10; i++) myDate.increment();
  cout << myDate.getMonth() << "/" << myDate.getDay() << "/" << myDate.getYear()<< endl;
  
  cout<<"This is myLongDate:"<<endl;
  LongDate myLongDate = LongDate(4, 27, 2019);
  myLongDate.print();
  
}