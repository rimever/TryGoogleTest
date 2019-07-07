#include "pch.h"
#include "../ConsoleApplication/Calculation.h"

TEST(Calculation, add) {
  EXPECT_EQ(5, add(2,3));
}