#include <iostream>
using namespace std;
class arr{
public:
	arr(const arr& other);
	void operator = (const arr& other);
	~arr();
	//int get(int i);
	//void set(int i, int value);

private:
	//void check(int i);
	int* m_arr;
	int m_size;
};
