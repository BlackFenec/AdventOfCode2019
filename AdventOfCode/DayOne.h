#ifndef DAYONE_H_
#define DAYONE_H_

#include <string>

class DayOne
{
public :
	static int ComputeFuelFromMass(int mass);
	static int ComputeEntireFuelForModule(int moduleMass);
	static int FirstChallenge(std::string filename);
	static int SecondChallenge(std::string filename);
};

#endif