/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: nhay7834
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"
#include "../model/CTECList.cpp"


#include <string>
using namespace std;

class NodeController
{
private:
	Timer arrayTimer;
	CTECArray<int> * notHipsterInts;
	CTECList<int> * numbers;

public:
	void testList();
	virtual ~NodeController();
	NodeController();
	void start();
};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
