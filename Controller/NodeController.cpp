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
    hashes = new CTECHashTable<int>();

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
    tryHashTable();
//    tryTrees();
//    tryGraphs();
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


void NodeController::doMergesort()
{
    mergeData = new int[500000];
    
    for(int spot = 0; spot < 500000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for(int spot = 0; spot < 5000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergesort(mergeData,500000);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInfo();
    
    for(int spot = 0; spot < 500000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    delete [] mergeData;
}

void NodeController::mergesort(int data[], int size)
{
    int sizeOne;
    int sizeTwo;
    
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort((data+sizeOne), sizeTwo);
        
        merge(data, sizeOne, sizeTwo);
    }
}


void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne)[copied2])
        {
            temp[copied++] = data[copied1++];
        }
        else
        {
            temp[copied++] = (data + sizeOne)[copied2++];
        }
    }
    
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied1++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data+ sizeOne)[copied2++];
    }
    
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

void NodeController::quicksort(int first, int last)
{
    int pivotIndex;
    
    if(first < last)
    {
        pivotIndex = partition(first, last);
        quicksort(first, pivotIndex - 1);
        quicksort(pivotIndex+1, last);
    }
}

int NodeController::partition(int first, int last)
{
    int pivot;
    
    int index, smallIndex;
    swap(first, (first + last) /2);
    
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
    swap(first,smallIndex);
      return smallIndex;
}



void NodeController::swap(int first, int last)
{
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}

void NodeController::doQuick()
{
    mergeData = new int[100000000];
    
    for(int spot = 0; spot < 100000000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    Timer mergeTimer;
    mergeTimer.startTimer();
    quicksort(0,100000000-1);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInfo();
    
    
    delete [] mergeData;

}



void NodeController::tryGraphs()
{
    CTECGraph<int> testGraph;
    testGraph.addVertex(4);
    testGraph.addVertex(13);
    testGraph.addVertex(2);
    testGraph.addVertex(5);
    testGraph.addVertex(8);
    testGraph.addVertex(21);
    testGraph.addVertex(43);
    testGraph.addVertex(1);
    testGraph.addVertex(99);
    testGraph.addVertex(10);
    //edges
    testGraph.addEdge(0,1);
    testGraph.addEdge(1,2);
    testGraph.addEdge(2,3);
    testGraph.addEdge(3,4);
    testGraph.addEdge(4,5);
    testGraph.addEdge(5,6);
    testGraph.addEdge(6,7);
    testGraph.addEdge(7,8);
    testGraph.addEdge(8,9);
   
    
    testGraph.breadthFirstTraversal(testGraph,0);
//    testGraph.depthFirstTraversal(testGraph,0);
    
}

void NodeController::tryTrees()
{
    
    CTECBinaryTree<int> testTree;
    cout<<"this is pre removal" << endl;
    
    testTree.insert(1);
    testTree.insert(5);
    testTree.insert(7);
    testTree.insert(3);
    testTree.insert(2);
    testTree.insert(8);
    testTree.insert(12);
    testTree.inorderTraversal(testTree.getRoot());
 
    
    testTree.remove(1);
    cout<<"this is post removal" << endl;
    testTree.inorderTraversal(testTree.getRoot());
   

}


void NodeController::tryHashTable()
{
    CTECHashTable<int> tempTable;
    HashNode<int> tempArray[10];
    for(int spot = 0; spot < 10; spot++)
    {
        int randomValue = rand();
        int randomKey = rand();
        HashNode<int> * temp = new HashNode<int>(randomKey, randomValue);
        tempTable.add(*temp);
        tempArray[spot] = *temp;
    }
    bool test = tempTable.contains(tempArray[0]);
    string result;
    if(test)
    {
        result = "yup";
    }
    else
    {
        result = "nope";
    }
    
}





