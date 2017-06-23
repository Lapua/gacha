#ifndef inputStream_h
#define inputStream_h

class inputStream {
public:
	inputStream(const double* arr);
	double get() const;
	bool set();

private:
	const double* m_arr;
	int m_i;
	double m_n;
};

#endif
