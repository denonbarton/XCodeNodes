//
//  CTECBinaryTreePM.cpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/13/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTreePM.hpp"
using namespace CTECData;
using namespace std;

template <class Type>
TreeNodePM<Type> * CTECBinaryTreePM<Type> :: getLeftMostChild(CTECBinaryTreePM<Type> rightSubTree)
{
    TreeNodePM<Type> * leftNode = rightSubTree->getRoot();
    while(rightNode->getLeftChild() != nullptr)
    {
        leftNode = leftNode->getLeftChild();
    }
    return leftNode;
}

template <class Type>
TreeNodePM<Type> * CTECBinaryTreePM<Type> :: getRightMostChild(CTECBinaryTreePM<Type> leftSubTree)
{
    TreeNodePM<Type> * rightde = leftSubTree->getRoot();
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    return rightNode;
}

template <class Type>
bool CTECBinaryree<Type> :: insert(const Type& value)
{
    if(contains(value))
    {
        return false
    }
    else
    {
        TreeNodePM<Type> * currentNode = root;
        TreeNodePm<Type> * trailNode;
        
        if(root == nullptr)
        {
            root = new TreeNodePM<Type>(value);
        }
        else
        {
            while (currentNode != nullptr)
            {
                trailNode = currentNode;
                
                if (currentNode->getValue() < value)
                {
                    currentNode = currentNode->getRightChild();
                }
                else
                {
                    currentNode = currentNode->getLeftChild();
                }
            }
            if(trailNode-getValue() > value)
            {
                trailNode->setLeftChild(new TreeNodePM<Type>(value, trailNode));
            }
            else
            {
                TreeNodePM<Type> * insertNode = new TreeNodePM<Type>(value, trailNode);
                trailNode->setRightChild(insertedNod)
            }
        }
    }
    return true;
}




