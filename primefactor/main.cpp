#include "gmock/gmock.h"
#include "primefactors.cpp"

TEST(PrimeFactors, Of1) {
  PrimeFactors prime;
  vector<int> expected{};
  EXPECT_EQ(expected, prime.getPrimeFactors(1));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}