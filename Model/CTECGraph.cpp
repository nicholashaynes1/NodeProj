//
//  CTECGraph.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/25/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#include "CTECGraph.hpp"
#include <iostream>
#include <queue>
using namespace std;

template<class Type>
const int CTECGraph<Type> :: MAXIMUM;

template<class Type>
void CTECGraph<Type> :: addVertex(const Type& value)
{
    assert(size() < MAXIMUM);
    int newVertexNumber = manyVertices;
    manyVertices++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < manyVertices; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    labels[newVertexNumber] = value;
}
template<class Type>
void CTECGraph<Type> :: addEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source][target] = true;
}
template<class Type>
bool CTECGraph<Type>:: isEdge(int source, int target) const
{
    assert(source < size() && target < size());
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    
    return isAnEdge;
}
template<class Type>
Type& CTECGraph<Type> :: operator[](int vertex)
{
    assert(vertex < size());
    return labels[vertex];
    
}
template<class Type>
Type CTECGraph<Type> :: operator[](int vertex) const
{
    assert(vertex < size());
    return labels[vertex];
    
}
template<class Type>
std::set<int> CTECGraph<Type> :: neighbors(int vertex)const
{
    assert(vertex < size());
    std::set<int> vertexNeighbors;
    
    for(int index = 0; index < size(); index++)
    {
        if(adjacencyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return vertexNeighbors;
}
template <class Type>
void CTECGraph<Type> :: removeEdge(int source, int target)
{
assert(source < size() && target < size());
    adjacencyMatrix[source][target] = false;
}



template <class Type>
void CTECGraph<Type> :: depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex)
{
    bool markedVerticies[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(markedVerticies, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertex, markedVerticies);
}

template <class Type>
void CTECGraph<Type> :: depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex, bool * markedVertecies)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    markedVertecies[vertex] = true;
    cout << currentGraph[vertex] << endl;
    
    for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
    {
        if(!markedVertecies[*setIterator])
        {
            depthFirstTraversal(currentGraph, *setIterator, markedVertecies);
        }
    }
}
template <class Type>
void CTECGraph<Type> :: breadthFirstTraversal(CTECGraph<Type> currentGraph, int vertex)
{
    bool markedVertices[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    assert(vertex < currentGraph.size());
    
    std::fill_n(markedVertices,currentGraph.size(), false);
    markedVertices[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
}








