// PointersAndDynamicArrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef int* IntPtr;

int main()
{
	using namespace std;

	IntPtr p;
	int a[10];
	int index;

	for (index = 0; index < 10; index++)
		a[index] = index;
		cout << a[index] << " " ;
	cout << endl;

	p = a;

	for (index = 0; index < 10; index++)
		cout << p[index] << " ";
	cout << endl;

	for (index = 0; index < 10; index++)
		p[index] = p[index] + 1;

	for (index = 0; index < 10; index++)
		cout << a[index] << " ";
	cout << endl;

    return 0;
}

