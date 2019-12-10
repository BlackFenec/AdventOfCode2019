#include "pch.h"
#include "..\AdventOfCode\DayFour.h"

namespace DayFourChallenge
{
	TEST(IsValidPassword, ForPasswordWithoutSameAdjacentDigitsThenPasswordIsNotValid) {
		EXPECT_EQ(DayFour::IsValidPassword("123789",false), false);
	}

	TEST(IsValidPassword, ForPasswordWithDecreasingDigitsThenPasswordIsNotValid) {
		EXPECT_EQ(DayFour::IsValidPassword("223450",false), false);
	}

	TEST(IsValidPassword, ForPasswordWithSameAdjacentDigitsAndOnlyIncreasingDigitsThenPasswordIsValid) {
		EXPECT_EQ(DayFour::IsValidPassword("111111",false), true);
	}

	TEST(IsValidPassword, ForPasswordWithoutSameAdjacentDigitsOnlyTwoThenPasswordIsNotValid) {
		EXPECT_EQ(DayFour::IsValidPassword("123444", true), false);
	}

	TEST(IsValidPassword, ForPasswordWithSameAdjacentDigitsOfOnlyTwoThenPasswordIsValid) {
		EXPECT_EQ(DayFour::IsValidPassword("112233", true), true);
	}

	TEST(IsValidPassword, ForPasswordWithSameAdjacentDigitsOfOnlyTwoAtLeastOnceThenPasswordIsValid) {
		EXPECT_EQ(DayFour::IsValidPassword("111122", true), true);
	}

	TEST(FirstChallenge, ForAGivenInputRangeThenValidPasswordsCountIsReturned) {
		EXPECT_EQ(DayFour::FirstChallenge("125730","579381"), 2081);
	}

	TEST(SecondChallenge, ForAGivenInputRangeThenValidPasswordsCountIsReturned) {
		EXPECT_EQ(DayFour::SecondChallenge("125730", "579381"), 1411);
	}
}