#pragma once
#include <iostream>
using namespace std;

class MyIntVector
{
friend ostream& operator<<(ostream& str, const MyIntVector& myVec);
private:
	int m_size;
	int m_capacity;
	int* arrPtr;

public:

	MyIntVector();
	MyIntVector(const MyIntVector& t);

	~MyIntVector();

};
