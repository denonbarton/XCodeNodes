//
//  CTECHashTable.cpp
//  XCodeNodes
//
//  Created by Barton, Denon on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "CTECHashTable.hpp"

using namespace CTECData;
using namespace std;

template<class Type>
CTECHashTable<Type> :: CTECHashTable
{
    this->size = 0;
    this->capacity =101;
    this->efficiencyPercentage = .667;
    this->internaltionalStorage = new Type[capacity];
}

template<class Type>
CTECHashTable<Type> :: ~CTECHashTable()
{
    delete [] internalStorage;
}

template < class Type>
int CTECHashTable<Type> :: getSize()
{
    return this->size;
}

template <class Type>
void CTECHashTable:: add(const Type& value)
{
    if(!contains(value))
    {
        if(size/capacity >= this >efficiencyPercentage)
        {
            updateCapacity();
        }
        int insertionIndex = findPosition(value);
        
        if(internalStorage[insertionIndex] != nullptr)
        {
            while (internalStorage[insertionIndex] !+ nullptr)
            {
                sertionIndex = (insertionIndex + 1) % capacity;
            }
            
        }
        
        internalStorage[insetionIndex] = value;
        size++;
        
    }
}

template <class Type>
int CTECHashTable<ype> :: findPosition(HashNode<Type> currentNode)
{
    int positio = 0;
    
    position = currentNode.getKey() % capacity;
    
    return position;
}

template <class Type>
int CTECHashTable<Type> : getNextPrime()
{
    int nextPrime = capaciy;
    
    nextPrime *= 2;
    nextPrime++;
    
    while(!isPrimenextPrime))
    {
        nextPrime+= 2;
    }
    return nextPrime;
}

template <class Type>
bool CTECHashTable<Type> :: isPrime(int candidateNumber)
{
    bool isPrime = true;
    
    if(cadidateNumber <=1
       {
           isPrime = false;
       }
       else if(candidateNumber == 2 || candidateNumber == 3)
       {
           isPrime = true;
       }
       else if(candidate Number % 2 == 0)
       {
           isPrime = false;
       }
       else
       {
           for(int spot = 3; spot < sqrt(candidateNumber) + 1; spot += 2)
           {
               if(cadidateNumber% spot == 0)
               {
                   isPrime = false;
                   break;
               }
           }
       }
       
       return isPrime;
}
       
       template <class Type>
       void CTECHashTable<Type> :: updateCapacity()
       {
           int updatedCapacity = getNextPrime();
           int oldCapacity;
           capacity = updatedCapacity;
           
           HashNode<Type> * largerStorage = new HashNode<Type>[capacity];
           
           for(int index = 0; index < oldCapacity; index++)
            {
               if(internalStorage[index]
                {
                      int updatedIndex = findPosition(internalStorage[index]);
                      largerStoreage[updatedIndex] = internalStorage[index];
                }
           }
                  internalStorage = largerStorage;
    }
                  template <class Type>
                  bool CTECHashTable<Type> :: contains(HashNode<Type> currentNode)
                  {
                      bool isInTable = false;
                      int possibleLocation = findPosition(currentNode);
                      
                      while(internalStorage[possibleLocation] !+ nullptr && !isInTable)
                      {
                          if(internalStorage[possibleLocation].getValue() == currentNode.getValue())
                          {
                              isnTable = True;
                          }
                          possibleLocation = (possibleLocation + 1) % capacity;
                      }
                    return isInTable;
                  }
template <class Type>
                  inCTECHashTable<Type> :: handleCollision(HashNode<Type> currentNode)
                  {
                      int updatedPosition = findPosition(currentNode);
                      
                      updatedPosition = findPosition(currentNode);
                      
                      return updatedPosition
                  }




