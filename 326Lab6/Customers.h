#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <iostream>

struct Customer {
	std::string CustomerName;
	int ArrivalTime;
	int ServiceTime;
	int FinishTime;

	Customer():CustomerName(" "), ArrivalTime(0), ServiceTime(0), FinishTime(0) {};
	
	Customer(std::string CustomerName, int ArrivalTime, int ServiceTime, int FinishTime) {

		this->CustomerName = CustomerName;
		this->ArrivalTime = ArrivalTime;
		this->ServiceTime = ServiceTime;
		this->FinishTime = FinishTime;

	}

	void printCustomer() {

		std::cout << CustomerName;
		std::cout << std::endl;
		std::cout << ArrivalTime;
		std::cout << std::endl;
		std::cout << ServiceTime;
		std::cout << std::endl;
		std::cout << FinishTime;
		std::cout << std::endl;

	}
};

#endif