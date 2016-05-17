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

#include <stdio.h>

namespace CTECData
{
    template  <class Type>
    class CTECHashTable
    {
    private:
        int size;
        int capacity;
       HashNode<Type> * internalStorage;
        double efficiencyPercentage;
        
        int findPosition(HashNode<Type> currentNode);
        int handleCollision(HashNode<Type> currentNode);
        void updateSize();
        
      
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
