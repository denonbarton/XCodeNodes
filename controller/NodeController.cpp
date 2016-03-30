/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: dbar0540
 */

#include "NodeController.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

NodeController::NodeController()
{
	notHipster = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
	// DO Auto-generated destructor stub
}

void NodeController :: start()
{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipster->getSize(); index++)
	{
		notHipster->set(index, (index * 23));
	}

	for(int index = notHipster->getSize()-1; index >= 0; index --)
	{
		cout<< "The contents of the notHipster array node "  << index << "are: " << notHipster->get(index) << endl;
	}
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}

void NodeController::sortData()
{
    /*
     Ceate a CTECList, CTECArray
     Fill them with random stuff(numbers)
     Start a timer, sort, stop timer, display info for list
     Start a timer, sort, stop timer, display info for array
     */
    
    CTECArray<int> randomNumberArray(5000);
    CTECArray<int> randomNumberList;
    int myCPlusPlusArray[5000];
    
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        randomNumberArray.set(spot, myRandom);
        randomNumberList.addToEnd(myRandom);
        myCPlusPlusArray[spot] = myRandom;
    }
    
    Timer sortTimer;
    sortTimer.startTimer();
    randomNumberArray.selectionSort();
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    sortTimer.resetTimer();
    
    sortTimer.startTimer();
    std::sort(begin(myCPlusPlusArray), end(myCPlusPlusArray));
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation()
    
    sortTimer.restTimer();
    
}


