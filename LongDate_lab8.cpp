#include <iostream>
#include <string>
#include "LongDate.h"
#define NUM_DAYS_IN_WEEK 7
using namespace std;

const string LongDate::Days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

const int LongDate::monthCode[] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};

LongDate::LongDate (int m, int d, int y): Date( m, d, y){  // body of derived class constructor function  
  setDayOfTheWeek(Days[(getYearCode(y) + getMonthCode(m) + getCenturyCode(y) + d - getLeapYearCode(y))%7]);
}

void LongDate::setDayOfTheWeek( string s ){
  for(int i = 0; i < NUM_DAYS_IN_WEEK; i++){
    if (s == Days[i]) dayOfTheWeek = s;
  }//end for loop
}//end function setDayOfTheWeek  

string LongDate::getDayOfTheWeek(){
  return dayOfTheWeek;
}//end function getDayOfTheWeek

int LongDate::getYearCode(int y){
  return(((y%100)+(y%100)/4)%7);
}//end function getYearCode

int LongDate::getMonthCode(int m){
  return(monthCode[m]);
}//end function getMonthCode

int LongDate::getCenturyCode(int y){
  if(y >=1900 && y < 2000){
    return 0;
  }//end if
  if(y >= 2000 && y < 2100){
    return 6;
  }//end if
  if(y == 2100){
    return 4;
  }//end if 
}//end function getCenturyCode

int LongDate::getLeapYearCode(int l){
  if(leapYear(l)) return 1;
  return 0;
}//end function getLeapYearCode

void LongDate::print(){
  cout<<getDayOfTheWeek()<<","<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;

}//end print
