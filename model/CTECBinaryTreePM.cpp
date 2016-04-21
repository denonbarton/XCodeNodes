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

template <class Type>
void CTECBinaryTreePM<Type> :: remove(const Type& value)
{
    TreeNodePM<Type> * current;
    TreeNodePM<Type> * trailing;
    
    if(!contains(value))
       {
           return;
       }
       else
       {
           current = root;
           trailing = root;
           
           while(current != nullptr && current->getValue() != value)
           {
               trailing = current;
               if(current->getValue() > value)
               {
                   current = current->getLeftChild();
               }
               else
               {
                   current = current ->getRightChild();
               }
           }
           if(current == root)
           {
               remove(root);
           }
           else if(trailing->getValue() > value)
           {
               remove(trailing->getLeftChild());
           }
           else
           {
               remove(trailing->getRightChild());
           }
       }
}

template <class Type>
void CTECBinaryTreePM<Type> :: remove(TreeNodePM<Type> * nodeToBeRemoved)
{
    TreeNodPM<Type> * current;
    TreeNodePM<Type> * trailing;
    TreeNodePM<Type>* temp;
    
    if(nodeToBeRemoved == nullptr)
    {
        cerr << "Doh! Can't remove something that isnt there." <<endl;
    }
    else if(nodeToBeRemoved->getLeftChild() == nullptr && nodeToBeRevmoved->getRightChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        nodeToBeRemoved = temp->getRightChild();
        delete temp;
    }
    else if (nodeToBeRemoved->getRightChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        NodeToBeRemoved = nullptr;
        delete temp;
    }
    else if (nodeToBeRemoved->getLeftChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        NodeToBeRemoved = temp->getRightChild();
        delete temp;
    }
    else if (nodeToBeRemoved->getRightChild() == nullptr)
    {
        temp = nodeToBeRemoved;
        NodeToBeRemoved = temp->getLeftChild();
        delete temp;
    }
    else
    {
        current = nodeToBeRemoved->geLftChild();
        trailing = nullptr;
        
        while(current->getRightChild() != nullptr)
        {
            trailing = current;
            current = currenr->getRightChild();
            
        }
        
        nodeoBeRemoved->setValue(current->getValue());
        if(trailing == nullptr)
        {
            nodeToBeRemoved->setLeftChild(current->getLeftChild());
            else
            {
                trailing->setRightChi(current->getLeftChild());
            }
            delete current;
        }
    }

    
}




