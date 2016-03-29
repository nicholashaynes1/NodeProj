/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: nhay7834
 */

#include "CTECArray.h"
#include<iostream>
#include<assert.h>
using namespace std;
template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->size = size;
		this->head = nullptr;
		//defensive code
		if(size <= 0 )
		{
			cerr << "WHAAAAAAAAAAAAAT?!" << endl;
			return;
		}
	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
				{
					ArrayNode<Type> * nextNode = new ArrayNode<Type>();
					nextNode->setNext(head);
					this->head = nextNode;
				}
				else
				{
					ArrayNode<Type>* firstNode = new ArrayNode<Type>();
					this->head = firstNode;
				}
	}

}
template<class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			delete deleteMe;
			deleteMe = head;
		}
		else
		{
			delete deleteMe;
			deleteMe = head;
		}
	}

	delete head;
}

/*
    Gets the position of the item being searched for in the list.
*/
template<class Type>
int CTECArray<Type>::indexOf(Type searchValue)
{
    assert(this->size<0);
    ArrayNode<Type> * current = head;
    int indexNotFound = -1;
    
    for(int index = 0; index < this->size; index++)
    {
        if(current->getValue == searchValue)
        {
            return index;
        }
    }
    
    return indexNotFound;
}

template<class Type>
void CTECArray<Type> :: swap(int indexOne, int indexTwo)
{
    assert(indexOne < size && indexTwo < size);
    Type temp = get(indexOne);
    set(indexOne, get(indexTwo));
    set(indexTwo, temp);
}


template<class Type>
Type CTECArray<Type>::get(int pos)
{
	assert(pos < size && pos >= 0);
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= pos; spot++)
		{
			if (spot != pos)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
    return current->getValue();
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template<class Type>
void CTECArray<Type>::set(int pos, const Type& value)
{
	assert(pos < size && pos >= 0);
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= pos; spot++)
		{
			if (spot != pos)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}

		}



}









