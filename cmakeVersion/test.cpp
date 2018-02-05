#include "gtest/gtest.h"
#include "myHeader.cpp"
TEST (ChoiceTest, NumberWithinRange)
{
    EXPECT_TRUE (inputValid(1));
    EXPECT_TRUE (inputValid(2));
    EXPECT_TRUE (inputValid(3));
}

TEST (ChoiceTest, NumberNotWithinRange)
{
    EXPECT_FALSE (inputValid(4));
    EXPECT_TRUE (inputValid(5));
    EXPECT_TRUE (inputValid(-1));
}

int test(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

