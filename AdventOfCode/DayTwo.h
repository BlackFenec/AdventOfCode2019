#ifndef DAYTWO_H_
#define DAYTWO_H_

#include <string>

class DayTwo
{
public:
	static std::string ExecuteProgram(std::string program, int firstPositionValue, int secondPositionValue);
	static std::string FirstChallenge(std::string filename, int firstPositionValue, int secondPositionValue);
	static int SecondChallenge(std::string filename, std::string expectedOutput);
};

#endif