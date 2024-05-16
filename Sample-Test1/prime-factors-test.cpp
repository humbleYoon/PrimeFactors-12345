#include "pch.h"
#include "../primeFactors/prime-factors.cpp"

// 2->[2]
// 3->[3]
// 4->[2, 2]
// 6->[2, 3]
// 8->[2, 2, 2]
// 9->[3, 3]
// 12->[2, 2, 3]
// 14->[2, 7]

TEST(TestCaseName, TestName) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(TestCaseName, TestName2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}