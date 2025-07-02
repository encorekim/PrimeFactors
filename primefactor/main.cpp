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

TEST_F(PrimeFactorsFixture, Of3) {
  vector<int> expected{3};
  EXPECT_EQ(expected, prime.getPrimeFactors(3));
}

TEST_F(PrimeFactorsFixture, Of4) {
  vector<int> expected{2, 2};
  EXPECT_EQ(expected, prime.getPrimeFactors(4));
}

TEST_F(PrimeFactorsFixture, Of6) {
  vector<int> expected{2, 3};
  EXPECT_EQ(expected, prime.getPrimeFactors(6));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}