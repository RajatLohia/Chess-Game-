void printboard()
{
	for(int r=7;r>=0;r--)
	{
		for(int s=0;s<8;s++)
		{
			printf("[%c]",*board[r][s]);
		}
		printf("\n");
	}
	printf("\n\n\n");
}