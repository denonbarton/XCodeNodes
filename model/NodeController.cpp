//
//  NodeController.cpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.hpp"

void NodeController::swap(int first, int last)
{
    int temp = mergeData[first] = mergeData[last];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}

void NodeController::doQuick()
{
    mergeData = new int[1000000000];
    
    for (int spot = 0; spot < 1000000000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    Timer mergeTimer;
    mergeTimer.startTimer();
    quicksort(0, 1000000000-1);
    mergeTimer.stoptimer(0);
    mergeTimer.displayTimerInformation();
    
    delete [] mergeData;
}

int NodeController::partition(int first, int last)
{
    int pivot;
    
    int index, smallIndex;
    swap(first, (first + last)/2);
    
    pivot = mergeData[first];
    smallIndex = first;
    
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] < pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }

    }
    swap(first, smallIndex);
    
    return smallIndex;
}