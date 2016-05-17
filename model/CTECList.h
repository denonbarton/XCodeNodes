/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: dbar0540
 */


#define MODEL_CTECLIST_H_

#include "ArrayNode.h"
#include <stdlib.h>
#include <assert.h>

template <class Type>
class CTECList
{
private:
    CTECList();
    virtual ~CTECList();
    
    int getSize();
    
    void addToFront(const Type &value);
    void addToEnd(const Type &value);
    void addAtIndex(const Type &value);
    void calculateSize();
    
    bool loopSearch(const Type & value);
    
    Type getFront();
    Type getEnd();
    Type getFromIndex(int index);
    Type removeFromFront();
    Type removeFromEnd();
    Type removeFromIndex(int index);
    Type set(int index,const Type &value);
public:
    int size;
    ArrayNode<Type>* head;
    ArrayNode<Type>* end;
};
