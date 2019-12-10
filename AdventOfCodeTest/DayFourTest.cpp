#include "pch.h"
#include "..\AdventOfCode\DayFour.h"

namespace DayFourChallenge
{
	TEST(IsValidPassword, ForPasswordWithoutSameAdjacentDigitsThenPasswordIsNotValid) {
		EXPECT_EQ(DayFour::IsValidPassword("123789"), false);
	}

	TEST(IsValidPassword, ForPasswordWithDecreasingDigitsThenPasswordIsNotValid) {
		EXPECT_EQ(DayFour::IsValidPassword("223450"), false);
	}

	TEST(IsValidPassword, ForPasswordWithSameAdjacentDigitsAndOnlyIncreasingDigitsThenPasswordIsValid) {
		EXPECT_EQ(DayFour::IsValidPassword("111111"), true);
	}

	TEST(FirstChallenge, ForAGivenInputRangeThenValidPasswordsCountIsReturned) {
		EXPECT_EQ(DayFour::FirstChallenge("125730","579381"), 2081);
	}

}