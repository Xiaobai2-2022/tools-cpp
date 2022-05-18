/* time.cpp, utility tools written by Zhifan (Xiaobai) Li */

#include "time.h"

using namespace std;

Time::Time(int dow, int h, int m) : day_of_week{dow}, hour{h}, minute{m} {
    if(dow > 7 || dow < 1 || h > 23 || h < 0 || m > 59 || m < 0) {
        cerr << "Error, input is incorrect" << endl;
        exit(1);
    }
}

int Time::get_dow() const {
    return this->day_of_week;
}

int Time::get_h() const {
    return this->hour;
}

int Time::get_m() const {
    return this->minute;
}

Time::Time(const Time& other) : day_of_week{other.get_dow()}, hour{other.get_h()}, minute{other.get_m()} {}

Time &Time::operator=(const Time& other) {

    this->day_of_week = other.get_dow();
    this->hour = other.get_h();
    this->minute = other.get_m();

    return *this;

}

Time::~Time() {}
