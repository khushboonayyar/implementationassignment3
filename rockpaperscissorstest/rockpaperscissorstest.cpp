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
		TEST_METHOD(TestDraw_Paper)
		{
			Assert::AreEqual("Draw", getWinner("Paper", "Paper"));
		}
		TEST_METHOD(TestDraw_Scissors)
		{
			Assert::AreEqual("Draw", getWinner("Scissors", "Scissors"));
		}
		TEST_METHOD(TestP1Wins_RockVsScissors)
		{
			Assert::AreEqual("Player1", getWinner("Rock", "Scissors"));
		}
		TEST_METHOD(TestP1Wins_PaperVsRock)
		{
			Assert::AreEqual("Player1", getWinner("Paper", "Rock"));
		}
		TEST_METHOD(TestP1Wins_ScissorsVsPaper)
		{
			Assert::AreEqual("Player1", getWinner("Scissors", "Paper"));
		}
		TEST_METHOD(TestP2Wins_ScissorsVsRock)
		{
			Assert::AreEqual("Player2", getWinner("Scissors", "Rock"));
		}


	};
}

