#include <iostream>
#include <cmath>

using namespace std;

long double fact2(int p) {
	if (p == 0) {
		return 1;
	}
	if (p == 1) {
		return 1;
	}
	return p * fact2(p - 2);
}

long double t(long double x) {
	long double a = 0;
	for (int k = 0; k <= 10; k++) {
		a += pow(x, 2 * k + 1) / fact2(2 * k + 1);
	}
	long double b = 0;
	for (int k = 0; k <= 10; k++) {
		b += pow(x, 2 * k) / fact2(2 * k);
	}
	return a / b;
}

long double res(long double y) {
	long double a = 7 * t(0.25) + 2 * t(1 + y);
	long double b = 6 - t(pow(y, 2) - 1);
	return a / b;
}

int main() {
	long double y;
	cin >> y;
	cout << res(y);
}