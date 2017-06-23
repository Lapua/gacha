#ifndef arr_h_
#define arr_h_

#include "stream.h"

class arr : public stream
{
public:
	arr(const double* arr);
	bool set();

private:
	const double* m_arr;
	int m_i;
};

#endif
