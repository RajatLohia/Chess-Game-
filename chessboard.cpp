#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char *board[8][8];
char pawn='p';
char rook='r';
char night='n';
char bishop='b';
char queen='q';
char king='k';
char Wpawn='P';
char Wrook='R';
char Wnight='N';
char Wbishop='B';
char Wqueen='Q';
char Wking='K';
char block=' ';
char *lostblackpieces[16];
char *lostwhitepieces[16];
char move='w';
void initboard()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(i==1)
			{
			board[i][j]=&Wpawn;			
			}
			else if(i==6)
			{
				board[i][j]=&pawn;							
			}
			else if(i!=7||i!=0||i!=1||i!=6)
			{
				board[i][j]=&block;
			}
		}
	}
	board[0][7]=board[0][0]=&Wrook;
	board[0][6]=board[0][1]=&Wnight;
	board[0][5]=board[0][2]=&Wbishop;
	board[0][3]=&Wqueen;
	board[0][4]=&Wking;
	board[7][7]=board[7][0]=&rook;
	board[7][6]=board[7][1]=&night;
	board[7][5]=board[7][2]=&bishop;
	board[7][3]=&queen;
	board[7][4]=&king;
}