#pragma once
#include <iostream>
#include <sstream>
#include "QFMutableContainer.h"
using namespace std;

template<typename E>
class QFMutableArray : public QFMutableContainer<E> {
private:
	E* array;		// 真正用来存储数据的容器
	int len;		// 元素的数量

public:
	QFMutableArray();

	// 在末尾添加一个元素
	void add(E ele) override;
	// 在指定的下标位插入一个元素
	void add(int index, E ele) override;
	// 按照下标删除元素
	E remove(int index) override;
	// 按照元素进行删除
	bool removeElement(E ele) override;
	// 清空容器
	void clear() override;
	// 通过下标修改元素
	E set(int index, E ele) override;
	// 通过下标获取元素
	E get(int index) override;
	// 排序
	void sort() override;
	// 查找元素出现的下标
	int index(E ele) override;
	// 将容器中的元素拼接成为字符串
	string str() override;
	// 返回容器中元素的数量
	int length() override;

	~QFMutableArray() override;
};

template<typename E>
inline QFMutableArray<E>::QFMutableArray()
{
	array = new E[0];
	len = 0;
}

template<typename E>
inline void QFMutableArray<E>::add(E ele)
{
	// 添加的思想：
	// 创建一个新的数组，新数组的长度是原来数组的长度+1，将原来数组中的元素依次拷贝到新的数组中，并且把本次需要添加的元素放入新数组的最后一位。
	// 最后再修改array指针的指向，使其指向新的数组
	// 1. 创建一个新的数组
	E* tmp = new E[len + 1];
	// 2. 将原来数组中的元素依次拷贝到新的数组中
	for (int i = 0; i < len; i++) {
		tmp[i] = array[i];
	}
	// 3. 把本次需要添加的元素放入新数组的最后一位
	tmp[len] = ele;
	// 4. 修改元素的数量
	len++;
	// 5. 修改array指针的指向，使其指向新的数组
	delete array;
	array = tmp;
}

template<typename E>
inline void QFMutableArray<E>::add(int index, E ele)
{
	// 添加的思想：
	// 创建一个新的数组，新数组的长度是原来数组的长度+1，将原来数组中的元素依次拷贝到新的数组中，拷贝的过程中需要注意下标。
	// 最后再修改array指针的指向，使其指向新的数组。
	// 
	// 1. 创建一个新的数组，新数组的长度是原来数组的长度+1
	E* tmp = new E[len + 1];
	// 2. 将原来数组中的元素依次拷贝到新的数组中，并且在遇到指定的下标位的时候，需要跳过
	for (int j = 0, i = 0; j < len + 1; j++) {
		if (j == index) {
			continue;
		}
		tmp[j] = array[i++];
	}
	// 3. 将需要添加的新的元素放到新数组中指定的下标位
	tmp[index] = ele;
	// 4. 修改元素的数量
	len++;
	// 5. 修改array指针的指向，使其指向新的数组
	delete array;
	array = tmp;
}

template<typename E>
inline E QFMutableArray<E>::remove(int index)
{
	// 思路：首先先备份被删除的元素，创建一个新的数组，然后将原来的数组中的元素拷贝到新的数组中
	// 1. 备份被删除的元素
	E ele = array[index];
	// 2. 创建一个新的数组，新数组的长度是原来的数组长度-1
	E* tmp = new E[len - 1];
	// 3. 将原来的数组中的元素拷贝到新的数组中
	for (int i = 0, j = 0; i < len; i++) {
		if (i == index) {
			continue;
		}
		tmp[j++] = array[i];
	}
	// 4. 修改元素的数量
	len--;
	// 5. 修改array指针的指向，使其指向新的数组
	delete array;
	array = tmp;

	return ele;
}

template<typename E>
inline bool QFMutableArray<E>::removeElement(E ele)
{
	// 思路：先找到元素的下标，然后按照下标删除
	// 1. 找到元素的下标
	int i = index(ele);
	// 2. 判断元素是否存在
	if (i == -1) {
		return false;
	}
	// 3. 按照下标来删除元素
	remove(i);
	return true;
}

template<typename E>
inline void QFMutableArray<E>::clear()
{
	// 将原来的数组置为空
	delete array;
	array = new E[0];
	// 重置元素的数量
	len = 0;
}

template<typename E>
inline E QFMutableArray<E>::set(int index, E ele)
{
	// 1. 备份原来的元素
	E tmp = array[index];
	// 2. 修改新的值
	array[index] = ele;
	// 3. 返回原来的值
	return tmp;
}

template<typename E>
inline E QFMutableArray<E>::get(int index)
{
	return array[index];
}

template<typename E>
inline void QFMutableArray<E>::sort()
{
	for (int i = 0; i < len - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < len; j++) {
			if (array[minIndex] > array[j]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			E tmp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = tmp;
		}
	}
}

template<typename E>
inline int QFMutableArray<E>::index(E ele)
{
	for (int i = 0; i < len; i++) {
		if (ele == array[i]) {
			return i;
		}
	}
	return -1;
}

template<typename E>
inline string QFMutableArray<E>::str()
{
	if (len == 0) {
		return "[]";
	}

	// 创建一个ostringstream的对象，用来拼接元素
	ostringstream oss;
	oss << "[";
	for (int i = 0; i < len - 1; i++) {
		oss << array[i] << ", ";
	}
	oss << array[len - 1] << "]";

	return oss.str();
}

template<typename E>
inline int QFMutableArray<E>::length()
{
	return len;
}

template<typename E>
inline QFMutableArray<E>::~QFMutableArray()
{
	if (array != nullptr) {
		delete array;
		array = nullptr;
	}
}

