#include <gtest/gtest.h>
#include "count_bin.h"

TEST(CountBinTest, BasicTest) {
    EXPECT_EQ(count_bin(2, 7), 11);
}

TEST(CountBinTest, SingleNumber) {
    EXPECT_EQ(count_bin(0, 0), 0);
    EXPECT_EQ(count_bin(1, 1), 1);
    EXPECT_EQ(count_bin(7, 7), 3);
}

TEST(CountBinTest, PowersOfTwo) {
    EXPECT_EQ(count_bin(1, 1), 1);
    EXPECT_EQ(count_bin(2, 2), 1);
    EXPECT_EQ(count_bin(4, 4), 1);
    EXPECT_EQ(count_bin(8, 8), 1);
}

TEST(CountBinTest, RangeTest) {
    EXPECT_EQ(count_bin(0, 1), 1);
    EXPECT_EQ(count_bin(0, 3), 4);
    EXPECT_EQ(count_bin(1, 3), 4);
}

TEST(CountBinTest, LargerRange) {
    EXPECT_EQ(count_bin(0, 15), 32);
}

TEST(CountBinTest, InvalidInputNegative) {
    EXPECT_EQ(count_bin(-5, 5), -1);
    EXPECT_EQ(count_bin(0, -1), -1);
}

TEST(CountBinTest, InvalidInputReversed) {
    EXPECT_EQ(count_bin(5, 2), -1);
}
