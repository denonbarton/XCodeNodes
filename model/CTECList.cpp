/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: dbar0540
 */

#include "CTECList.h"

template<class Type>
CTECList<Type>::CTECList()
{
	this ->size = 0;
	this->head = nullptr;
	this->end = nullptr
}
template<class Type>
CTECList<Type>::~CTECList()
{

}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	//Find the next spot.
	ArrayNode * newHead = new ArrayNode<Type()>;
	newHead = head->getNext();
	//remove head
	delete head;
	//Move head to next spot.
	head = newHead;
}




