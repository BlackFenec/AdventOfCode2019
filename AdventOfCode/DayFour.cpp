#include "DayFour.h"

bool DayFour::HasSameAdjacentDigits(std::string password, bool hasSameAdjacentDigitsTwoOnly)
{
	if (hasSameAdjacentDigitsTwoOnly)
	{
		for (int i = 0; i < password.length() - 1; i++)
			if (password[i] == password[i + 1] && (i+2 == password.length() || password[i] != password[i+2])
				&& (i == 0 || password[i-1] != password[i])) return true;
	}
	else
	{
		for (int i = 0; i < password.length() - 1; i++)
			if (password[i] == password[i + 1]) return true;
	}

	return false;
}

bool DayFour::DigitsNeverDecrease(std::string password)
{
	for (int i = 1; i < password.length(); i++)
		if (password[i] < password[i - 1]) return false;
	
	return true;
}

bool DayFour::IsValidPassword(std::string password, bool hasSameAdjacentDigitsTwoOnly)
{
	return HasSameAdjacentDigits(password, hasSameAdjacentDigitsTwoOnly) && DigitsNeverDecrease(password);
}

int DayFour::FirstChallenge(std::string minimum, std::string maximum)
{
	int count = 0;
	for (int i = std::stoi(minimum); i <= std::stoi(maximum); i++)
		if (IsValidPassword(std::to_string(i),false)) count++;
	return count;
}

int DayFour::SecondChallenge(std::string minimum, std::string maximum)
{
	int count = 0;
	for (int i = std::stoi(minimum); i <= std::stoi(maximum); i++)
		if (IsValidPassword(std::to_string(i), true)) count++;
	return count;
}