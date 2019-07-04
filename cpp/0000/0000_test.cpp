//
// Created by Huang, Shuyang on 2019-07-04.
//

#include "gtest/gtest.h"
#include "0000.h"

using namespace std;

TEST(test1, Normal) {
    EXPECT_EQ(addTest(3, 6), 9);
}

TEST(test2, Normal) {

    Solution a;
    EXPECT_EQ(a.SumOfTwoInt(3, 6), 9);

}