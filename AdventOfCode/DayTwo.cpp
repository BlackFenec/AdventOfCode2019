#include "DayTwo.h"
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <algorithm>
#include <fstream>

std::string DayTwo::ExecuteProgram(std::string program, int firstPositionValue, int secondPositionValue)
{
	std::replace(program.begin(), program.end(), ',', ' ');
	std::istringstream iss(program);
	std::vector<int> instructions{ std::istream_iterator<int>{iss}, std::istream_iterator<int>{} };
	
	if (instructions.size() == 0) return program;
	if (firstPositionValue != -1 && secondPositionValue != -1)
	{
		instructions[1] = firstPositionValue;
		instructions[2] = secondPositionValue;
	}

	int pc = 0;
	while (pc < instructions.size() && instructions.at(pc) != 99)
	{
		if (instructions.at(pc) == 1)
		{
			instructions.at(instructions.at(pc + 3)) = instructions.at(instructions.at(pc + 1)) + instructions.at(instructions.at(pc + 2));
		}
		else if (instructions.at(pc) == 2)
		{
			instructions.at(instructions.at(pc + 3)) = instructions.at(instructions.at(pc + 1)) * instructions.at(instructions.at(pc + 2));
		}
		pc += 4;
	}
	return std::accumulate(instructions.begin() + 1, instructions.end(), std::to_string(instructions[0]),
		[](const std::string& a, int b) {
			return a + ',' + std::to_string(b);
		});
}

std::string DayTwo::FirstChallenge(std::string filename, int firstPositionValue, int secondPositionValue)
{
	std::ifstream file(filename);
	std::string program((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	program = ExecuteProgram(program, firstPositionValue, secondPositionValue);
	return program.substr(0,program.find_first_of(','));
}

int DayTwo::SecondChallenge(std::string filename, std::string expectedOutput)
{
	std::ifstream file(filename);
	std::string program((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	for (int noun = 99; noun >= 0; noun--)
	{
		for (int verb = noun; verb >= 0; verb--)
		{
			std::string result = ExecuteProgram(program, noun, verb);
			if (result.substr(0, result.find_first_of(',')) == expectedOutput) return 100 * noun + verb;
		}
	}
	return -1;
}