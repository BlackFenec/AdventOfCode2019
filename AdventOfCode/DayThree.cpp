#include "DayThree.h"
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <fstream>

std::map<std::string,int> DayThree::firstPath;
int DayThree::closest = INT_MAX;

void DayThree::ManageWire(std::string wire, bool isFirstWire, bool useManhattanDistance)
{
	int x = 0, y = 0;
	int steps = 0;
	std::replace(wire.begin(), wire.end(), ',', ' ');
	std::istringstream iss(wire);
	std::vector<std::string> split{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };

	for (int i = 0; i < split.size(); i++)
	{
		for (int j = 0; j < std::stoi(split[i].substr(1, std::string::npos)); j++)
		{
			switch (split[i].at(0))
			{
				case 'R': x++; break;
				case 'L': x--; break;
				case 'U': y++; break;
				case 'D': y--; break;
			}
			if(isFirstWire)
				firstPath.insert(std::pair<std::string,int>('x' + std::to_string(x) + ":y" + std::to_string(y), steps + j + 1));
			else if(firstPath.find('x' + std::to_string(x) + ":y" + std::to_string(y)) != firstPath.end())
			{
				if (useManhattanDistance)
				{

					if (x + y < closest) closest = x + y;
				}
				else
				{
					if (firstPath.find('x' + std::to_string(x) + ":y" + std::to_string(y))->second + steps + j + 1 < closest)
						closest = firstPath.find('x' + std::to_string(x) + ":y" + std::to_string(y))->second + steps + j + 1;
				}
			}
		}
		steps += std::stoi(split[i].substr(1, std::string::npos));
	}
}

int DayThree::ClosestIntersection(std::string firstWire, std::string secondWire)
{
	closest = INT_MAX;
	firstPath = std::map<std::string,int>();
	ManageWire(firstWire, true, true);
	ManageWire(secondWire, false, true);
	
	return closest;
}

int DayThree::MinimumSteps(std::string firstWire, std::string secondWire)
{
	closest = INT_MAX;
	firstPath = std::map<std::string,int>();
	ManageWire(firstWire, true, false);
	ManageWire(secondWire, false, false);

	return closest;
}

int DayThree::FirstChallenge(std::string filename)
{
	std::ifstream file(filename);

	if (!file.is_open()) return INT_MAX;

	std::string firstWire, secondWire;
	std::getline(file, firstWire);
	std::getline(file, secondWire);

	return ClosestIntersection(firstWire, secondWire);
}

int DayThree::SecondChallenge(std::string filename)
{
	std::ifstream file(filename);

	if (!file.is_open()) return INT_MAX;

	std::string firstWire, secondWire;
	std::getline(file, firstWire);
	std::getline(file, secondWire);

	return MinimumSteps(firstWire, secondWire);
}