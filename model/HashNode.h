//
//  HashNode.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 5/9/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp


#include <stdio.h>

namespace CTECData
{
    template <class Type>
    class HashNode
    {
    private:
        int key;
        Type value;
    public:
        HashNode();
        HashNode(int key, const Type& value);
        int getKey();
        Type getValue();
    };
}

#endif /* HashNode_hpp */
