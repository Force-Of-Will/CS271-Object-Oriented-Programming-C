// Date.h
// Date class definition 
//
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{

public:
   
   Date( int m = 1, int d = 1, int y = 1900 ); // default constructor

   void setDay( int );
   void setMonth( int );
   void setYear( int );
   
   int getDay(  );
   int getMonth( );
   int getYear( );

   void setDate( int, int, int ); // set month, day, year
   
   static bool leapYear( int ); // is date in a leap year?
   
   bool endOfMonth( int ) const; // is date at the end of month?

   void increment( );
   
private:
   int month;
   int day;
   int year;

   static const int days[]; // array of days per month

}; // end class Date

#endif
