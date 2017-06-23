#include <iostream>
using namespace std;

static int a = 2;

static void func(){
	cout << "a(1)=" << a << endl;
}

void func2(){
	func();
}
