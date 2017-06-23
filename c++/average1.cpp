#include <iostream>
using namespace std;
bool average();
bool input(double& n);

int main(void){
	while( average() ){}
}

bool average(){
	int count;
	double n;
	double avr = 0;

	for(count=0; input(n); ++count){
		avr += n;
	}
	if(count == 0){
		return false;
	}
	avr /= count;
	cout << "average" << avr << endl;
	return true;
}

bool input(double& n){
	cin >> n;
	return n>=0;
}
