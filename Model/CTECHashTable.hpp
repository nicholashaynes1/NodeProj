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
#include "CTECList.cpp"
template <class Type>
class CTECHashTable
{
private:
    int size;
    int capacity;
    int chainedCapacity;
    int chainedSize;
    CTECList<HashNode<Type>> * chainedStorage;
    HashNode<Type> * internalStorage;
    double efficiencyPercentage();
    void updateChainCapacity();
    
    int findPos(HashNode<Type> currentNode);
    int handleCollision(HashNode<Type> currentNode);
    void updateCapacity();
    
    int getNextPrime();
    bool isPrime(int candidateNumber);
    
    
    
public:
    CTECHashTable();
    ~CTECHashTable();
    void add(HashNode<Type> currentNode);
    void addChained(HashNode<Type> currentNode);
    
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
    
    
    
    
};






#endif /* CTECHashTable_hpp */
