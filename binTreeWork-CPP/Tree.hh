#ifndef TREE_HH_
# define TREE_HH_

#include "Leaf.hh"

class Tree 
{
public:
	Tree();
	~Tree();

private:
	Leaf *_root;

public:
	int createTree(int value);
	bool findInTree();

};

#endif