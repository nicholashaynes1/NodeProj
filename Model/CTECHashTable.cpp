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
    this->internalStorage = new Type[capacity];
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


