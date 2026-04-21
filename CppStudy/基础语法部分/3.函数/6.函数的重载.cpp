#include <iostream>

using namespace std;

void calculate(int x, int y) {
	cout << "calculate(int, int)" << endl;
}

void calculate() {
	cout << "calculate()" << endl;
}

void calculate(double x, double y) {
	cout << "calculate(double, double)" << endl;
}

void calculate(double x, int y) {
	cout << "calculate(double, int)" << endl;
}

int main6() {

	// 如何区分调用不同的重载函数？
	calculate();
	calculate(1, 2);
	calculate(1.2, 1.3);



	return 0;
}