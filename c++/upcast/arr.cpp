#include "arr.h"
#include <iostream>

arr::arr(const double* arr){
	m_arr = arr;
	m_i = 0;
}

bool arr::set(){
	m_n = m_arr[m_i];
	if(m_n >= 0){
		++m_i;
		return true;
	}else{
		return false;
	}
}
