// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IntDoubleList.h"
#include <iostream>

using namespace std;


int main()
{
	IntDoubleList obj;

	obj.insertHead(4);
	obj.insertTail(6);
	obj.insertTail(7);
	obj.insertHead(1);

	obj.outAll();

	cout << obj.searchItem(8);

    return 0;
}

