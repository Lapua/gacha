#include "inputStream.h"
#include <iostream>
using namespace std;
bool average(inputStream& stream);

int main(){
	static const double arr1[] = {1, 2, 3, -1};
	static const double arr2[] = {0.5, 1.5, -1};
	static const double arr3[] = {-1};
	static const double* arr[] = {arr1, arr2, arr3};
	static const int size = sizeof arr / sizeof *arr;
	
	for(int i=0; i<size; i++){
		inputStream stream(arr[i]);
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
