//
//  NodeController.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef NodeController_hpp
#define NodeController_hpp

#include <stdio.h>

class NodeController
{
private:
    Timer arrayTimer;
    void sortData();
    void testList();
    void searchTest();
    
    void swap(int first, int second);
    void quicksort(int first, int last);
    int partition(int first, int last);
    void doQuick();
    
    int * mergeData;
    void doMergesort();
    void mergesort();
    void mergesort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);
public:
    NodeController();
    virtual~NodeController();
    void start();
};
#endif /* NodeController_hpp */
