//
//  CTECHashTable.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 5/5/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#include <iostream>
#include "CTECHashTable.hpp"
using namespace std;


template<class Type>
CTECHashTable<Type> :: CTECHashTable()
{
    this->size = 0;
    this->capcity = 101;
    this->efficencyPercentage = .667;
    this->internalStorage = new HashNode<Type>[capacity];
}

template<class Type>
CTECHashTable<Type> :: ~CTECHashTable()
{
    delete [] internalStorage;
}

template<class Type>
int CTECHashTable<Type> :: getSize()
{
    return this->size;
}
template<class Type>
void CTECHashTable<Type> :: add(HashNode<Type> currentNode)
{
    if(!contains(currentNode))
    {
        if(size/capacity <= this->efficencyPercentage)
        {
            updateCapacity();
        }
        int insertionIndex = findPos(currentNode);
        if(internalStorage[insertionIndex] != nullptr)
        {
            while(internalStorage[insertionIndex] != nullptr)
            {
                insertionIndex = (insertionIndex + 1) % capacity;
            }
        }
        internalStorage[insertionIndex] = currentNode;
        size++;
    }
    
    
   
}

 template<class Type>
int CTECHashTable<Type> :: findPos(HashNode<Type> currentNode)
{
    int pos = 0;
    pos = currentNode.getKey() % capacity;
    return pos;
}