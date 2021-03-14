#include<iostream>
using namespace std;

void print(int M, int N) {
	for (int i = 0; i < M; i++) cout << " ";

	for (int i = 0; i < N; i++) cout << "*";
}

int main() {
	int n;
	cin >> n;
	for (int i= 0; i <n;i++) {
		print(n-i -1, i* 2 + 1);
			cout << endl;
	}
}
