/* Time.h, utility tools testing file written by Zhifan (Xiaobai) Li */

#include "time.h"
#include <gtest/gtest.h>

using namespace std;

TEST(TimeBasicTest, CreateTimeValidGetter){

    Time* t0 = new Time(1,2,5);

    EXPECT_TRUE(t0->get_dow() == 1);
    EXPECT_TRUE(t0->get_h() == 2);
    EXPECT_TRUE(t0->get_m() == 5);

    delete t0;

}

TEST(TimeBasicTest, CreateTimeInvalidCerr){

    EXPECT_DEATH(Time* errt0 = new Time(0,0,0),"Error, input is incorrect");
    EXPECT_DEATH(Time* errt0 = new Time(8,0,0),"Error, input is incorrect");
    EXPECT_DEATH(Time* errt0 = new Time(1,-1,0),"Error, input is incorrect");
    EXPECT_DEATH(Time* errt0 = new Time(1,24,0),"Error, input is incorrect");
    EXPECT_DEATH(Time* errt0 = new Time(1,0,-1),"Error, input is incorrect");
    EXPECT_DEATH(Time* errt0 = new Time(1,0,60),"Error, input is incorrect");

}

TEST(TimeToStringTest, CreateTimeValidToString){

    Time* t0 = new Time(1,0,0);

    EXPECT_EQ(t0->to_string(), "Monday, 00:00.\n");

    delete t0;

    Time* t1 = new Time(7,23,14);

    EXPECT_EQ(t1->to_string(), "Sunday, 23:14.\n");

    delete t1;

}
