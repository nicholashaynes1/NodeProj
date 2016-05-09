//
//  HashNode.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 5/9/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#include "HashNode.hpp"
template<class Type>
HashNode<Type> :: HashNode(int key, const Type& value)
{
    this->key = key;
    this->value = value;
}

template<class Type>
int HashNode<Type> :: getKey()
{
    return key;
}

template<class Type>
Type HashNode<Type> :: getValue()
{
    return value;
}