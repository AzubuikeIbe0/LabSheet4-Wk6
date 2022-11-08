#include "MyIntVector.h"
#include <iostream>
using namespace std;

MyIntVector::MyIntVector()
{
	m_size = 0;
	m_capacity = 10;
	arrPtr = new int[10];
	for (int i = 0; i < m_capacity; i++)
	{
		arrPtr[i] = 0;
	}
}


MyIntVector::MyIntVector(const MyIntVector& t)
{
	m_size = t.m_size;

	m_capacity = t.m_capacity;

	arrPtr = new int[m_capacity];


	for (int i = 0; i < t.m_capacity; i++)
	{
		arrPtr[i] = t.arrPtr[i];
	}


}



ostream& operator<<(ostream& str, const MyIntVector& myVec)
{
	str << myVec.m_size;
	return str;

}


MyIntVector::~MyIntVector()
{
	delete[] arrPtr;
	arrPtr = nullptr;
}
