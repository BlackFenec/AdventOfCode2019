#include "DayOne.h"
#include <fstream>

int DayOne::ComputeFuelFromMass(int mass)
{
	return mass/3-2;
}

int DayOne::FirstChallenge(std::string filename)
{
	std::ifstream file;
	file.open(filename, std::ifstream::in);

	if (!file.is_open()) return -1;

	int sum = 0;
	std::string str;

	while (std::getline(file, str))
	{
		sum += ComputeFuelFromMass(std::stoi(str));
	}

	file.close();
	return sum;
}

int DayOne::ComputeEntireFuelForModule(int moduleMass)
{
	//TODO
}

int DayOne::SecondChallenge(std::string filename)
{
	std::ifstream file;
	file.open(filename, std::ifstream::in);

	if (!file.is_open()) return -1;

	int sum = 0;
	std::string str;

	while (std::getline(file, str))
	{
		sum += ComputeEntireFuelForModule(std::stoi(str));
	}

	file.close();
	return sum;
}