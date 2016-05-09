//
//  CTECHashTable.hpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 5/5/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#ifndef CTECHashTable_hpp
#define CTECHashTable_hpp

#include <stdio.h>
#include "HashNode.cpp"
template <class Type>
class CTECHashTable
{
private:
    int size;
    int capacity;
    HashNode<Type> * internalStorage;
    double efficiencyPercentage();
    
    int findPos(HashNode<Type> currentNode);
    int handleCollision(HashNode<Type> currentNode);
    void updateCapacity();
    
    
    
public:
    CTECHashTable();
    ~CTECHashTable();
    void add(HashNode<Type> currentNode);
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
    
    
    
    
};






#endif /* CTECHashTable_hpp */
