#ifndef ARRQUEUE_H
#define ARRQUEUE_H
#include "Customers.h"

const int max = 15;

class ArrQueue {


public: 

	ArrQueue();
	bool isEmpty();
	int getLength();
	void Enqueue(struct Customer, bool& success);
	void Dequeue(struct Customer, bool& success);
	void getHead(struct Customer, bool& success);
	void printQueue();

private:

	Customer data[max];
	int size;
	int tail;

};

#endif