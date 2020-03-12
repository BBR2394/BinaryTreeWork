/*
* @Author: Baptiste Bertrand-Rapello
* @Date:   2020-02-24 18:28:55
* @Last Modified by:   Baptiste Bertrand-Rapello
* @Last Modified time: 2020-03-12 19:24:24
*/

#include <iostream>

#include "Leaf.hh"

int main(int ac, char **av) {
	Leaf lfOne(10);
	Leaf *lfTwo = new Leaf(20);
	std::cout << "Here is where the magik happened" << std::endl;

	std::cout << lfOne << std::endl;
	std::cout << *lfTwo << std::endl;
	std::cout << lfOne.getValue() << std::endl;
	std::cout << lfTwo->getValue() << std::endl;
	

	return 0;
}