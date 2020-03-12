
#ifndef LEAF_HH_
# define LEAF_HH_

#include <iostream>

class Leaf
{
public:
	Leaf(int v);
	~Leaf();

private:
	Leaf *_left;
	Leaf *_right;
	int _value;

public:
	int getValue() const;

};

std::ostream& operator<<(std::ostream&, Leaf const &);

#endif