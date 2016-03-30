/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: nhay7834
 */
#include "NodeController.h"
#include <iostream>
#include <stdlib.h>
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
    
    
	numbers->addToFront(3);
	numbers->addToEnd(8);
    numbers->addAtIndex(1,188);

	cout << "End should be 8 and is " << numbers->getEnd() << endl;
    cout << "Front should be 3 and is " << numbers->getFront() << endl;
    cout << "the middle should be 188 and is" << numbers->getFromIndex(2);
    
    numbers->addToEnd(19);
    numbers->addToEnd(20);
    
    numbers->removeFromEnd();
    cout << "the end should be 19 and is " << numbers->getEnd() << endl;
    numbers->removeFromIndex(2);
    cout << "the index 1 should be 188 and is" << numbers->getFromIndex(1) << endl;
    numbers->removeFromFront();
    cout << "the beginning should be 188 and is" << numbers->getFront() << endl;
    
    cout << "the size of the list should be 2 and is" << numbers->getSize();
    cout << "the index of 19 should be 1 and is" << numbers->indexOf(2);
    
    
    
    


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



void NodeController::sortData()
{
    CTECArray<int> randomNumberArray(5000);
    CTECList<int> randomNumberList;
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
    sortTimer.stopTimer();
    sortTimer.displayTimerInfo();
    
    sortTimer.resetTimer();
    
    sortTimer.startTimer();
    std::sort(std::begin(myCPlusPlusArray), std::end(myCPlusPlusArray));
    sortTimer.stopTimer();
    sortTimer.displayTimerInfo();
    
    sortTimer.resetTimer();
    
}









