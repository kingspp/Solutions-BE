int invalid()
{
char ch;
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Invalid Choice");
printf("\n\n");
textcolor(YELLOW);
cprintf("         Press 0 to go back");
printf("\n\t");
cprintf(" Press 'Q' to Quit");
textcolor(WHITE);
cprintf("");
date();
gotoxy(10,8);
ch=getch();
switch(ch)
	{
	case 'Q':
	exit(ch-'Q');
	break;

	case '0':
	main1();
	break;

	default:
	invalid();
	break;
	}
return 0;
}