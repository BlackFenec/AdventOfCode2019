#include "Tree.h"

bool Tree::InsertNewNode(std::string parent, std::string newValue)
{
	if (root == nullptr)
	{
		root = new Node(newValue);
		return true;
	}

	return InsertNode(root, parent, newValue);
}

bool Tree::InsertNode(Node* node, std::string parent, std::string newValue)
{
	if (node->GetValue() == parent)
	{
		node->AddChild(new Node(newValue));
		return true;
	}

	std::list<Node*> childs = node->GetChilds();

	for (std::list<Node*>::iterator it = childs.begin(); it != childs.end(); ++it)
	{
		if (InsertNode((*it), parent, newValue)) return true;
	}
	return false;
}