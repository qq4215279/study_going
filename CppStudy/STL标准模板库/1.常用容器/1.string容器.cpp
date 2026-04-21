//#include <iostream>
//using namespace std;
//
//// string的构造
//void test01() {
//	// 无参构造，创建一个空字符串出来
//	string str = string();
//
//	// 通过一个字符串，构造另外一个字符串
//	string str2 = string("hello world");
//
//	// 通过一个字符数组，构造一个字符串
//	const char* array = "hello world";
//	string str3 = string(str2);
//	cout << str3 << endl;
//
//	// 通过指定数量的指定字符，构造一个字符串，在这里结果是 "AAAAA"
//	string str4 = string(5, 'A');
//	cout << str4 << endl;
//}
//
//// string的赋值
//void test02() {
//	string str;
//
//	// 通过等号进行赋值，等号已经被string进行了运算符重载
//	// 通过字符串进行赋值
//	str = "hello world";
//	
//	// 通过字符数组进行赋值
//	const char* arr = "abc";
//	str = arr;
//	cout << str << endl;
//
//	// 通过字符进行赋值
//	str = 'a';
//	cout << str << endl;
//
//	// assign
//	str.assign("hello world");
//	cout << str << endl;
//	str.assign(arr);
//	cout << str << endl;
//	str.assign(8, 'a');
//	cout << str << endl;
//
//	// string& assign(const char *s, int n); 把字符串s的前n个字符赋给当前的字符串
//	str.assign(arr, 2);
//	cout << str << endl;
//
//	// string& assign(const string & s, int start, int n); 将s从start开始n个字符赋值给字符串
//	str.assign("hello world", 3, 4);
//	cout << str << endl;
//}
//
//// string的存取字符
//void test03() {
//	// 通过“下标”，从一个字符串中获取到指定位的字符，或者是可以修改指定下标位的字符。
//	// char& operator[](int n); //通过[]方式取字符
//	// char& at(int n); //通过at方法获取字符
//
//	string str = "hello world";
//	cout << str[4] << endl;
//	cout << str.at(4) << endl;
//
//	// 使用字符引用返回值，存储一下字符串中，指定下标位字符的引用
//	char& c = str[4];
//	// 修改引用的值，因为这里引用的是字符串中的字符数组中的指定下标位的元素，所以这里c发生变更，也会影响到数组中的元素
//	c = '!';
//	cout << str << endl;
//
//
//	// 注意事项：
//	//		一旦字符串中的字符数组内存重新分配了，使用之前的引用再进行空间访问，可能会出问题的。
//	//		16位
//	// c_str: 将C++风格的字符串，转成C风格的字符串（返回的C++的string类中维护的那个字符数组指针）
//	cout << (int*)str.c_str() << endl;
//	str = "1234567890123456";
//	cout << (int*)str.c_str() << endl;
//	// c = 'A';
//	// cout << str << endl;
//
//}
//
//// string的拼接
//void test04() {
//	string str = "hello";
//	
//	// +
//	// string str1 = str + "world";
//	// cout << str1 << endl;
//
//	// +=
//	str += "world";
//	cout << str << endl;
//
//	// append
//	// string& append(const char* s);//把字符串s连接到当前字符串结尾
//	str.append(" world");
//	cout << str << endl;
//	 
//	// string& append(const char* s, int n);//把字符串s的前n个字符连接到当前字符串结尾
//	str.append(" nihao", 3);
//	cout << str << endl;
//
//	// string& append(const string & s);//同operator+=()
//	// string& append(const string & s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
//	str.append("c++ is the best programming language", 11, 4);
//	cout << str << endl;
//
//	// string& append(int n, char c);//在当前字符串结尾添加n个字符c
//	str.append(5, 'K');
//	cout << str << endl;
//}
//
//// string的查找和替换
//void test05() {
//	// 查找：查找一个字符串或者是一个字符，在指定的字符串中出现的下标，如果找不到返回-1
//	// 替换：将一个字符串中指定下标范围的部分，替换成新的字符串
//
//	string str = "c++ is the most popular, most usful programing language in the world";
//	// 查找
//	// int find(const string& str, int pos = 0) const;	// 查找str第一次出现位置,从pos开始查找
//	// int find(const char* s, int pos = 0) const;		// 查找s第一次出现位置,从pos开始查找
//	// int find(const char* s, int pos, int n) const;	// 从pos位置查找s的前n个字符第一次位置
//	// int find(const char c, int pos = 0) const;		// 查找字符c第一次出现位置
//	
//	cout << str.find("most") << endl;
//	cout << str.find("most", 20) << endl;
//	int res = str.find("mostmost", 0, 4);
//	cout << res << endl;
//	cout << str.find('s') << endl;
//
//	// int rfind(const char* s, int pos = npos) const;	// 查找s最后一次出现位置,从pos开始查找
//	// int rfind(const char* s, int pos, int n) const;	// 从pos查找s的前n个字符最后一次位置
//	// int rfind(const char c, int pos = 0) const;		// 查找字符c最后一次出现位置
//
//	cout << str.rfind("most", 20) << endl;
//	cout << str.rfind("mostmost", 20, 4) << endl;
//	cout << str.rfind('m') << endl;
//
//
//	// 替换
//	// string& replace(int pos, int n, const string & str);		// 替换从pos开始n个字符为字符串str
//	// string& replace(int pos, int n, const char* s);			// 替换从pos开始的n个字符为字符串s
//	cout << str.replace(11, 24, "best") << endl;
//	cout << str << endl;
//}
//
//// string的比较操作
//void test06() {
//	// 字符串大小比较规则：比的是字典顺序（更深入来说，就是字符在字符集中映射的数字）
//	//		依次比较字符串中的每一位字符，如果字符相同，继续比较后面的一位字符。直到某一次的比较可以分出大小。
//	//
//	// 字符串的比较，仍然可以使用 > < >= <= == != 来比较。但是这些比较符号有一定的局限性。
//	//		局限性：比较的结果是bool类型，无法充足的表示每一种比较结果（三种：A > B , A < B , A == B）
//	//		因此，字符串提供了一个compare函数，返回值是一个int类型：
//	//			1：前面的大于后面的
//	//			-1：前面的小于后面的
//	//			0：相等
//
//	string str1 = "abf";
//	string str2 = "abe";
//
//	// cout << (str1 < str2) << endl;
//	cout << str1.compare(str2) << endl;
//}
//
//// string子串的获取
//void test07() {
//	// pos: 起始下标，从什么下标开始获取子串，默认的值是0
//	// n: 长度，获取多少个字符，默认的值是字符串的长度
//	// string substr(int pos = 0, int n = npos) const;	//返回由pos开始的n个字符组成的字符串
//	string str = "hello";
//
//	// 注意事项：
//	//		1. 下标pos不要越界，一旦越界，程序会出现问题。如果pos没有越界，但是n长度过长，这个没问题，只会将字符串中剩余的所有的部分返回给你
//	//		2. 截取子串的操作，不会对字符串本身产生影响，返回给你的是一个新的字符串
//
//	// 截取一部分
//	cout << str.substr(2, 20) << endl;
//	cout << str << endl;
//}
//
//// string的插入删除操作
//void test08() {
//	// string& insert(int pos, const char* s); //插入字符串
//	// string& insert(int pos, const string & str); //插入字符串
//	// string& insert(int pos, int n, char c);//在指定位置插入n个字符c
//	// string& erase(int pos, int n = npos);//删除从Pos开始的n个字符 
//
//	string str = "HAHAHAHA";
//
//	str.insert(4, "hello");
//	cout << str << endl;
//
//	str.insert(4, 5, 'K');
//	cout << str << endl;
//
//	// 删除
//	str.erase(4, 5);
//	cout << str << endl;
//
//}
//
//int main() {
//
//	test08();
//
//	return EXIT_SUCCESS;
//}