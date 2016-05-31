//
//  CTECHashTable.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp

#include "HashNode.cpp"
#include "CTECList.h"
#include <stdio.h>

#include "HashNode.cpp"

#include <stdio.h>

namespace CTECData
{
    template  <class Type>
    class CTECHashTable
    {
    private:
        int size;
        int capacity;
        HashNode<Type> ** internalStorage;
        void updateTableCapacity();
        int chainedCapacity;
        int chainedSize;
        CTECList<HashNode<Type>> * chainedStorage;
        void updateChainedCapacity();
        
        double efficiencyPercentage;
        
        int findPostion(HashNode<Type> currentnode);
        int handleCollision(HashNode<Type> currentNode);
        void updateCapacity();
        int getNextPrime();
        bool isPrime(int candidateNumber);
      
    public:
        CTECHashTable();
        ~CTECHashTable();
        
        void add(HashNode<Type> currentNode);
        bool remove(HashNode<Type> currentNode);
        bool contains(HashNode<Type> currentNode);
        int getSize();
    };
}

#endif /* CTECHashTable_hpp */
