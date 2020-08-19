void printboard()
{
	for(int r=7;r>=0;r--)
	{
		for(int s=0;s<8;s++)
		{
			cout<<"["<<board[r][s]<<"]";
		}
		cout<<endl;
	}
	cout<<"\n\n\n";
}