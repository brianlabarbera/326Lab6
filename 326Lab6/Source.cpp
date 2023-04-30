#include <iostream>
#include <stack>
#include <queue>
#include "ArrQueue.h"
#include "Customers.h"
#include "ArrCirQueue.h"
#include "PoiCirQueue.h"
#include <string>

void problem1();
void problem2();
void problem3();
bool isPalindrome(std::string str);
int problem4();
void problemChoice();

int main() {

	problemChoice();

	return 0;
}

void problemChoice() {

	int choice = 0;

	do {

		std::cout << "Enter 1 to use the FIFO Queue with a non-circular array-based queue." << std::endl;

		std::cout << "or" << std::endl;

		std::cout << "Enter 2 to use the FIFO Queue with a circular array-based queue." << std::endl;

		std::cout << "or" << std::endl;

		std::cout << "Enter 3 to use the FIFO Queue with a circular pointer-based queue." << std::endl;

		std::cout << "Enter 4 to check if a string is a palindrome" << std::endl;

		std::cin >> choice;

		std::cout << std::endl;

		if (choice == 1) {

			problem1();

		}

		if (choice == 2) {

			problem2();

		}

		if (choice == 3) {

			problem3();

		}

		if (choice == 4) {
			problem4();
		}

	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4);

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

	Queue.Dequeue(person1, success);
}

void problem2() {

	ArrCirQueue Queue;

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

	Queue.Dequeue(person1, success);

}

void problem3() {

	PoiCirQueue Queue;

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

	Queue.Dequeue(person1, success);

}


	bool isPalindrome(std::string str) {
		std::stack<char> stk;
		std::queue<char> q;

		for (int i = 0; i < str.length(); i++) {
			char c = tolower(str[i]);
			if (isalpha(c)) {
				stk.push(c);
				q.push(c);
			}
		}

		while (!stk.empty() && !q.empty()) {
			if (stk.top() != q.front()) {
				return false;
			}
			stk.pop();
			q.pop();
		}

		return true;
	}




int problem4() {

	std::string str;
	std::cout << "Enter a string: ";
	std::getline(std::cin, str);

	if (isPalindrome(str)) {
		std::cout << str << " is a palindrome" << std::endl;
	}
	else {
		std::cout << str << " is not a palindrome" << std::endl;
	}

	return 0;

}