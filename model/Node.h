/*
 * Node.h
 *
 *  Created on: Jan 29, 2016
 *      Author: dbar0540
 */

#ifndef NODE_H_
#define NODE_H_
#include <iostream>

template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;
public:
	Node();
	Node(const Type& value);
	virtual ~Node();
	Type getValue();
	void setValue(const Type& value);
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */
