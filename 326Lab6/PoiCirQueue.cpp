#include "PoiCirQueue.h"
#include "Customers.h"
#include <iostream>

PoiCirQueue::PoiCirQueue() {

	head = 0;
	tail = 0;

}

PoiCirQueue::~PoiCirQueue(){



}

void PoiCirQueue::Enqueue(Customer person, bool& success) {

	Node* newNode = new Node;

	newNode->next = 0;
	newNode->data = person;

	if (!head) {
	
		head = tail->next;

	}

	else {
		tail->next = newNode;
		tail = newNode;
	}
}
