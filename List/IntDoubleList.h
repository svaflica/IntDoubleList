#pragma once

#ifndef INT_DOUBLE_LIST
#define INT_DOUBLE_LIST

#include <stdlib.h>

class IntDoubleList
{
public:
	IntDoubleList() :count_(0), head_(NULL), tail_(NULL) { };
	IntDoubleList(const IntDoubleList &obj);

	int count() const 
	{ return count_; }

	int headItem() const;

	int &headItem();

	int tailItem() const;

	int &tailItem();

	void insertTail(int item);

	void insertHead(int item);

	bool deleteHead();

	bool deleteTail();

	bool searchItem(int item);

	bool replaceItem(int itemOld, int itemNew);

	void outAll();

	virtual ~IntDoubleList(void);

private:
	struct Node
	{
		int item_;
		Node *next_;
		Node *prev_;

		Node(int item, Node *next = NULL, Node *prev = NULL):
			item_(item), next_(next), prev_(prev) {}
	};

	int count_;
	Node *head_;
	Node *tail_;

	Node *head() const;
	Node *tail() const;

	void insertHead(Node *x);
	void insertTail(Node *x);

	Node* searchNode(int item);
	Node replaceNode(Node *x, int item);

};

#endif