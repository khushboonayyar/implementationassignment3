#include<string.h>

char* getWinner(char player1[], char player2[])
{
	if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Rock") == 0)
		return "Draw";
	if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Paper") == 0)
		return "Draw"; 
	if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Scissors") == 0)
		return "Draw";

	return;

}

int main()
{

	return 0;

}