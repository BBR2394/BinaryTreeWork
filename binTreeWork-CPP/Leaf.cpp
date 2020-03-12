/*
* @Author: Baptiste
* @Date:   2020-02-24 18:29:10
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-12 17:06:54
*/

#include "Leaf.hh"

Leaf::Leaf(int v) : _value(v)  {
	_left = NULL ;
	_right = NULL ;
}

Leaf::~Leaf() {

}

int Leaf::getValue() const
{
	return _value;
}

std::ostream & operator<<(std::ostream & os, Leaf const & lf)
{
	os << "The value is this leaf is : " << lf.getValue();
	return os;
}

