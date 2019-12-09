#ifndef DAYTHREE_H_
#define DAYTHREE_H_

#include <string>
#include <map>

class DayThree
{
private :
	static std::map<std::string, int> firstPath;
	static int closest;
	static void ManageWire(std::string wire, bool isFirst, bool useManhattanDistance);

public :
	static int ClosestIntersection(std::string firstWire, std::string secondWire);
	static int FirstChallenge(std::string filename);
	static int SecondChallenge(std::string filename);
	static int MinimumSteps(std::string firstWire, std::string secondWire);
};

#endif