#ifndef TREE_H_
#define TREE_H_

#include "Node.h"

class Tree
{
private:
	Node* root;
	bool InsertNode(Node* node, std::string parent, std::string newValue);
public:
	Node* GetRoot() { return root; }
	bool InsertNewNode(std::string parent, std::string newValue);
};

#endif