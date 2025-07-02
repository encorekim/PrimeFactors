#include "gmock/gmock.h"
#include "primefactors.cpp"

using namespace testing;

class PrimeFactorsFixture : public Test {
 public:
  PrimeFactors prime;
};

TEST_F(PrimeFactorsFixture, Of1) {
  vector<int> expected{};
  EXPECT_EQ(expected, prime.getPrimeFactors(1));
}

TEST_F(PrimeFactorsFixture, Of2) {
  vector<int> expected{2};
  EXPECT_EQ(expected, prime.getPrimeFactors(2));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}