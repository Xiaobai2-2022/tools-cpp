/* time.h, utility tools written by Zhifan (Xiaobai) Li */

#include <cassert>
#include <iostream>
#include <string>

using namespace std;

/* *************************************************** *
 * This file inlcudes the special object designed for  *
 *     storing time up to minute                       *
 * *************************************************** */

class Time {

    public:
    Time(int dow, int h, int m);

    int get_dow() const;
    int get_h() const;
    int get_m() const;

    Time(const Time& other);
    Time &operator=(const Time& other);
    ~Time();

    string to_string() const;

    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<=(const Time& other) const;
    bool operator>=(const Time& other) const;

    private:
    int day_of_week;
    int hour; 
    int minute;

};