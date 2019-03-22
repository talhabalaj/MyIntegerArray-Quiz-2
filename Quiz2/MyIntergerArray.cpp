#include "MyIntergerArray.h"
#include <iostream>

using namespace std;

MyIntergerArray::MyIntergerArray() {

}

MyIntergerArray::MyIntergerArray(int size, int defaultValue) {
	this->size = size;
	allocateSpace(size);
	setValuesAll(defaultValue);
	findMaximum();
	findMinimum();
}

MyIntergerArray::MyIntergerArray(const MyIntergerArray & obj) {
	allocateSpace(obj.size);
	for (size_t i = 0; i < obj.size; i++)
	{
		setValue(i, obj.storage[i]);
	}
}

void MyIntergerArray::allocateSpace(int size) {
	if (storage != nullptr) delete storage;
	storage = new int[size];
}

void MyIntergerArray::setValue(int index, int value) {
	storage[index] = value;
}

void MyIntergerArray::setValuesAll(int value) {
	for (int i = 0; i < size; i++)
	{
		setValue(i, value);
	}
}

int MyIntergerArray::getSize() {
	return size;
}

int MyIntergerArray::getValue(int index) {
	return storage[index];
}

MyIntergerArray& MyIntergerArray::findMinimum() {
	int min, f = 1;
	for (int i = 0; i < size; i++) {
		if (f == 1) {
			min = storage[i];
			f = 0;
		}
		if (storage[i] < min) min = storage[i];
	}
	this->minimum = min;
	return *this;
}

MyIntergerArray& MyIntergerArray::findMaximum() {
	int max, f = 1;
	for (int i = 0; i < size; i++) {
		if (f == 1) {
			max = storage[i];
			f = 0;
		}
		if (storage[i] > max) max = storage[i];
	}
	this->maximum = max;
	return *this;
}

void MyIntergerArray::print() {
	cout << "Array { \n";
	for (int i = 0; i < size; i++) cout << "\t" << storage[i] << endl;
	cout << " } " << endl;
	cout << "Minimum: " << minimum << endl;
	cout << "Maximum: " << maximum << endl;
	cout << "Size: " << size << endl;
}

MyIntergerArray& MyIntergerArray::add(MyIntergerArray * o) {
	for (int i = 0; i < o->size; i++)
		storage[i] += o->storage[i];
	return *this;
}