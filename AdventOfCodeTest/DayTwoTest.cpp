#include "pch.h"
#include "..\AdventOfCode\DayTwo.h"

namespace DayTwoChallenge
{
	TEST(ExecuteProgram, ForAProgramWithOpCodeOneThenDigitsAreAddedAndResultIsOverwritten) {
		EXPECT_EQ(DayTwo::ExecuteProgram("1,0,0,0,99", -1, -1), "2,0,0,0,99");
	}

	TEST(ExecuteProgram, ForAProgramWithOpCodeTwoThenDigitsAreMultipliedAndResultIsOverwritten) {
		EXPECT_EQ(DayTwo::ExecuteProgram("2,3,0,3,99", -1, -1), "2,3,0,6,99");
	}

	TEST(ExecuteProgram, ForAProgramWithOpCodeTwoThenDigitsAreMultiplyAndResultIsStockedInEmptyPlace) {
		EXPECT_EQ(DayTwo::ExecuteProgram("2,4,4,5,99,0", -1, -1), "2,4,4,5,99,9801");
	}

	TEST(ExecuteProgram, ForAProgramWithMultipleOpCodeThenAllOpCodesAreDone) {
		EXPECT_EQ(DayTwo::ExecuteProgram("1,1,1,4,99,5,6,0,99", -1, -1), "30,1,1,4,2,5,6,0,99");
	}

	TEST(FirstChallenge, ForAProgramWithMultipleOpCodeThenAllOpCodesAreDone) {
		EXPECT_EQ(DayTwo::FirstChallenge("./../../../AdventOfCodeTest/inputs/DayTwo.txt", 12, 2), "3850704");
	}

	TEST(SecondChallenge, ForAProgramWithMultipleOpCodeThenAllOpCodesAreDone) {
		EXPECT_EQ(DayTwo::SecondChallenge("./../../../AdventOfCodeTest/inputs/DayTwo.txt", "19690720"), 6718);
	}
}