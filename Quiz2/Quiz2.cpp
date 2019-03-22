#include <iostream>
#include "MyIntergerArray.h"

using namespace std;

int main()
{
	int v;
	MyIntergerArray * ptrIntArray1 = new MyIntergerArray(10, 0);

	for (int i = 0; i < 10; i++)
	{
		cout << "(ptrIntArray1) Enter Value at index " << i << ": ";
		cin >> v;
		ptrIntArray1->setValue(i, v);
	}

	MyIntergerArray * ptrIntArray2 = new MyIntergerArray(10, 0);

	for (int i = 0; i < 10; i++)
	{
		cout << "(ptrIntArray2) Enter Value at index " << i << ": ";
		cin >> v;
		ptrIntArray2->setValue(i, v);
	}
	MyIntergerArray ptrIntArray3;
	
	ptrIntArray3 = ptrIntArray1->add(ptrIntArray2);

	ptrIntArray3.findMaximum().print();
	ptrIntArray3.findMinimum().print();
}
