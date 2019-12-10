#ifndef DAYFOUR_H_
#define DAYFOUR_H_

#include <string>

class DayFour
{
private :
	static bool HasSameAdjacentDigits(std::string password, bool hasSameAdjacentDigitsTwoOnly);
	static bool DigitsNeverDecrease(std::string password);

public:
	static bool IsValidPassword(std::string password, bool hasSameAdjacentDigitsTwoOnly);
	static int FirstChallenge(std::string minimum, std::string maximum);
	static int SecondChallenge(std::string minimum, std::string maximum);
};

#endif