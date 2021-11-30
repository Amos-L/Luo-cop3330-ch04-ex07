/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Amos Luo
 */

#include "std_lib_facilities.h"
using namespace std;

int convertString(string input) {
	double result{};

	if (input == "0" || input == "zero") {
		result = 0;
	}
	else if (input == "1" || input == "one") {
		result = 1;
	}
	else if (input == "2" || input == "two") {
		result = 2;
	}
	else if (input == "3" || input == "three") {
		result = 3;
	}
	else if (input == "4" || input == "four") {
		result = 4;
	}
	else if (input == "5" || input == "five") {
		result = 5;
	}
	else if (input == "6" || input == "six") {
		result = 6;
	}
	else if (input == "7" || input == "seven") {
		result = 7;
	}
	else if (input == "8" || input == "eight") {
		result = 8;
	}
	else if (input == "9" || input == "nine") {
		result = 9;
	}
	else {
		cout << "Operand must be single digit\n";
		exit;
	}

	return result;
}

int main() {

	string operation;
	double num1 = 0;
	double num2 = 0;
	double result{};
	string input1, input2;

	cout << "Enter operation: \n";
	cin >> operation;
	cout << "Enter first operand: \n";
	cin >> input1;
	cout << "Enter second operand: \n";
	cin >> input2;

	num1 = convertString(input1);
	num2 = convertString(input2);

		if (operation == "+" || operation == "add") {
			result = num1 + num2;
			cout << "Result is " << result << "\n";
		}
		if (operation == "-" || operation == "minus") {
			result = num1 - num2;
			cout << "Result is " << result << "\n";
		}
		if (operation == "*" || operation == "mul") {
			result = num1 * num2;
			cout << "Result is " << result << "\n";
		}
		if (operation == "/" || operation == "div") {
			result = num1 / num2;
			if (num1 == 0 || num2 == 0) {
					cout << "Cannot divide by zero";
					exit;
				}
			cout << "Result is " << result << "\n";
		}
	}
