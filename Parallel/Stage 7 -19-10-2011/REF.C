int reference()
{
clrscr();
textcolor(RED);
printf("\n");
cprintf("  Reference");
printf("\n\n");
textcolor(CYAN);
cprintf("  Professors : ");
printf("\n\n");
textcolor(WHITE);
cprintf("  Prof.Y.L.Chandrashekar");
printf("\n  Prof.M.G.Shreenivas");
printf("\n  Prof.Shanthy Ajish");
printf("\n  Prof.V.Bhagyalaksmi");
printf("\n  Prof.H.Ravi Kumar");
printf("\n  Prof.B.Thirthaprasad");
printf("\n  Prof.S.K.Veena");
printf("\n\n");
textcolor(CYAN);
gotoxy(27,4);
cprintf(" Reference Books :");
printf("\n\n");
textcolor(WHITE);
gotoxy(27,6);
cprintf(" 1.Electronic Devices and Circuits : David A.BEll");
gotoxy(27,7);
printf(" 2.Electronic Devices and Circuits : Jacob Milliman");
gotoxy(27,8);
printf(" 3.Electronic Communication Systems : George Kennedy");
gotoxy(27,9);
printf(" 4.Digital Logic and Computer Design : Moris Mano");
gotoxy(27,10);
printf(" 5.Basic Electronics : RD Sudhakar");
end();
return 0;
}
