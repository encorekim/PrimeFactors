#include "gmock/gmock.h"
#include "primefactors.cpp"

TEST(PrimeFactors, Of1) {
  PrimeFactors prime;
  vector<int> expected{};
  EXPECT_EQ(expected, prime.getPrimeFactors(1));
}

TEST(PrimeFactors, Of2) {
  PrimeFactors prime;
  vector<int> expected{2};
  EXPECT_EQ(expected, prime.getPrimeFactors(2));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}