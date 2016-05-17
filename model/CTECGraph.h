//
//  CTECGraph.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#ifndef CTECGraph_h
#define CTECGraph_h

#include <stdio.h>
#include <set>

template <class Type>
class CTECGraph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix[MAXIMUM][MAXIMUM];
    Type labels[MAXIMUM];
    int manyVertices;
    void depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex, bool * markedVertices);
public:
    CTECGraph();
    ~CTECGraph();
    
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool isEdge(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    void depthFirstTraversal(CTECGraph<Type> currentGraph, int vertex);
    void breadthFirstTraversal(CTECGraph<Type> currentGraph, int vertex);
};

#endif /* CTECGraph_hpp */