#include <iostream>

using namespace std;

int main() {

	// 多重循环，循环中嵌套其他的循环

	// for (int i = 0; i < 5; i++) {
	// 	for (int j = 0; j < 3; j++) {
	// 		cout << "i = " << i << ", j = " << j << endl;
	// 	}
	// }

	// 案例1: 打印九九乘法表
	/*
	for (int line = 1; line <= 9; line++) {
		for (int column = 1; column <= line; column++) {
			cout << column << " x " << line << " = " << (column * line) << "\t";
		}
		cout << endl;
	}
	*/

	// 案例2: 百钱百鸡
	//        已知一只母鸡5块钱，一只公鸡3块钱，3只小鸡1块钱
	//        现在你有100块钱，要求买100只鸡，正好花完这100块钱，不能剩余，也不能欠账
	//        输出购买方案

	// 遍历所有的可购买的母鸡的个数
	for (int m = 0; m <= 100 / 5; m++) {
		// 遍历所有的可购买的公鸡的个数
		for (int g = 0; g <= 100 / 3; g++) {
			// 计算小鸡的数量
			int x = 100 - g - m;
			if (m * 5 + g * 3 + x / 3 == 100 && x % 3 == 0) {
				cout << "公鸡数量: " << g << ", 母鸡数量: " << m << ", 小鸡数量: " << x << endl;
			}
		}
	}


	return 0;
}