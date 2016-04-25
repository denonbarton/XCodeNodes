//
//  CTECGraph.cpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECGraph.hpp"

using namespace CTECData;

template <class Type>
const int CTECGraph<Type> :: MAXIMUM;

template <class Type>
void CTECGraph<Type> :: addVertex(const Type&value)
{
    assert(size() < MAXIMUM);
    int newVertexNumber = manyVertices;
    manyVertices++;
    
    for(int otherVertxNumber = 0; otherVertexNumber < manyVertices; otherVertxNumber)

    {
        adjacencyMatrix[otherVertexNumber] [newVertexNumber] = false;
        adjacencyMatrix {newVertexNumber] [otherVertexNumber] = false
    }
        
        labels[newVertexNumber] = value;
}

template <class Type>
void CTECGraph<Type> :: addEdge(int source, int target)
{
    assert(source <size() && target < size());
    adjacencyMatrix[source][target] = true;
}

template <class Type>
    bool CTECGraph<Type> :: isEdge(int source, int target) const
{
    assert(source < size() && target< size());
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    
    return isAnEdge;
}

template <class Type>
    Type& CTECGph<Type> :: operator[](int vertex) const
    {
        assert(vertex < size());
        return labels[vertex];
    }

template <class Type>
    std::set<int> CTECGraph<Type> :: neighbors(int vertex) const
    {
        assert(vertex < size());
        std::set<int> vertexNeibors;
        
        for(int index = 0; index <size(); index++)
        {
            if(adjacencuMatrix[vertex][index])
            {
                vertexNeighbors.insert(index);
            }
        }
        return vertexNeighbors;
    }