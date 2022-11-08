#include "MyIntVector.h"

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

	arrPtr = t.arrPtr;

	int* temp = new int[m_capacity];


	for (int i = 0; i < t.m_capacity; i++)
	{
		t.arrPtr[++m_size];
	}

	delete[] temp;
	temp = nullptr;

}



ostream& operator<<(ostream& str, const MyIntVector& myVec)
{
	str << m_size;
	return str;

}


MyIntVector::~MyIntVector()
{
	delete[] arrPtr;
	arrPtr = nullptr;
}
