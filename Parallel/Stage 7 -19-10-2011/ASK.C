int ask()
{
char ch;
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press for 0 to go back");
printf("\n\t");
cprintf(" Press Q to quit");
printf("\n\t");
cprintf(" Press 1 for main menu");
textcolor(WHITE);
cprintf("");
date();
ch=getch();
switch(ch)
{
case 'Q':
exit(ch-'Q');
break;

case '0':
definitions();
break;

case '1':
main1();
break;

default:
invalid();
break;
}

return 0;
}