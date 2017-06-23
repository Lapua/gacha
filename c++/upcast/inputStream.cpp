#include "inputStream.h"
#include <iostream>
using namespace std;

double inputStream::get() const{
	return m_n;
}

bool inputStream::set(){
	cin >> m_n;
	return m_n >= 0;
}
