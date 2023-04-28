#include "ArrCirQueue.h"
#include "Customers.h"
#include <iostream>

ArrCirQueue::ArrCirQueue() {

	head = 0;
	tail = -1;
	size = 0;
}

bool ArrCirQueue::isEmpty() {

	if (tail == -1) {
		return true;
	}

	else {
		return false;
	}

}

void ArrCirQueue::Enqueue(Customer person, bool& success) {

	success = size < MAX;

	if (success) {
		tail++;

		if (tail == MAX) {
			tail = 0;
		}
		
		data[tail] = person;
		size++;

	}

}

void ArrCirQueue::Dequeue(Customer person, bool& success) {

	success = size > 0;

	if (success) {

		person = data[head];

		head++;

		if (head == MAX) {
			head = 0;
		}

		size--;

		std::cout << person.CustomerName;

	}

}

void ArrCirQueue::getHead(Customer person, bool& success) {

	success = size > 0;

	if (success) {

		person = data[head];

	}

}

int ArrCirQueue::getLength() {

	return tail + 1;

}

void ArrCirQueue::printQueue() {

	for (int i = 0; i <= tail; i++) {
		data[i].printCustomer();

		std::cout << std::endl;
	}

}