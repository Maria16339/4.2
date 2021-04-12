#include "pch.h"
#include "CppUnitTest.h"
#include"C://Users/User/source/repos/4.2/4.2/Abstract.h"
#include"C://Users/User/source/repos/4.2/4.2/Arithmetic.h"
#include"C://Users/User/source/repos/4.2/4.2/Arithmetic.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Arithmecic z(1, 3, 2, 1);
			
			Assert::AreEqual(z.Sum_progression(), 4.0);
		}
	};
}
