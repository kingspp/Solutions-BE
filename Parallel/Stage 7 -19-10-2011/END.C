int end()
{
char ch;
printf("\n\n\t\t\t\t\t\t");
textcolor(BLUE+BLINK);
cprintf(" Thank You");
textcolor(RED);
printf("\n\t\t\t\t\t\t");
cprintf(" By S.P.Prathyush");
textcolor(WHITE);
printf("\n\n\t");
gotoxy(5,16);
printf("\n\t");
textcolor(YELLOW);
cprintf(" Press 0 to go back");
printf("\n\t");
cprintf(" Press Q to Quit");
printf("\n\n\t");
cprintf(" Enter your Choice : ");
textcolor(WHITE);
cprintf("");
date();
ch=getch();
if(ch=='0')
main1();
else if(ch=='Q')
exit(ch-'Q');
else
invalid();
return 0;
}

int end1()
{
gotoxy(50,22);
textcolor(BLUE+BLINK);
cprintf(" Thank You");
gotoxy(50,23);
textcolor(RED);
cprintf(" By S.P.Prathyush");
textcolor(WHITE);
date();
return 0;
}
