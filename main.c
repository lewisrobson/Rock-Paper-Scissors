#include<strings.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int random = rand();
	int bots_move = random % 3;
	//printf("bots move is %d", bots_move);
	
	int bug; 
	/* adding this here fixes a bug where if scissors is chosen
	the bots move goes back to zero? perhaps somethin to do with
	the buffer, not sure yet as im still learning. */

	//printf("your bug is %d", bug);
	// 0 rock, 1 paper, 2 scissors
	
	printf("rock, paper or scissors?\n");
	char userentry[8];
	
	//printf("before while loop bot is %d\n", bots_move);

	while(1)
	{
	//printf("start of while loop bot is %d\n", bots_move);
	scanf("%s", userentry);	
	printf("after user entry, bots clone is currently at %d", bots_move);
	//bug occurs here without the above bug decleration, after scanf entry, if scissors, bot move goes to zero, if rock or paper, all is fine.


	if(strcmp(userentry, "rock") == 0)
		{
		printf("you said rock\n");
		//rock beats scissors
		//rock draws rock
		if(bots_move == 2)
		{
		printf("you win \n");
		}
		if(bots_move == 0)
		{
		printf("you draw \n");
		}
		if(bots_move == 1)
		{
		printf("you lose \n");
		}
		exit(0);
		}

	if(strcmp(userentry, "paper") == 0)
		{
		printf("you said paper\n");
		//paper beats rock
		//paper draws paper
		if(bots_move == 2)
		{
		printf("you lose \n");
		}
		if(bots_move == 1)
		{
		printf("you draw \n");
		}
		if(bots_move == 0)
		{
		printf("you win\n");
		}
		exit(0);
		}

	if(strcmp(userentry, "scissors") == 0)
		{
		//printf("test bot is %d", bots_move);
		printf("you said scissors\n");
		if(bots_move == 0)
		{
		printf("bot was 0 rock, you lose \n");
		}
		if(bots_move == 2)
		{
		printf("bot was 2 scissors, you draw \n");
		}
		if(bots_move == 1)
		{
		printf("bots move was 1 paper, you win \n");
		}
		exit(0);
		}
	else
		{
		printf("rock, paper or scissors?\n");
		}
	}	
	return 0;
}

