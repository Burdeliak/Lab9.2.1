#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.1/main.cpp"
#include "../Lab9.1/var.h" 
#include "../Lab9.1/sum.h" 
#include "../Lab9.1/dod.h" 
#include <cmath> // для log() та fabs()

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;

namespace UnitTest91
{
	TEST_CLASS(UnitTest91)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Ініціалізація значень для тесту
			nsVar::x = 0.5;
			nsVar::e = 0.0001;

			// Виклик функції sum
			nsSum::sum();

			// Обчислення очікуваного значення
			double expected = log(1 + nsVar::x);

			// Перевірка результату
			Assert::AreEqual(expected, nsVar::s, 0.0001, L"Result of sum() is incorrect");
		}
	};
}
