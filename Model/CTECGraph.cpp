//
//  CTECGraph.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/25/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#include "CTECGraph.hpp"

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
    
}