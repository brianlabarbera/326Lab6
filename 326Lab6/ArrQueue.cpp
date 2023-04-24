#include "ArrQueue.h"
#include "Customers.h"
#include <iostream>



ArrQueue::ArrQueue() {

	tail = -1;
	size = 0;

}

bool ArrQueue::isEmpty() {

	if (tail == -1) {
		return true;
	}

	else {
		return false;
	}

}

void ArrQueue::Enqueue(Customer person, bool& success) {

	success = size < max;

	if (success) {

		tail++;

		data[tail] = person;
		size++;

	
	}

}

void ArrQueue::Dequeue(Customer person, bool& success) {

	success = size > 0;

	if (success) {

		person = data[0];

		if (tail > 0) {

			for (int i = 0; i <= tail; i++) {
				data[i] = data[i + 1];

				std::cout << person.CustomerName;

			}

		}

		else {
			std::cout << "Queue is empty";
		}

		tail--;

	}

}

int ArrQueue::getLength() {

	return tail + 1;

}

void ArrQueue::getHead(Customer person, bool& success) {

	success = size > 0;

	if (success) {
		person = data[0];
	}
}

void ArrQueue::printQueue() {

	for (int i = 0; i <= tail; i++) {
		data[i].printCustomer();

		std::cout << std::endl;
	}

}
