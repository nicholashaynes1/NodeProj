//
//  CTECGraph.hpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/25/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#ifndef CTECGraph_hpp
#define CTECGraph_hpp
#include <set>
#include <stdio.h>
template<class Type>
class CTECGraph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM] [MAXIMUM];
    Type labels[MAXIMUM];
    int manyVertices;
    void depthFirstTraversal(CTECGraph<Type> graph, int vertex, bool markedVertecies[]);

public:
    CTECGraph();
    ~CTECGraph();
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool isEdge(int source, int target)const;
    std::set<int> neighbors(int vertex) const;
    void depthFirstTraversal(CTECGraph<Type> graph, int vertex);
    void breadthFirstTraversal(CTECGraph<Type> graph, int vertex);
};
#endif /* CTECGraph_hpp */
