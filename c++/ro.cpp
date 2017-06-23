#include <iostream>
//#include <cstring>
#include <cstdlib>
using namespace std;

class arr{
public:
	arr(int size);
	~arr();

	int get(int i);
	void set(int i, int value);

private:
	void check(int i);
	int* m_arr;
	int m_size;
};

arr::arr(int size){
	m_arr = new int[size];
	m_size = size;

	cout << "コンストラクト要素数:" << m_size << endl;
}

arr::~arr(){
	delete [] m_arr;

	cout << "デストラクト要素数:" << m_size << endl;
}

/*int arr::get(int i){
	check(i);
	return m_arr[i];
}

void arr::set(int i, int value){
	check(i);
	m_arr[i] = value;
}*/

void arr::check(int i){
	if(0 <= i && i < m_size){
	}else{
		cout << "不正インデックス" << endl
			<< "値:" << i << endl;
		exit(EXIT_FAILURE);
	}
}

void viss(int num){
	cout << "viss no." << num << endl;
}

arr a(10);

int main(void){
	viss(1);

	arr b(20);
	viss(2);

	arr c(30);
	viss(3);
	{
		arr d(40);
		viss(4);
	}
	viss(5);
}
