#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.CoursControl_0.Lib/Tyuiu.KomarovMA.CoursControl_0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V4* data = new Service();
			int x = 2;
			int z = 22;
			int res;
			res = data->Proizved(x, z);
			Assert::AreEqual(2, res);
		}
	};
}
