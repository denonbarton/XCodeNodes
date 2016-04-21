//
//  CTECBinaryTreePM.hpp
//  XCodeNodes
//
//  Created by Barton, Denon on 4/13/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CTECBinaryTreePM_hpp
#define CTECBinaryTreePM_hpp

#include "TreeNodePM.hpp"
namespace CtecData
{
    template <class Type>
    class CTECBinaryTreePM
{
private:
    int size;
    TreeNodePM<Type> * root;
    int height;
    bool balanced;
    void calcualteSize(TreeNodePM<Type> * currentNode);
    
    bool contains(Type value, CTECBinaryTreePM<Type> * currentTree);
    TreeNodePM<Type> * getRightMostChild(CTECBInaryTreePM<Type> leftSubTree)
    TreeNodePm<Type> * getRightMostChild(CTECBinaryTreePM<Type> rightSubTree);
    
    void remove(TreeNodePMType> nodeToBeRemoved);
public:
    CTECBInaryTreePM();
    ~CTECBinaryTreePM();
    bool insert(const Type& value);
    Type remove(const Type& value);
    bool contains(const Type& value);
    int getSize();
    int getHeight();
    bool isBalanced();
    TreeNodePM<Type> * getRoot();
    void preorderTraversal(TreeNodePM<Type> * currentNode);
    void inorderTraversal(TreeNodePm<Type> * currentNode);
    void postorderTraversal(TreeNodePM<Type> * currentNode);
}
}
#endif /* CTECBinaryTreePM_hpp */

// 621 - 624
