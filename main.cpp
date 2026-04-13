//	Lab 5-11 : Problem Definition
//	Make a program that find the prime numbers in the given range.
//		example) find the prime numbers in the range [1..100]
//		2, 3, 5, 7, ... , 97

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num){
	if (num <= 1) {
		return false;
	}
	
	for (int j = 2; j <= sqrt(num); ++j) {
		if (num % j == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int begin, end;

	do
	{
		cout << "Enter your range [from, to] \n";
		cin >> begin >> end;
	} while (begin >= end || begin < 2 || end < 0);

	// TODO: iterate through each number in the range [begin..end]
	// TODO: check if n is prime by testing divisibility from 2 up to n-1
	// TODO: if n is divisible by i, it is not prime
	// TODO: if n is prime, print it

	for (int i = begin; i <= end; ++i) {
		if (is_prime(i)) {
			cout << i << ", ";
		}
		
	}
	
	cout << endl;

	return 0;
}
