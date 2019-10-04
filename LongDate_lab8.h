//longDate.h
//Benjamin Longwell
//class template for longDate

#ifndef LONGDATE_H
#define LONGDATE_H
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class LongDate : public Date{
  private:
    string dayOfTheWeek;
    static const string Days[];
    static const int monthCode[];
  public:
    LongDate (int m, int d, int y);  
    void setDayOfTheWeek(string s);
    string getDayOfTheWeek();
    int getYearCode(int y);
    int getMonthCode(int m);
    int getCenturyCode(int y);
    int getLeapYearCode(int l);
    void print();

};//end class template LongDate

#endif 