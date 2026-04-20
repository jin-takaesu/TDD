#include <gtest/gtest.h>
#include "Dollar.h"

TEST(DollarTest, Multiplication) {
    Dollar five(5);
    Dollar ten = five.times(2);      // times() が Dollar を返すことを要求
    EXPECT_TRUE(ten == Dollar(10));  // オブジェクト同士で比較する
    Dollar fifteen = five.times(3);  // five は 5 のまま
    EXPECT_TRUE(fifteen == Dollar(15));
    EXPECT_FALSE(Dollar(5) == Dollar(6));  //三角測量
}
