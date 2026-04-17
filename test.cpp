#include <gtest/gtest.h>
#include "Dollar.h"

TEST(DollarTest, Multiplication) {
    Dollar five(5);
    Dollar ten = five.times(2);      // times() が Dollar を返すことを要求
    EXPECT_EQ(10, ten.amount);
    Dollar fifteen = five.times(3);  // five は 5 のまま
    EXPECT_EQ(15, fifteen.amount);
}
