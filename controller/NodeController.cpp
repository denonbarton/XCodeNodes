/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: dbar0540
 */

#include "NodeController.h"
#include <iostream>

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



