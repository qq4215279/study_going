#include <iostream>

/*
// 定义一个命名空间
namespace a {
	int num1 = 10;

	// 命名空间可以嵌套命名空间
	namespace a1 {
		std::string str = "hello world";
	}
}

namespace b {
	int num1 = 20;
}

// 命名空间是开放的，可以随时随地的向一个命名空间中添加成员
namespace a {
	int num2 = 100;
}


namespace constant1 {
	const int MAX_SCORE = 100;
}

namespace constant2 {
	const int MAX_SCORE = 150;
}



int main() {

	// 1. 命名空间基础的使用
	std::cout << a::num1 << std::endl;
	std::cout << b::num1 << std::endl;
	std::cout << a::a1::str << std::endl;
	std::cout << a::num2 << std::endl;

	// 2. using指定命名空间中的指定成员
	using a::num1;
	std::cout << num1 << std::endl;
	std::cout << a::num2 << std::endl;

	// 3. using命名空间
	using namespace a;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << a1::str << std::endl;

	using namespace std;
	cout << num2 << endl;


	// 4. 注意事项
	//    1. 如果引用的命名空间中存在和当前的命名空间中同名字的成员，默认使用当前的命名空间中的成员。
	//    2. 如果引用的多个命名空间中存在相同名字的成员，且当前的命名空间中没有这个成员，此时会出现二义性。
	// const int MAX_SCORE = 200;
	// cout << MAX_SCORE << endl;
	
	using namespace constant1;
	using namespace constant2;

	cout << constant1::MAX_SCORE << endl;
	cout << constant2::MAX_SCORE << endl;

	return 0;
}
*/