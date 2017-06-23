#include <iostream>
#include "include.h"
using namespace std;

void arr::operator=(const arr& other){
	int* arr = new int[other.m_size];

	delete[] m_arr;
	m_arr = arr;
	m_size = other.m_size;
}

int main(void){
	arr a(10);
}
