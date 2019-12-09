#ifndef DAYTHREE_H_
#define DAYTHREE_H_

#include <string>
#include <set>

class DayThree
{
private :
	static std::set<std::string> firstPath;
	static int closest;
	static void ManageWire(std::string wire, bool isFirst);

public :
	static int ClosestIntersection(std::string firstWire, std::string secondWire);
	static int FirstChallenge(std::string filename);
};

#endif