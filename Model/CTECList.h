/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: nhay7834
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.h"

template<class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	void addAtIndex(int index, const Type& value);
	void addToEnd(const Type& value);
	void addToFront(const Type& value);
    void swap(int indexOne, int indexTwo);
	Type removeFromFront();
	Type removeFromIndex(int index);
	Type removeFromEnd();
	Type getEnd();
	Type getFront();
	Type getFromIndex(int index);
	Type set(int index, const Type& Value);
	int getSize();
    int indexOf(Type searchValue);
};

#endif /* MODEL_CTECLIST_H_ */
