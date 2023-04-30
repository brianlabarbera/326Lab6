#include "PoiCirQueue.h"
#include "Customers.h"
#include <iostream>

PoiCirQueue::PoiCirQueue() {

	head = NULL;
	tail = NULL;
	size = 0;

}

PoiCirQueue::~PoiCirQueue(){

	Node* curr = tail;
	Node* temp;

	while (curr != nullptr) {
		
		temp = curr;
	    
		curr = curr->next;

		delete temp;
	}

}

bool PoiCirQueue::isEmpty() {

	return tail == nullptr;

}

void PoiCirQueue::Enqueue(Customer person, bool& success) {

	Node* newNode = new Node;

	newNode->next = 0;
	newNode->data = person;

	if (!head) {
		head = newNode;
	}

	else {
		tail->next = newNode;
	}

	tail = newNode;
	tail->next = head;

	size++;

}

void PoiCirQueue::Dequeue(Customer person, bool& success) {

	if (head == NULL) {
		std::cout << "Queue is empty";
		return;
	}

	if (head == tail) {

		person = head->data;

		delete head;
		head = NULL;
		tail = NULL;

		std::cout << person.CustomerName << std::endl;

	}

	else {
		Node* temp = head;

		person = temp->data;

		head = head->next;
		tail->next = head;

		std::cout << person.CustomerName << std::endl;

		delete temp;
	}

	size--;

}

void PoiCirQueue::getHead(Customer person, bool& success) {

	person = head->data;

}

int PoiCirQueue::getLength() {

	if (head == NULL && tail == NULL) {
		return 0;
	}

	else if (tail >= head) {
		return (tail - head + 1);
	}

	else {
		return size;
	}

}


void PoiCirQueue::printQueue() {

	Node* curr = head;

	if (head == NULL) {
		std::cout << "Queue is empty" << std::endl;
		return;
	}

	do {
		curr->data.printCustomer();
	} while (curr != head);

}
