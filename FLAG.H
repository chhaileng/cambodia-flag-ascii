#include<conio.h>
void angkor(int x,int y)
{
	int i,j;

	for(i=0;i<6;i++)
	{
		gotoxy(13+x,2+y+i);	cprintf("%c",202);
	}
	for(i=0;i<4;i++)
	{
		gotoxy(26+x,1+y+i);	cprintf("%c",202);
	}
	for(i=0;i<6;i++)
	{
		gotoxy(39+x,2+y+i); cprintf("%c",202);
   	}
    for(i=0;i<7;i+=2)
    {
        gotoxy(23+x+i,5+y); cprintf("%c",202);
    }
    for(i=0;i<4;i+=2)
    {
        gotoxy(25+x+i,6+y); cprintf("%c",202);
    }
    gotoxy(26+x,7+y); cprintf("%c",202);
    for(i=0;i<3;i++)
    {
        gotoxy(8+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(12+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(25+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(38+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(42+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<8;i++)
    {
        gotoxy(16+x+i,10+y); cprintf("%c",202);
    }
    for(i=0;i<8;i++)
    {
        gotoxy(29+x+i,10+y); cprintf("%c",202);
    }
    gotoxy(7+x,11+y); cprintf("%c",202);
    gotoxy(45+x,11+y); cprintf("%c",202);
    gotoxy(5+x,12+y); cprintf("%c",202);
    gotoxy(47+x,12+y); cprintf("%c",202);
    gotoxy(3+x,13+y); cprintf("%c",202);
    gotoxy(49+x,13+y); cprintf("%c",202);
    gotoxy(11+x,14+y); cprintf("%c",202);
    gotoxy(15+x,14+y); cprintf("%c",202);
    gotoxy(24+x,14+y); cprintf("%c",202);
    gotoxy(28+x,14+y); cprintf("%c",202);
    gotoxy(37+x,14+y); cprintf("%c",202);
    gotoxy(41+x,14+y); cprintf("%c",202);
    //new
    gotoxy(11+x,6+y); cprintf("%c",203);
    gotoxy(15+x,6+y); cprintf("%c",203);
    gotoxy(37+x,6+y); cprintf("%c",203);
    gotoxy(41+x,6+y); cprintf("%c",203);
    for(i=0;i<6;i+=2)
    {
        gotoxy(24+x+i,6+y); cprintf("%c",203);
    }
    gotoxy(10+x,8+y); cprintf("%c",203);
    gotoxy(16+x,8+y); cprintf("%c",203);
    gotoxy(23+x,8+y); cprintf("%c",203);
    gotoxy(29+x,8+y); cprintf("%c",203);
    gotoxy(36+x,8+y); cprintf("%c",203);
    gotoxy(42+x,8+y); cprintf("%c",203);
    for(i=0;i<3;i++)
    {
        gotoxy(12+x+i,8+y); cprintf("%c",203);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(25+x+i,8+y); cprintf("%c",203);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(38+x+i,8+y); cprintf("%c",203);
    }
    for(i=0;i<4;i++)
    {
        gotoxy(18+x+i,8+y); cprintf("%c",203);
    }for(i=0;i<4;i++)
    {
        gotoxy(31+x+i,8+y); cprintf("%c",203);
    }
    //new
    for(i=0;i<4;i++)
    {
        gotoxy(11+x-i,3+y+i);   cprintf("%c",200);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(24+x-i,2+y+i);   cprintf("%c",200);
    }
    for(i=0;i<4;i++)
    {
        gotoxy(37+x-i,3+y+i);   cprintf("%c",200);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(12+x-i,4+y+i);   cprintf("%c",200);
    }
    for(i=0;i<2;i++)
    {
        gotoxy(25+x-i,3+y+i);   cprintf("%c",200);
    }
    for(i=0;i<2;i++)
    {
        gotoxy(22+x-i,5+y+i);   cprintf("%c",200);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(38+x-i,4+y+i);   cprintf("%c",200);
    }
    gotoxy(1+x,14+y);   cprintf("%c",200);
    gotoxy(23+x,6+y);   cprintf("%c",200);
    //new new
    for(i=0;i<4;i++)
    {
        gotoxy(15+x+i,3+y+i);   cprintf("%c",188);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(28+x+i,2+y+i);   cprintf("%c",188);
    }
    for(i=0;i<4;i++)
    {
        gotoxy(41+x+i,3+y+i);   cprintf("%c",188);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(14+x+i,4+y+i);   cprintf("%c",188);
    }
    for(i=0;i<2;i++)
    {
        gotoxy(27+x+i,3+y+i);   cprintf("%c",188);
    }
    for(i=0;i<2;i++)
    {
        gotoxy(30+x+i,5+y+i);   cprintf("%c",188);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(40+x+i,4+y+i);   cprintf("%c",188);
    }
    gotoxy(51+x,14+y);   cprintf("%c",188);
    gotoxy(29+x,6+y);   cprintf("%c",188);
    //new
    gotoxy(14+x,2+y);   cprintf("%c",187);
    gotoxy(27+x,1+y);   cprintf("%c",187);
    gotoxy(40+x,2+y);   cprintf("%c",187);
    for(i=0;i<4;i++)
    {
        gotoxy(12+x-i,3+y+i);   cprintf("%c",187);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(25+x-i,2+y+i);   cprintf("%c",187);
    }
    for(i=0;i<4;i++)
    {
        gotoxy(38+x-i,3+y+i);   cprintf("%c",187);
    }
    gotoxy(22+x,6+y);   cprintf("%c",187);
    gotoxy(44+x,8+y);   cprintf("%c",187);
    for(i=0;i<4;i++)
    {
        gotoxy(45+x+i+i,10+y+i);   cprintf("%c",187);
    }
    //newnew
    gotoxy(12+x,2+y);   cprintf("%c",201);
    gotoxy(25+x,1+y);   cprintf("%c",201);
    gotoxy(38+x,2+y);   cprintf("%c",201);
    for(i=0;i<4;i++)
    {
        gotoxy(14+x+i,3+y+i);   cprintf("%c",201);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(27+x+i,2+y+i);   cprintf("%c",201);
    }
    for(i=0;i<4;i++)
    {
        gotoxy(40+x+i,3+y+i);   cprintf("%c",201);
    }
    gotoxy(30+x,6+y);   cprintf("%c",201);
    gotoxy(8+x,8+y);   cprintf("%c",201);
    for(i=0;i<4;i++)
    {
        gotoxy(7+x-i-i,10+y+i);   cprintf("%c",201);
    }
    //new
    gotoxy(11+x,7+y);   cprintf("%c",206);
    gotoxy(15+x,7+y);   cprintf("%c",206);
    gotoxy(24+x,7+y);   cprintf("%c",206);
    gotoxy(28+x,7+y);   cprintf("%c",206);
    gotoxy(37+x,7+y);   cprintf("%c",206);
    gotoxy(41+x,7+y);   cprintf("%c",206);

    gotoxy(9+x,8+y);   cprintf("%c",206);
    gotoxy(11+x,8+y);   cprintf("%c",206);
    gotoxy(15+x,8+y);   cprintf("%c",206);
    gotoxy(17+x,8+y);   cprintf("%c",206);
    gotoxy(22+x,8+y);   cprintf("%c",206);
    gotoxy(24+x,8+y);   cprintf("%c",206);
    gotoxy(28+x,8+y);   cprintf("%c",206);
    gotoxy(30+x,8+y);   cprintf("%c",206);
    gotoxy(35+x,8+y);   cprintf("%c",206);
    gotoxy(37+x,8+y);   cprintf("%c",206);
    gotoxy(41+x,8+y);   cprintf("%c",206);
    gotoxy(43+x,8+y);   cprintf("%c",206);

    gotoxy(11+x,10+y);   cprintf("%c",206);
    gotoxy(15+x,10+y);   cprintf("%c",206);
    gotoxy(24+x,10+y);   cprintf("%c",206);
    gotoxy(28+x,10+y);   cprintf("%c",206);
    gotoxy(37+x,10+y);   cprintf("%c",206);
    gotoxy(41+x,10+y);   cprintf("%c",206);

    //new
    gotoxy(9+x,7+y);   cprintf("%c",204);
    gotoxy(22+x,7+y);   cprintf("%c",204);
    gotoxy(35+x,7+y);   cprintf("%c",204);
    for(i=0;i<3;i++)
    {
        gotoxy(15+x,11+y+i);   cprintf("%c",204);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(28+x,11+y+i);   cprintf("%c",204);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(41+x,11+y+i);   cprintf("%c",204);
    }
    //new
    gotoxy(17+x,7+y);   cprintf("%c",185);
    gotoxy(30+x,7+y);   cprintf("%c",185);
    gotoxy(43+x,7+y);   cprintf("%c",185);
    for(i=0;i<3;i++)
    {
        gotoxy(11+x,11+y+i);   cprintf("%c",185);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(24+x,11+y+i);   cprintf("%c",185);
    }
    for(i=0;i<3;i++)
    {
        gotoxy(37+x,11+y+i);   cprintf("%c",185);
    }
    //new
    gotoxy(21+x,5+y);   cprintf("%c",186);
    gotoxy(31+x,5+y);   cprintf("%c",186);
    gotoxy(8+x,9+y);   cprintf("%c",186);
    gotoxy(10+x,9+y);   cprintf("%c%c",186,186);
    gotoxy(13+x,9+y);   cprintf("%c",186);
    gotoxy(15+x,9+y);   cprintf("%c%c",186,186);
    for(i=0;i<9;i++)
    {
        gotoxy(18+x+i+i,9+y);   cprintf("%c",186);
    }
    gotoxy(36+x,9+y);   cprintf("%c%c",186,186);
    gotoxy(39+x,9+y);   cprintf("%c",186);
    gotoxy(41+x,9+y);   cprintf("%c%c",186,186);
    gotoxy(44+x,9+y);   cprintf("%c",186);
    //new
    gotoxy(9+x,9+y);   cprintf("0");
    gotoxy(12+x,9+y);   cprintf("0");
    gotoxy(14+x,9+y);   cprintf("0");
    for(i=0;i<10;i++)
    {
        gotoxy(17+x+i+i,9+y);   cprintf("0");
    }
    gotoxy(38+x,9+y);   cprintf("0");
    gotoxy(40+x,9+y);   cprintf("0");
    gotoxy(43+x,9+y);   cprintf("0");
    //new
    for(i=0;i<2;i++)
    {
        gotoxy(12+x,5+y+i); cprintf("%c",205);
        gotoxy(14+x,5+y+i); cprintf("%c",205);
    }
    gotoxy(25+x,4+y); cprintf("%c",205);
    gotoxy(27+x,4+y); cprintf("%c",205);
    gotoxy(24+x,5+y); cprintf("%c",205);
    gotoxy(26+x,5+y); cprintf("%c",205);
    gotoxy(28+x,5+y); cprintf("%c",205);
    for(i=0;i<2;i++)
    {
        gotoxy(38+x,5+y+i); cprintf("%c",205);
        gotoxy(40+x,5+y+i); cprintf("%c",205);
    }
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        {
            gotoxy(10+x+j+j+(i*13),7+y); cprintf("%c",205);
        }
    for(i=0;i<3;i++)
    {
        gotoxy(6+x-i-i,11+y+i); cprintf("%c",205);
    }
    for(i=0;i<4;i++)
        for(j=0;j<(3+(2*i));j++)
        {
            gotoxy(8+x-i-i+j,11+y+i); cprintf("%c",205);
        }
    for(i=0;i<3;i++)
    {
        gotoxy(46+x+i+i,11+y+i); cprintf("%c",205);
    }
    for(i=0;i<4;i++)
        for(j=0;j<(3+(2*i));j++)
        {
            gotoxy(42+x+j,11+y+i); cprintf("%c",205);
        }
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
        {
            gotoxy(12+x+j,11+y+i);  cprintf("%c",205);
        }
    for(i=0;i<4;i++)
        for(j=0;j<8;j++)
        {
            gotoxy(16+x+j,11+y+i);  cprintf("%c",205);
        }
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
        {
            gotoxy(25+x+j,11+y+i);  cprintf("%c",205);
        }
    for(i=0;i<4;i++)
        for(j=0;j<8;j++)
        {
            gotoxy(29+x+j,11+y+i);  cprintf("%c",205);
        }
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
        {
            gotoxy(38+x+j,11+y+i);  cprintf("%c",205);
        }
}
void _space(int a)
{
	for(int i=0;i<a;i++)
		cprintf(" ");
}
void flag_background()
{
	textbackground(BLUE);
	gotoxy(1,2);
	for(int i=0;i<4;i++)
		_space(80);
	textbackground(RED);
	for(i=0;i<15;i++)
		_space(80);
	textbackground(BLUE);
	for(i=0;i<4;i++)
		_space(80);
}
void cambodia_flag()
{
	clrscr();
	_setcursortype(0);
	flag_background();
	textcolor(WHITE);
	textbackground(RED);
	angkor(15,6);
	textbackground(0);
	gotoxy(1,1);
	_space(80);
}