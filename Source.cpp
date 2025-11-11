/*
* File: P5 - 4
* Author : Anna Keeler
* Date : 9 / 25 / 2025
*
*Description : Write a program that checks if a simplified credit card value is valid.
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool isCardValid(string digits, int size);
bool isNumeric(string s);
bool isCorrectLength(string s);
//global variables
const int SIZE = 16;
string value;

int main(void) {
	while (true) {




		cout << "Please enter 16-digit card # or Q to quit: ";
		cin >> value;
		if (value == "Q") {
			break;
		}

		if (isNumeric(value) == false) {
			cout << "Error - card number must contain only digits." << endl;
		}
		else {
			if (isCorrectLength(value) == false) {
				cout << "Error - card number must contain 16 digits." << endl;
			}
			else {
				if (isCardValid(value, SIZE) == false) {
					cout << "Card is not valid." << endl;
				}
				else {
					cout << "Card is valid." << endl;
				}
			}

		}

	}
	return 0;


}
bool isCardValid(string digits, int size) {
	int digit;
	int digit2;
	int digit3;
	int digit4;
	int sum1 = 0;
	int sum2 = 0;
	int verify;

	int valueInteger[SIZE];
	for (int i = 0; i < digits.length(); i++) {
		switch (digits[i]) {
		case '0': valueInteger[i] = 0; break;
		case '1': valueInteger[i] = 1; break;
		case '2': valueInteger[i] = 2; break;
		case '3': valueInteger[i] = 3; break;
		case '4': valueInteger[i] = 4; break;
		case '5': valueInteger[i] = 5; break;
		case '6': valueInteger[i] = 6; break;
		case '7': valueInteger[i] = 7; break;
		case '8': valueInteger[i] = 8; break;
		case '9': valueInteger[i] = 9; break;
		}
	}
	int rightmostStartingDigits = 0;
	int otherDigits = 0;
	for (int i = digits.length() - 1; i >= 0; i--) {

		if (i % 2 == 1) {
			rightmostStartingDigits += valueInteger[i];

		}
		else {
			int temp = 2 * valueInteger[i];
			int numberOne = temp / 10;
			int numberTwo = temp % 10;
			otherDigits += numberOne + numberTwo;


		}
	}

	if ((rightmostStartingDigits + otherDigits) % 10 == 0) return true;
	else return false;


	verify = sum2 + sum1;
	if (verify % 10 == 0) {

		return true;
	}
	else {

		return false;

	}
}
bool isNumeric(string s) {
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case '0': continue; break;
		case '1': continue; break;
		case '2': continue; break;
		case '3': continue; break;
		case '4': continue; break;
		case '5': continue; break;
		case '6': continue; break;
		case '7': continue; break;
		case '8': continue; break;
		case '9': continue; break;

		default: return false;
		}
	}
}
bool isCorrectLength(string s) {
	if (s.length() != 16) return false;
	else return true;
}