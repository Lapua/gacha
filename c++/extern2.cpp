#include <iostream>
using namespace std;

static int a = 9;

void func(){
	cout << "a(2)=" << a << endl;
}

void func2();

int main(void){
	func();
	func2();
	a = 5;
	func();
	func2();
}
