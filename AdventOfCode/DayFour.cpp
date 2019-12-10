#include "DayFour.h"

bool DayFour::HasSameAdjacentDigits(std::string password)
{
	for (int i = 0; i < password.length() - 1; i++)
		if (password[i] == password[i + 1]) return true;

	return false;
}

bool DayFour::DigitsNeverDecrease(std::string password)
{
	for (int i = 1; i < password.length(); i++)
		if (password[i] < password[i - 1]) return false;
	
	return true;
}

bool DayFour::IsValidPassword(std::string password)
{
	return HasSameAdjacentDigits(password) && DigitsNeverDecrease(password);
}

int DayFour::FirstChallenge(std::string minimum, std::string maximum)
{
	int count = 0;
	for (int i = std::stoi(minimum); i <= std::stoi(maximum); i++)
		if (IsValidPassword(std::to_string(i))) count++;
	return count;
}