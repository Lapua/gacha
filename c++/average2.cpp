#include "inputStream.h"
#include <iostream>
using namespace std;
bool average(inputStream& stream);

int main(){
	while(true){
		inputStream stream;
		if(! average(stream) ){
			break;
		}
	}
}

bool average(inputStream& stream){
	int count;
	double avr = 0;

	for(count=0; stream.set(); ++count){
		avr += stream.get();
	}
	if(count == 0){
		return false;
	}
	avr /= count;
	cout << "average:" << avr << endl;
	return true;
}
