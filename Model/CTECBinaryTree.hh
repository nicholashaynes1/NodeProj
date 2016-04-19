//
//  CTECBinaryTree.hpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/11/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.hpp"
template<class Type>
class CTECBinaryTree
{
private:
    int size;
    TreeNode<Type> * root;
    int height;
    void calculateSize(TreeNode<Type> * currentNode);
    bool balenced;
    bool contains(Type value, CTECBinaryTree<Type> * currentTree);
    TreeNode<Type> * getRightMostChild(CTECBinaryTree<Type> leftSubTree);
    
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool insert(const Type& value);
    Type remove(const Type& value);
    bool contains(Type value);
    int getSize();
    int getHeight();
    bool isBalenced;
    TreeNode<Type> * getRoot();
    void preorderTraversal(TreeNode<Type> * currentNode);
    void inorderTraversal(TreeNode<Type> * currentNode);
    void postorderTraversal(TreeNode<Type> * currentNode);
    
};

#endif /* CTECBinaryTree_hpp */
