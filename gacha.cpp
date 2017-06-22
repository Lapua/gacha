#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void){
	int n;
	int conti = 1;
	srand(time(NULL));

	do{
		for(int i=0; i<10; i++){
			n = rand()%5;
			switch(n){
				case 0: cout << "★ 5" << endl;	break;
				case 1: cout << "★ 4" << endl;	break;
				case 2: cout << "★ 3" << endl;	break;
				case 3: cout << "★ 2" << endl;	break;
				case 4: cout << "★ 1" << endl;	break;
			}
		}
		cin >> conti;
	}while(conti != 0);
}
