//
//  CTECBinaryTree.hpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/11/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.cpp"
template<class Type>
class CTECBinaryTree
{
private:
    int size;
    TreeNode<Type> * root;
    int height;
    void calculateSize(TreeNode<Type> * currentNode);
    bool balenced;
    bool contains(Type value, TreeNode<Type> * currentTree);
    TreeNode<Type> * getRightMostChild(TreeNode<Type> * leftSubTree);
    TreeNode<Type> * getLeftMostChild(TreeNode<Type> * rightSubTree);

    
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool insert(const Type& value);
    void remove(const Type& value);
    void remove(TreeNode<Type> * nodeToBeRemoved);
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
