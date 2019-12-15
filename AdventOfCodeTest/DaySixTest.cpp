#include "pch.h"
#include "..\AdventOfCode\DaySix.h"

namespace DaySixChallenge
{
	TEST(GetTotalNumberOfOrbits, ForAGivenMapThenSumOfDirectsAndIndirectsOrbitsIsReturned) {
		std::string input = "COM)B\nB)C\nC)D\nD)E\nE)F\nB)G\nG)H\nD)I\nE)J\nJ)K\nK)L";
		EXPECT_EQ(DaySix::GetTotalNumberOfOrbits(input), 42);
	}

	TEST(FirstChallenge, ForAGivenInputMapThenTotalOrbitsIsReturned) {
		EXPECT_EQ(DaySix::FirstChallenge("./../../../AdventOfCodeTest/inputs/DaySix.txt"), 0);
	}

}