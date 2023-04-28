#ifndef POICIRQUEUE_H
#define POICIRQUEUE_H
#include "Customers.h"

class PoiCirQueue {

public:

	PoiCirQueue();
	~PoiCirQueue();
	bool isEmpty();
	void Enqueue(struct Customer, bool& success);
	void Dequeue(struct Customer, bool& success);
	void getHead(struct Customer, bool& success);
	int getLength();
	void printQueue();


private:

	struct Node {
		Customer data;
		Node* next;
	};

	Node* head;
	Node* tail;

};

#endif