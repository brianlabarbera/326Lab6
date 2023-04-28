#ifndef ARRCIRQUEUE_H
#define ARRCIRQUEUE_H
#include "Customers.h"

const int MAX = 10;

class ArrCirQueue {

public:
	ArrCirQueue();
	bool isEmpty();
	void Enqueue(struct Customer, bool& success);
	void Dequeue(struct Customer, bool& success);
	void getHead(struct Customer, bool& success);
	int getLength();
	void printQueue();

private:
	Customer data[MAX];
	int head;
	int tail;
	int size;


};

#endif