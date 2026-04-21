#include <iostream>
#include <sstream>

using namespace std;

int main11() {


	// 案例1: 打印输出5次，我爱编程，我爱千锋
	/*
	for (int count = 0; count < 5; count++) {
		cout << "我爱编程，我爱千锋" << endl;
	}
	*/

	// 案例2: 求 10 的阶乘 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10
	/*
	long long result = 1;
	for (int i = 1; i <= 10; i++) {
		result *= i;
	}
	cout << result << endl;
	*/

	// 案例3: 求1-100的和  1 + 2 + 3 + ... + 100
	/*
	int result = 0;
	for (int i = 1; i <= 100; i++) {
		result += i;
	}
	cout << result << endl;
	*/

	// 案例4: 求100以内的偶数的和
	/*
	int result = 0;
	for (int i = 2; i <= 100; i += 2) {
		result += i;
	}
	cout << result << endl;
	*/

	// 案例5: 打印100以内，能被4整除不到能被7整除的数据，每行打印6个
	/*
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 4 == 0 && i % 7 != 0) {
			cout << i << "\t";
			if (++count % 6 == 0) {
				cout << endl;
			}
		}
	}
	*/

	// 案例6: 统计1到100之间分别能被3整除或5整除或同时被3和5整除的数字个数并打印

	/*
	// 定义三个变量，分别用来统计能够被3整除的数字个数、能够被5整除的数字个数、能够同时被3和5整除的数字个数
	int count3 = 0, count5 = 0, count35 = 0;
	// 定义三个变量，分别用来统计能够被3整除的数字、能够被5整除的数字、能够同时被3和5整除的数字
	ostringstream oss3, oss5, oss35;

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			count35++;
			oss35 << i << ", ";
		}
		else if (i % 3 == 0) {
			count3++;
			oss3 << i << ", ";
		}
		else if (i % 5 == 0) {
			count5++;
			oss5 << i << ", ";
		}
	}
	cout << "能够被3整除，但是不能被5整除的数字个数: " << count3 << endl;
	cout << "它们分别是: " << oss3.str() << endl;

	cout << "能够被5整除，但是不能被3整除的数字个数: " << count5 << endl;
	cout << "它们分别是: " << oss5.str() << endl;

	cout << "能够同时被3和5整除的数字个数: " << count35 << endl;
	cout << "它们分别是: " << oss35.str() << endl;
	*/

	// for的特殊语法:
	// for循环的小括号中的每一个部分都可以省略不写！
	// 省略初始化部分: 可以把循环控制变量，定义在循环的外边
	// 省略条件判断部分: 默认条件是永远成立的
	// 省略迭代部分: 可以把对循环控制变量的修改放在循环体里面
	// 注意事项: 虽然每一部分都可以省略不写，但是分号是不能省略的。
	/*
	int i = 0;
	for (;;) {
		cout << i << endl;
		i++;
	}
	*/




	return 0;
}