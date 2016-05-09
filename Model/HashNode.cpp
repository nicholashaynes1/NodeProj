//
//  HashNode.cpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 5/9/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#include "HashNode.hpp"
#include <iostream>

template<class Type>
class HashNode
{
private:
    int key;
    Type value;
    
public:
    HashNode(int key, const Type& value);
    int getKey();
    Type getValue;
    
    
};