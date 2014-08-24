int main1()
{
char ch;
clrscr();
printf("\n");
textcolor(CYAN);
cprintf("         Solutions to Basic Electronics");
printf("\n\n");
textcolor(MAGENTA);
cprintf("                         - S.P.Prathyush");
printf("\n\n\n");
textcolor(WHITE);
cprintf("         Enter The Topic");
printf("\n\n\t 1.Half Wave Rectifier \n\t 2.Full Wave Rectifier \n\t 3.Bridge Rectifier \n\t 4.Transistor \n\t 5.Solve by Equations \n\t 6.Definitions \n\t 7.Question Paper Pattern \n\t 8.Syllabus \n\t 9.Reference");
gotoxy(40,7);
printf(" Special Features:");
gotoxy(40,9);
printf(" a.Formula List");
gotoxy(40,10);
printf(" b.Features");
gotoxy(40,11);
printf(" c.View Credits");
printf("\n\n\t");
textcolor(YELLOW);
gotoxy(35,23);
cprintf(" Press Q to Quit ");
printf("\n\n\t");
gotoxy(35,24);
cprintf(" Enter Your Choice : ");
textcolor(WHITE);
printf("");
date();
ch=getche();
switch(ch)
{
case '1':
HWR();
break;

case '2':
FWR();
break;

case '3':
Bridge();
break;

case '4':
Transistor();
break;

case '5':
Equations();
break;

case '6':
definitions();
break;

case '7':
pattern();
break;

case '8':
syllabus();
break;

case '9':
reference();
break;

case 'a':
Formula();
break;

case 'b':
Features();
break;

case 'c':
credits();
break;

case 'Q':
exit(ch-'Q');
break;

default:
printf("\n\n\t");
textcolor(RED+BLINK);
cprintf(" Invalid Choice");
invalid();
getch();
end1();
break;
}
return 0;
}
