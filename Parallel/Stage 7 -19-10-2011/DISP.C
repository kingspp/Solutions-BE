void display()
{
gotoxy(28,11);
textcolor(RED+BLINK);
cprintf(" Welcome To King Infotec");
gotoxy(30,20);
textcolor(WHITE);
cprintf("Press Any key to Enter");
date();
getch();
clrscr();
}