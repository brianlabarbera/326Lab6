#include <iostream>
#include "ArrQueue.h"
#include "Customers.h"

void problem1();

int main() {

	problem1();

	return 0;
}

void problem1() {
	
	ArrQueue Queue;

	std::string CustomerName;
	int ArrivalTime;
	int ServiceTime;
	int FinishTime;
	bool success;

	std::cout << "Enter customer name:" << std::endl;
	std::cin >> CustomerName;

	std::cout << "Enter arrival time:" << std::endl;
	std::cin >> ArrivalTime;

	std::cout << "Enter service time:" << std::endl;
	std::cin >> ServiceTime;

	std::cout << "Enter finish time:" << std::endl;
	std::cin >> FinishTime;

	Customer person1(CustomerName, ArrivalTime, ServiceTime, FinishTime);

	Queue.Enqueue(person1, success);

	Queue.printQueue();

	std::cout << "Enter customer name:" << std::endl;
	std::cin >> CustomerName;

	std::cout << "Enter arrival time:" << std::endl;
	std::cin >> ArrivalTime;

	std::cout << "Enter service time:" << std::endl;
	std::cin >> ServiceTime;

	std::cout << "Enter finish time:" << std::endl;
	std::cin >> FinishTime;

	Customer person2(CustomerName, ArrivalTime, ServiceTime, FinishTime);

	Queue.Enqueue(person2, success);

	Queue.printQueue();

	Queue.Dequeue(person1, success);

	Queue.Dequeue(person1, success);
}