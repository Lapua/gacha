#include <iostream>
using namespace std;

class num{
public:
	int i;
	num(int x);

//private:
	void show();
};

num::num(int x){
	i = x;
	//show();
}

void num::show(){
	cout << i << endl;
}

int main(void){
	num x(3);
	x.show();
}
