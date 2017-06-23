#include "inputStream.h"
#include <iostream>
using namespace std;

inputStream::inputStream(const double* arr){
	m_arr = arr;
	m_i = 0;
}

double inputStream::get() const{
	return m_n;
}

bool inputStream::set(){
	m_n = m_arr[m_i];
	if(m_n >= 0){
		++m_i;
		return true;
	}else{
		return false;
	}
}
