class MyIntergerArray {
private:
	int * storage;
	int size;
	int minimum = 0;
	int maximum = 0;
public:
	MyIntergerArray();
	MyIntergerArray(int, int);
	MyIntergerArray(const MyIntergerArray & obj);
	void setValue(int, int);
	void allocateSpace(int);
	void setValuesAll(int);
	int getSize();
	int getValue(int);
	
	MyIntergerArray& add(MyIntergerArray *obj);
	MyIntergerArray& findMinimum();
	MyIntergerArray& findMaximum();
	void print();
};