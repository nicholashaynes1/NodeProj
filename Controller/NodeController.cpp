/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: nhay7834
 */
#include "NodeController.h"
#include <iostream>
using namespace std;

NodeController :: NodeController()
{
 //auto-generated constructor
notHipsterInts = new CTECArray<int>(5);
numbers = new CTECList<int>();
}

NodeController :: ~NodeController()
{
	//auto-generated destructor
}

void NodeController :: testList()
{
    
    numbers->addAtIndex(1,188);
	numbers->addToFront(3);
	numbers->addToEnd(8);

	cout << "End should be 8 and is " << numbers->getEnd() << endl;
    cout << "Front should be 3 and is " << numbers->getFront() << endl;
    cout << "the middle should be 188 and is" << numbers->getFromIndex(2);
    
    numbers->addToEnd(19);
    numbers->addToEnd(20);
    
    numbers->removeFromEnd();
    cout << "the end should be 19 and is " << numbers->getEnd() << endl;
    numbers->removeFromIndex(1);
    cout << "the index 1 should be 188 and is" << numbers->getFromIndex(1) << endl;
    numbers->removeFromFront();
    cout << "the beginning should be 188 and is" << numbers->getFront() << endl;
    
    
    
    


}



void NodeController :: start()
{

	testList();

//	arrayTimer.startTimer();
//
//	for(int index = 0; index < notHipsterInts->getSize(); index++)
//	{
//		notHipsterInts->set(index, (index *23));
//	}
//
//	for(int index = notHipsterInts -> getSize() -  1; index >=0; index --)
//	{
//		cout << "tuh contents of not hipster ints array node " << index << " are " << notHipsterInts->get(index) << endl;
//	}
//
//	arrayTimer.stopTimer();
//	arrayTimer.displayTimerInfo();

}
