#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n, int i) {
	a[i] = -50 + rand() * 101 / RAND_MAX;
	if (i < n)
		Create(a, n, i + 1);
}

void PrintArr(int a[], const int n, int i) {
	cout << "| " << setw(4) << a[i] << " |";
	if (i < n)
		PrintArr(a, n, i + 1);
}

int Amount(int a[], const int n, int am, int i) {
	
	if (a[i] % 2 != 0)
		am++;
	if (i<n)
		return Amount(a, n, am, i + 1);
	else
		return am;
}

int main() {
	const int n = 25;
	int a[n];

	srand((unsigned)time(NULL));

	cout << "Array: " << endl;
	Create(a, n - 1, 0);
	PrintArr(a, n - 1, 0);
	cout << endl;
	cout << endl;
	cout << "Amount = " << Amount(a, n - 1, 0, 0) << endl;

	return 0;
}