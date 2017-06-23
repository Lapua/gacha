#include <iostream>
using namespace std;

class inputStream {
public:
	double get() const;
	bool set();

private:
	double m_n;
};

double inputStream::get() const{
	return m_n;
}

bool inputStream::set(){
	cin >> m_n;
	return m_n >= 0;
}

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
