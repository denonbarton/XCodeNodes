//
//  CTECGraph.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#ifndef CTECGraph_hpp
#define CTECGraph_hpp
#

namespace CTECData
{
    template <class Type>
    class CTECGraph
    {
    private:
        static const int MAXIMUM = 20;
        bool adjacencyMatrix[MAXIMUM] [MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
        
    public:
        CTECGraph();
        ~CTECGraph();
        
        void addVertex(const Type& value);
        void addEdge(int source, int target);
        void removdge(int source, int target);
        Type& operator [] (int vertex);
        Type operator [] (int vertex) const;
        int size();
        bool lsEdge(int source, int target) const;
        std::set<int> neighbors(int vertex) const;
        
        
        
        
    };
}
#endif /* CTECGraph_hpp*/
