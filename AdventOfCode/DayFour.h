#ifndef DAYFOUR_H_
#define DAYFOUR_H_

#include <string>

class DayFour
{
private :
	static bool HasSameAdjacentDigits(std::string password);
	static bool DigitsNeverDecrease(std::string password);

public:
	static bool IsValidPassword(std::string password);
	static int FirstChallenge(std::string minimum, std::string maximum);
};

#endif