/*
* @Author: Baptiste
* @Date:   2020-02-24 18:29:10
* @Last Modified by:   Baptiste
* @Last Modified time: 2020-02-24 18:30:50
*/

class Leaf
{
public:
	Leaf();
	~Leaf();

private:
	Leaf *_left;
	Leaf *_right;
	int _value;

public:
	bool isInside(int nb);
	Leaf &find(int nb);


};