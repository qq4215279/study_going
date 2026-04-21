#pragma once
#include <iostream>
#include <sstream>
#include "QFLinkNode.hpp"
#include "QFMutableContainer.h"

using namespace std;

template<typename E>
class QFMutableList : public QFMutableContainer<E>  {
private:
	QFLinkNode<E>* first;		// 链表中的首节点
	QFLinkNode<E>* last;		// 链表中的尾节点
	int len;					// 元素的数量

	QFLinkNode<E>* getNode(int index);		// 通过下标，获取指定的节点

public:
	QFMutableList();
	~QFMutableList() override;

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
};

template<typename E>
inline QFLinkNode<E>* QFMutableList<E>::getNode(int index)
{
	QFLinkNode<E>* p = first;
	for (int i = 0; i < index; i++) {
		p = p->next;
	}
	return p;
}

template<typename E>
inline QFMutableList<E>::QFMutableList()
{
	first = nullptr;
	last = nullptr;
	len = 0;
}

template<typename E>
inline QFMutableList<E>::~QFMutableList()
{
	// 目标：在销毁链表的时候，释放每一个节点的空间
	clear();
}

template<typename E>
inline void QFMutableList<E>::add(E ele)
{
	// 创建一个新的节点
	QFLinkNode<E>* node = new QFLinkNode<E>(ele);

	// 判断元素的数量
	if (len == 0) {
		// 说明链表中没有元素，首节点和尾节点都是nullptr
		this->first = node;
		this->last = node;
	}
	else {
		// 说明链表中有元素的，将node节点添加到last节点之后即可
		this->last->next = node;
		node->previous = this->last;
		this->last = node;
	}

	// 更新元素的数量
	len++;
}

template<typename E>
inline void QFMutableList<E>::add(int index, E ele)
{
	// 1. 创建一个节点对象
	QFLinkNode<E>* node = new QFLinkNode<E>(ele);

	// 2. 分不同情况处理
	if (index == 0) {
		node->next = first;
		first->previous = node;
		first = node;
		len++;
	}
	else if (index == len) {
		node->previous = last;
		last->next = node;
		last = node;
		len++;
	}
	else {
		// 通过下标找到需要被插入的节点
		QFLinkNode<E>* target = getNode(index);
		target->previous->next = node;
		node->previous = target->previous;
		node->next = target;
		target->previous = node;
		len++;
	}
}

template<typename E>
inline E QFMutableList<E>::remove(int index)
{
	E tmp;
	if (len == 1) {
		tmp = first->ele;
		delete first;
		first = nullptr;
		last = nullptr;
	}
	else {
		if (index == 0) {
			// 说明要删除的是首节点
			tmp = first->ele;
			first = first->next;
			delete first->previous;
			first->previous = nullptr;
		}
		else if (index == len - 1) {
			// 说明要删除的是尾节点
			tmp = last->ele;
			last = last->previous;
			delete last->next;
			last->next = nullptr;
		}
		else {
			// 说明要删除的是中间的节点
			QFLinkNode<E>* node = getNode(index);
			tmp = node->ele;
			node->previous->next = node->next;
			node->next->previous = node->previous;
			delete node;
		}
	}
	len--;

	return tmp;
}

template<typename E>
inline bool QFMutableList<E>::removeElement(E ele)
{
	// 找到元素所在的下标
	int i = index(ele);
	
	if (i == -1) {
		return false;
	}

	remove(i);
	return true;
}

template<typename E>
inline void QFMutableList<E>::clear()
{
	if (first != nullptr) {
		QFLinkNode<E>* p1 = first;
		QFLinkNode<E>* p2 = p1->next;
		while (p2 != nullptr) {
			delete p1;
			p1 = p2;
			p2 = p2->next;
		}
		delete p1;

		first = nullptr;
		last = nullptr;
		len = 0;
	}
}

template<typename E>
inline E QFMutableList<E>::set(int index, E ele)
{
	// 1. 通过下标获取节点
	QFLinkNode<E>* node = getNode(index);
	// 2. 备份原来的数据
	E tmp = node->ele;
	// 3. 修改新的数据
	node->ele = ele;
	// 4. 返回结果
	return tmp;
}

template<typename E>
inline E QFMutableList<E>::get(int index)
{
	// 1. 通过下标获取节点
	QFLinkNode<E>* node = getNode(index);
	// 2. 返回结果
	return node->ele;
}

template<typename E>
inline void QFMutableList<E>::sort()
{
	for (int i = 0; i < len - 1; i++) {
		QFLinkNode<E>* node = first;
		for (int j = 0; j < len - 1 - i; j++) {
			if (node->ele > node->next->ele) {
				E tmp = node->ele;
				node->ele = node->next->ele;
				node->next->ele = tmp;
			}
			node = node->next;
		}
	}
}

template<typename E>
inline int QFMutableList<E>::index(E ele)
{
	QFLinkNode<E>* node = first;
	for (int i = 0; i < len; i++) {
		if (ele == node->ele) {
			return i;
		}
		node = node->next;
	}
	return -1;
}

template<typename E>
inline string QFMutableList<E>::str()
{
	if (len == 0) {
		return "[]";
	}
	ostringstream oss;
	oss << "[";
	QFLinkNode<E>* node = first;
	for (int i = 0; i < len - 1; i++) {
		oss << node->ele << ", ";
		node = node->next;
	}
	oss << node->ele << "]";

	return oss.str();
}

template<typename E>
inline int QFMutableList<E>::length()
{
	return len;
}
