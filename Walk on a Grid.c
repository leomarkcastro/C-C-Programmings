#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(){

	char box[11][11];
	int a ,b, c, str[2], cor[2], vari[2];
	system("cls");

	cor[0] = 5;
	cor[1] = 5;
	str[0] = 5;
	str[1] = 6;
	vari[0] = 0;

	printf("Welcome to my game.\nPress A,S,W,D");

	ztart:

	vari[1] = 0;
	c = getch();

	system("cls");

	switch(c)
	{
		case 'a':
			if(cor[1] > 1)
			{
				cor[1] -= 1;
			}
			break;
		case 'd':
			if(cor[1] < 10)
			{
				cor[1] += 1;
			}
			break;
		case 'w':
			if(cor[0] > 1)
			{
				cor[0] -= 1;
			}
			break;
		case 's':
			if(cor[0] < 10)
			{
				cor[0] += 1;
			}
			break;
		case 'p':
			vari[1] = 2;
			break;
		default:
			vari[1] = 1;
			break;
	}

	for(a=0;a <= 11;a++)
	{
		for(b=0;b <= 11;b++)
		{
			if((a==0 || a==11) || (b==0 || b==11))
			{
				box[a][b] = '#';
			}
			else
			{
				box[a][b] = '0';
			}

		}
	}

	if (str[0] == cor[0] && str[1] == cor[1])
	{
		vari[0] += 1;
		str[0] =((rand() % 10) + 1);
		str[1] =((rand() % 10) + 1);
	}

	if(vari[0] == 20)
	{
		system("cls");
		printf("You finished! Thanks for playing");
		exit(0);
	}

	box[cor[0]][cor[1]] = '@';
	box[str[0]][str[1]] = 'X';


	for(a=0;a <= 11;a++)
	{
		for(b=0;b <= 11;b++)
		{
			printf("%c ", box[a][b]);
		}
		printf("\n");
	}

	switch(vari[1])
	{
		case 0:
			printf("\nScore: %d/20", vari[0]);
			break;
		case 1:
			printf("\nPress a,s,d or w to move. Press p to quit");
			break;
		case 2:
			printf("\nQuit game, press x again.");
			c = getch();
			switch(c)
			{
				case 'x':
					system("cls");
					exit(0);
					break;
			}
			break;
	}

    goto ztart;
	getch();
	}
