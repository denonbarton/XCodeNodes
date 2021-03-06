/*
 * CTECrray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: dbar0540
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_
#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
    int size;
    ArrayNode<Type> * head;
    void swap(int index1, int index2);
public:
    CTECArray(int size);
    virtual ~CTECArray();
    int getSize();
    Type get(int position);
    void set(int position, const Type& value);
    int indexOf(Type searchValue);
    int nextIndexOf(int startingIndex, Type searchValue);
    void selectionSort();
};

#endif /* MODEL_CTECARRAY_H_ */