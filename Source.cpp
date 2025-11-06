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
int main(void) {
	int value;
	int digit;
	int digit2;

	int digit3;
	int digit4;
	int sum1 = 0;
	int sum2 = 0;
	int verify;

	cout << "Please enter 8-digit card number: ";
	cin >> value;
	while (value > 0) {
		digit = (value % 10);
		value = value / 10;
		digit2 = (value % 10);
		sum1 += digit;
		value = value / 10;
		digit2 *= 2;
		while (digit2 > 0) {
			digit3 = (digit2 % 10);
			digit2 = digit2 / 10;
			sum2 += digit3;
		}


	}
	verify = sum2 + sum1;
	if (verify % 10 == 0) cout << "Card is valid.";
	else cout << " Card is invalid";

	return 0;

}