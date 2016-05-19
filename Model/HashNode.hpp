//
//  HashNode.hpp
//  NodeProj
//
//  Created by Haynes, Nicholas on 5/9/16.
//  Copyright © 2016 Nick Haynes. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <stdio.h>
#include <iostream>

template<class Type>
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
#endif /* HashNode_hpp */
