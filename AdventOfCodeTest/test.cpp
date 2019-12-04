#include "pch.h"
#include "..\AdventOfCode\DayOne.h"
TEST(ComputeFuelFromMass, ForAMassOfTwelveThenTwoIsReturned) {
	EXPECT_EQ(DayOne::ComputeFuelFromMass(12), 2);
}

TEST(ComputeFuelFromMass, ForAMassOfFourtheenThenTwoIsReturned) {
	EXPECT_EQ(DayOne::ComputeFuelFromMass(14), 2);
}

TEST(ComputeFuelFromMass, ForAMassOfOneThousandNineHundredSixtyNineThenSixHundredFiftyFourIsReturned) {
	EXPECT_EQ(DayOne::ComputeFuelFromMass(1969), 654);
}

TEST(ComputeFuelFromMass, ForAMassOfOneHundredThousandSevenHundredFiftySixThenThirtyThreeThousandFiveHundredEightyThreeIsReturned) {
	EXPECT_EQ(DayOne::ComputeFuelFromMass(100756), 33583);
}

TEST(ComputeEntireFuelForModule, ForAModuleWithAMassOfFourtheenThenTwoIsReturned)
{
	EXPECT_EQ(DayOne::ComputeEntireFuelForModule(14), 2);
}

TEST(ComputeEntireFuelForModule, ForAModuleWithAMassOfOneThousandNineHundredSixtyNineThenNineHundredSixtySixIsReturned)
{
	EXPECT_EQ(DayOne::ComputeEntireFuelForModule(1969), 966);
}

TEST(ComputeEntireFuelForModule, ForAModuleWithAMassOfOneHundredThousandSevenHundredFiftySixThenFiftyThousandThreeHundredFortySixIsReturned)
{
	EXPECT_EQ(DayOne::ComputeEntireFuelForModule(100756), 50346);
}
TEST(FirstChallenge, ForAFileOfMultipleMassThenAllMassAreAdded) {
	EXPECT_EQ(DayOne::FirstChallenge("./../../../AdventOfCodeTest/inputs/DayOne.txt"), 3252897);
}

TEST(SecondChallenge, ForAFileOfMultipleModulesMassThenAllMassAndFuelForFuelAreAdded) {
	EXPECT_EQ(DayOne::SecondChallenge("./../../../AdventOfCodeTest/inputs/DayOne.txt"), 4876469);
}