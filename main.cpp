#include"some.h"
int main()
{
	int x;
	do
	{
		x = MENU();
		switch (x)
		{
		case 1:INPUT(); break;
		case 2:SEARCHSELL(); break;
		case 3:TUI(); break;
		case 4:BREAK(); break;
		default:WRONG();
			break;
		}
	} while (x != 4);
	return 0;
}
