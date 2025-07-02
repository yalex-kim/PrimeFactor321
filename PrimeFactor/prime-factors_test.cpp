#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>	

using std::vector;
using namespace testing;

class PrimeFactorsTest : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected = {};
};

TEST_F(PrimeFactorsTest, Of1) {
	EXPECT_EQ(expected, prime_factor.of(1));

}

TEST_F(PrimeFactorsTest, Of2) {
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));

}

TEST_F(PrimeFactorsTest, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));

}
TEST_F(PrimeFactorsTest, Of4) {
	expected = {2, 2};
	EXPECT_EQ(expected, prime_factor.of(4));
}
