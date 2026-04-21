#include <iostream>

using namespace std;

int calculate(int x, int y) {
	if (x > y) {
		return x - y;
	}
	else {
		return x + y;
	}
}


int main9() {

	// 程序员在写代码的时候，都不能保证自己的代码一点BUG都没有，谁的代码都有可能出现BUG的。
	// 那么出现BUG的时候，我们应该怎么定位问题？找到问题所在的地方，并且解决问题的过程，我们称为“调试程序 DEBUG”。
	// 调试的方式有很多，这里介绍最常用的一种方式：断点调试。
	// 在左边的空白地方点击，会出现一个红色的小圆点，称为“断点”
	// 断点的作用是：当程序以调试(DEBUG)的方式运行的时候，遇到断点会暂停在这里，此时我们可以查看到内存中的一些数据，并可以手动的执行程序，查看程序的执行流程。


	int a = 10;
	int b = 20;

	int c = calculate(a, b);

	cout << c << endl;


	return 0;
}