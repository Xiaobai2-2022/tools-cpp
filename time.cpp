/* time.cpp, utility tools written by Zhifan (Xiaobai) Li */

#include "time.h"

using namespace std;

// ctor
Time::Time(int dow, int h, int m) : day_of_week{dow}, hour{h}, minute{m} {
    // check if the days are valid
    if(dow > 7 || dow < 1 || h > 23 || h < 0 || m > 59 || m < 0) {
        cerr << "Error, input is incorrect" << endl;
        exit(1);
    }
}

// getters

int Time::get_dow() const {
    return this->day_of_week;
}

int Time::get_h() const {
    return this->hour;
}

int Time::get_m() const {
    return this->minute;
}

// cpy ctor
Time::Time(const Time& other) : day_of_week{other.get_dow()}, hour{other.get_h()}, minute{other.get_m()} {}

// operator =
Time &Time::operator=(const Time& other) {

    this->day_of_week = other.get_dow();
    this->hour = other.get_h();
    this->minute = other.get_m();

    return *this;

}

// dector
Time::~Time() {}

string Time::to_string() const {

    string out = "";

    // implement the day of the week to text
    switch (this->day_of_week)
    {
    case 1:
        out += "Monday, ";
        break;

    case 2:
        out += "Tuesday, ";
        break;
    case 3:
        out += "Wednesday, ";
        break;
    case 4:
        out += "Thursday, ";
        break;
    case 5:
        out += "Friday, ";
        break;
    case 6:
        out += "Saturday, ";
        break;
    case 7:
        out += "Sunday, ";
        break;
    
    default:
        cerr << "Internal Error, Reference Code #0x80008001, time.h" << endl;
    }

    if(this->hour < 10) out += "0";
    out += std::to_string(this->hour);
    out += ":";
    if(this->minute < 10) out += "0";
    out += std::to_string(this->minute);
    out += ".\n";

    return out;

}
