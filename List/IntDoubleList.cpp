#include "stdafx.h"
#include "IntDoubleList.h"
#include <iostream>
using namespace std;


int 
IntDoubleList::headItem() const
{
	return head_->item_;
}


int&
IntDoubleList::headItem()
{
	return head_->item_;
}


int
IntDoubleList::tailItem() const
{
	return tail_->item_;
}


int&
IntDoubleList::tailItem()
{
	return tail_->item_;
}


void 
IntDoubleList::insertTail(int item)
{
	insertTail(new Node(item));

}


void 
IntDoubleList::insertHead(int item)
{
	insertHead(new Node(item));
}


bool 
IntDoubleList::deleteHead()
{
	if (head_ == NULL)
		return false;

	if (head_->next_ != NULL) {
		(head_->next_)->prev_ = NULL;
		head_ = head_->next_;
	}
	else {
		head_ = NULL;
		tail_ = NULL;
	}

	count_--;

	return true;
}


bool 
IntDoubleList::deleteTail()
{
	if (tail_ == NULL)
		return false;

	if (tail_->prev_ != NULL) {
		(tail_->prev_)->next_ = NULL;
		tail_ = tail_->prev_;
	}
	else {
		head_ = NULL;
		tail_ = NULL;
	}

	count_--;

	return true;
}


bool 
IntDoubleList::searchItem(int item)
{
	Node* i = head_;

	while (i != NULL)
	{
		if (i->item_ == item)
			return true;

		i = i->next_;
	}

	return false;
}


bool 
IntDoubleList::replaceItem(int itemOld, int itemNew)
{
	Node* i = head_;

	while (i != NULL)
	{
		if (i->item_ == itemOld) {

			i->item_ = itemNew;
			return true;
		}

		i = i->next_;
	}

	return false;
}


void 
IntDoubleList::outAll()
{
	Node* i = head_;

	while (i != tail_)
	{
		cout << i->item_ << '\n';
		i = i->next_;
	}
	cout << tail_->item_ << '\n';
}


IntDoubleList::~IntDoubleList()
{

}


IntDoubleList::Node*
IntDoubleList::head() const
{
	return head_;
}


IntDoubleList::Node*
IntDoubleList::tail() const
{
	return tail_;
}


void 
IntDoubleList::insertTail(Node *x)
{
	x->prev_ = tail_;

	if (tail_ != NULL)
		tail_->next_ = x;
	else
		head_ = x;

	tail_ = x;
	count_++;
}


void 
IntDoubleList::insertHead(Node *x)
{
	x->next_ = head_;
	if (head_ != NULL)
		head_->prev_ = x;
	else
		tail_ = x;

	head_ = x;
	count_++;
}


IntDoubleList::Node*
IntDoubleList::searchNode(int item)
{
	Node* i = head_;

	while (i != NULL)
	{
		if (i->item_ == item)
			return i;

		i = i->next_;
	}

	return i;

}

//??
IntDoubleList::Node
IntDoubleList::replaceNode(Node *x, int item)
{
	if (x == NULL) {

	}

}
