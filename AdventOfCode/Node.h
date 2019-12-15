#ifndef NODE_H_
#define NODE_H_

#include <string>
#include <list>

class Node
{
private:
	std::string value;
	std::list<Node*> childs;
public:
	Node(std::string newValue)
	{
		value = newValue;
		childs = std::list<Node*>();
	}

	void AddChild(Node* node) { childs.push_back(node); }
	std::list<Node*> GetChilds() { return childs; }
	std::string GetValue() { return value; }
};

#endif