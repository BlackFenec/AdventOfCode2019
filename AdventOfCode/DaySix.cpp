#include "DaySix.h"
#include "Tree.h"
#include <fstream>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>

int DaySix::OrbitCount(Node* node, int lastLevel)
{
	std::list<Node*> childs = node->GetChilds();
	int childsSum = lastLevel + 1;
	for (std::list<Node*>::iterator it = childs.begin(); it != childs.end(); ++it)
	{
		childsSum += OrbitCount((*it), lastLevel + 1);
	}
	return childsSum;
}

int DaySix::GetTotalNumberOfOrbits(std::string map)
{
	std::replace(map.begin(), map.end(), '\n', ' ');
	std::istringstream iss(map);
	std::vector<std::string> nodes{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };
	Tree* tree = new Tree();
	int i = nodes.size() - 1;
	std::vector<std::string>::const_reverse_iterator it = nodes.rbegin();

	while (nodes.size() > 0)
	{
		int splitIndex = (*it).find(")");
		if (tree->InsertNewNode((*it).substr(0, (*it).length() - ((*it).length() - splitIndex)), (*it).substr(splitIndex + 1, (*it).length() - splitIndex - 1)))
			nodes.erase(it.base());
		
		++it;
		if (it == nodes.rend())
			it = nodes.rbegin();
	}

	return OrbitCount(tree->GetRoot(),0);
}

int DaySix::FirstChallenge(std::string filename)
{
	std::ifstream file(filename);
	std::string map((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	return GetTotalNumberOfOrbits(map);
}