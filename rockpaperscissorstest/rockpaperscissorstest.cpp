#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* getWinner(char player1[], char player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace rockpaperscissorstest
{
	TEST_CLASS(rockpaperscissorstest)
	{
	public:
		
		TEST_METHOD(Testdrawwithrock)
		{
			Assert::AreEqual("Draw", getWinner("Rock", "Rock"));
		}
	};
}
