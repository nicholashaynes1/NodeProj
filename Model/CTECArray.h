/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: nhay7834
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_
#include "ArrayNode.h"

template<class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
    void swap(int indexOne, int indexTwo);
    int indexOf(Type searchValue);
	Type get(int pos);
	int getSize();
	void set(int pos, const Type& value);
    void selectionSort();

};

#endif /* MODEL_CTECARRAY_H_ */
