void credits()
{
char ch;
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Credits");
printf("\n\n\t");
textcolor(LIGHTMAGENTA);
cprintf(" S.P.Prathyush");
printf("\n\t");
cprintf(" I Semester, B.E");
printf("\n\t");
cprintf(" Electronics and Communications");
printf("\n\t");
cprintf(" Maharaja Institute Of Technology ");
printf("\n\t");
textcolor(WHITE);
cprintf(" (Spcl. Regards Chandra Prasad Sir)");
printf("\n\n\t");
cprintf(" About The Software:");
printf("\n\t Solutions to Basic Electronics(c) V 1.0");
printf("\n\t King Infotec(registered trademark)");
printf("\n\t Copyright(c) reserved");
printf("\n\n\t");
textcolor(LIGHTMAGENTA);
cprintf(" For any issues, errors, bugs please mail them to:");
printf("\n\t");
textcolor(WHITE);
cprintf(" Kingspprathyush@gmail.com");
printf("\n\n\n\t");
textcolor(YELLOW);
cprintf(" Press 0 to return to Main menu");
printf("\n\t");
cprintf(" Press Q to Quit");
date();
ch=getch();
if(ch=='0')
main1();
else if(ch=='Q')
exit(ch-'Q');
else
invalid();
textcolor(WHITE);
cprintf("");
}