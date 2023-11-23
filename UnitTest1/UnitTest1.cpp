#include "pch.h"
#include "CppUnitTest.h"
#include "../project13.1/dod.h"
#include "../project13.1/var.h"
#include "../project13.1/sum.h"
#include "../project13.1/Lab_13_1.cpp"
#include "../project13.1/sum.cpp"
#include "../project13.1/dod.cpp"
#include "../project13.1/var.cpp"


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 1;
			n = 0;
			a = 1.0;
		}
	};
}
