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