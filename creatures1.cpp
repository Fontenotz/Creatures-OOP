#include<iostream.h>
#include<stdlib.h>
#include<time.h>

char board[5][5]=
{
	'.','.','.','.','.',
	'.','.','.','.','.',
	'.','.','.','.','.',
	'.','.','.','.','.',
	'.','.','.','.','.'
};

class creature
{
private:
	int x;                    // x-coordinate in 2-dimensional space
	int y;                    // y-coordinate in 2-dimensional space
	double power;
public:
	creature();               // a default constructor
	void position_creature(int xc, int yc);
	void showboard();

};
creature::creature()          // Let's initialize the class
{
	x=0;
	y=0;
	power=0;
}
void creature::position_creature(int xc, int yc)
{
	x=xc;
	y=yc;
	board[xc][yc]='G';
	showboard();
}
void creature::showboard()
{
	for (int a=0;a<5;a++)
	{
		for (int b=0;b<5;b++)
		{
			cout<<board[a][b]<<"   ";
		}
		cout<<endl;
	}
}

int main()
{
	srand(time(0));
	int xc=rand()%5;
	int yc=rand()%5;
    creature green;
	green.position_creature(xc,yc);
return 0;
}
