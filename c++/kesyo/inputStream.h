#ifndef inputStream_h_
#define inputStream_h_

#include "stream.h"
//#include "arr.h"

class inputStream :
	public stream
{
public:
	bool set();
	double get() const;
};

#endif
