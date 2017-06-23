#include <iostream>
#include <cstdlib>
#include <cstring>
#include "include.h"
using namespace std;

arr::arr(int size){
	m_arr = new int[size];
	m_size = size;
	cout << "const" << endl;
}

arr::~arr(){
	delete [] m_arr;
	cout << "dest" << endl;
}

int arr::get(int i){
	check(i);
	return m_arr[i];
}

void arr::set(int i, int value){
	check(i);
	m_arr[i] = value;
}

void arr::check(int i){
	if(0 <= i && i < m_size){
	}else{
		cout << "husei" << endl;
		exit(EXIT_FAILURE);
	}
}
