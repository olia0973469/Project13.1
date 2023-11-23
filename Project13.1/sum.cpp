// sum.cpp
// файл реалізації функції
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" 
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() 
{
	n = 0;
	a = -1 / x;
	s = a;
	do 
	{
		n++;
		dod(); 
		s += a;
	} while (fabs(a) > e);
	s = (4 * atan(1.0)) / 2 + s;
}
