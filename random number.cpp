#include<iostream>
#include<stdlib.h>
using namespace std;

int randomNumber(int n) {
	int random= rand() %n;
	return random;
}

int main() {
	int n;
	cin >>n;
	cout << randomNumber(n);
	return 0;
}
