#ifndef DAYSIX_H_
#define DAYSIX_H_

#include <string>
#include "Node.h"

class DaySix
{
private:
	static int OrbitCount(Node* node, int lastLevel);
public :
	static int GetTotalNumberOfOrbits(std::string map);
	static int FirstChallenge(std::string filename);
};

#endif