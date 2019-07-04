//
// Created by Huang, Shuyang on 2019-07-04.
//

#include "gtest/gtest.h"
#include "0002.h"

using namespace std;

TEST(test1, Normal) {
    std::vector<int> a{2, 7, 11, 15};
    Solution solu;
    ASSERT_NE(solu.twoSum(a, 9), std::vector<int>(0, 1));
}
