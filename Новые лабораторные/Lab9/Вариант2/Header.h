#pragma once
#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include "error.h"
using namespace std;
struct node
{
	int data;
	node* next;
	node* prev;
	node(int _data)
	{
		data = _data;
		next = nullptr;
		prev = nullptr;
	}
};
class Pair
{
private:
	int    _a;
	double _b;

public:
	Pair()
		: _a(0), _b(0) { }

	Pair(int a, double b)
		: _a(a), _b(b) { }

	~Pair() { }
	////////////////////////////////////////////////////////////////
	Pair& operator++ () {
		++_a;
		return *this;
	}
	Pair& operator++ (int) {
		_b += 1.0;
		return *this;
	}

	friend std::ostream& operator<< (std::ostream&, const Pair&);
};
std::ostream& operator<< (std::ostream& ost, const Pair& obj) {
	return (ost << obj._a << " : " << obj._b);
}

struct list
{
	node* head;
	node* tail;


	list() : head(nullptr), tail(nullptr) {}

	bool zero()
	{
		return head == nullptr;
	}

	void push_back(int y)
	{
		node* x = new node(y);

		if (zero())
		{
			head = x;
			tail = x;
		}
		tail->next = x;
		x->prev = tail;
		tail = x;
	}

	void pushback(int k)
	{
		for (int i = 0; i < k; i++)
		{
			node* x = new node(rand() % 10);

			if (zero())
			{
				head = x;
				tail = x;
			}
			tail->next = x;
			x->prev = tail;
			tail = x;
		}
	}

	void print()
	{
		if (zero()) {
			cout << "������ ����";
			return;
		}
		node* current_node = head;

		while (current_node)
		{
			cout << current_node->data << " ";
			current_node = current_node->next;
		}
		cout << endl;
	}

	node* operator[] (int index)
	{
		--index;
		if (index == 0)
		{
			/*node* p = head;
			p = p->next;
			p->prev = nullptr;
			free(head);
			head->next = p->next;
			head = p;*/
			print();
		}
		else {
			if (zero()) return nullptr;
			node* p = head;
			node* x = head;

			for (int i = 0; i < index; i++) {
				p = p->next;
				if (!p) return nullptr;
			}
			for (int i = 0; i < (index - 1); i++) {
				x = x->next;
				if (!x) return nullptr;
			}
			/*x->next = p->next;
			delete p;
			*/
			node* current_node = p;
			cout << current_node->data << " ";
			return 0;
		}
	}

	node* operator() (int lng)
	{
		cout << lng << endl;
		return 0;
	}

	node* operator* (int um)
	{
		if (zero()) {
			cout << "������ ����";
			return 0;
		}
		node* current_node = head;

		while (current_node)
		{
			current_node->data = (current_node->data) * um;
			current_node = current_node->next;
		}
		return 0;
	}

	node* operator- (int n)
	{
		if (zero()) {
			return 0;
		}
		node* p = tail;

		for (int i = 0; i < n; i++) {
			p = p->prev;
			if (!p) return nullptr;
		}
		return 0;
	}

	void alldel()
	{
		node* current;
		current = head;

		for (int i = 1; head->next = nullptr; i++) {}

		if (zero()) return;
		node* current_node = head;
		head = current_node->next;
		delete current_node;
	}



};