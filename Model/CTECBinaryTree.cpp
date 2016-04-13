//
//  CTECBinaryTree.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 4/11/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//
#include <iostream>
#include "CTECBinaryTree.hpp"
using namespace std;

template<class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    this->root = nullptr;
    this->size = 0;
    this->height = 0;
    this->balenced = true;
}



template<class Type>
int CTECBinaryTree<Type> :: getSize()
{
    size = 0;
    size = calculatedSize(root);
    return size;
}


template<class Type>
void CTECBinaryTree<Type> :: calculateSize(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode -> getleftChild);
        calculateSize(currentNode->getRightChild);
        size++;
        
        
    }
}

template<class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRoot()
{
    return root;
}

template<class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getValue() << " ";
        
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
    }
}

template<class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inorderTraversal(currentNode->getLeftChild());
         cout << currentNode->getValue() << " ";
        inorderTraversal(currentNode->getRightChild());
    }
}
template<class Type>
void CTECBinaryTree<Type> :: postorderTraversal(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
        cout << currentNode->getValue() << " ";
    }
}

template<class Type>
bool CTECBinaryTree<Type> :: contains(Type Value)
{
    bool isInTree = false;
    if(root != nullptr)
    {
        if(root->getValue() == Value)
        {
            isInTree = true;
        }
        else
        {
            if(Value < root-> getValue())
            {
             isInTree = contains(Value, root->getLeftChild());
            }
            else
            {
                isInTree = contains(Value, root->getRightChild);
            }
        
        }
        
    }
    
    return isInTree;
}






template<class Type>
bool CTECBinaryTree<Type> :: contains(Type Value, CTECBinaryTree<Type> * currentTree)
{
    bool isInTree = false;
    
    if(currentTree != nullptr)
    {
        if(currentTree->getRoot() -> getValue() == Value)
        {
            isInTree = true;
        }
        else
        {
            if(Value < currentTree-> getValue())
            {
                isInTree = contains(Value, currentTree->getLeftChild());
            }
            else
            {
                isInTree = contains(Value, currentTree->getRightChild);
            }

        }
    }
    
    return isInTree;
}

template<class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    TreeNode<Type> * current = root;
    TreeNode<Type> * parentOfCurrent;
    
    if(contains(value))
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            parentOfCurrent = current;
            
            if(current->getValue > value)
            {
                current->getLeftChild();
            }
            else
            {
                current->getRightChild();
            }
        }
        if(parentOfCurrent->getValue > value)
        {
            current->setLeftChild(value);
        }
        else
        {
            current->setRightChild(value);
        }
    }
    return true;
}



