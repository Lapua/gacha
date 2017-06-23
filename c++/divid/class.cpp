#include <iostream>
#include "include.h"
using namespace std;

num::num(int i){
	data = i;
	show();
}

void num::show(){
	cout << data << endl;
}
