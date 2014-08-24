void Transistor()
{
char ch;
float p,q,r,s,ib,ic,ie,A,B,vbb,vcc,vbe,vce,rb,rc;
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Problem on Transistors:\n ");
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press 0 to go back");
printf("\n\t");
cprintf(" Press any key to Enter");
textcolor(WHITE);
printf("");
date();
gotoxy(10,8);
ch=getch();
if(ch=='0')
main1();
else if(ch!='0')
{
printf("\n\n\t");
textcolor(WHITE);
printf(" Enter the value of Vcc(Collector voltage in volts)         : ");
scanf("%f",&vcc);
printf("\t Enter the value of Vbb(Base voltage in volts)              : ");
scanf("%f",&vbb);
printf("\t Enter the value of Rb(Base Resistance in ohms)             : ");
scanf("%f",&rb);
printf("\t Enter the value of Rc(Collector Resistance in ohms)        : ");
scanf("%f",&rc);
printf("\t Enter the value of Vbe(Base-Emitter voltage in volts)      : ");
scanf("%f",&vbe);
printf("\t Enter the value of Vce(Collector-Emitter voltage in volts) : ");
scanf("%f",&vce);
ib=(vbb-vbe)/rb;//Base Current
ic=(vcc-vce)/rc;//Collector current
B=ic/ib;//beta
ie=ic+ib;//Emitter Current
A=ic/ie;//alpha
p=ib*1000000;
q=ic*1000;
r=ie*1000;
clrscr();
printf("\n\t");
textcolor(RED+BLINK);
cprintf(" Solution:\n");
printf("\n\t 1.Ie(Emitter Current)   = %f mA",r);
printf("\n\t 2.Ic(Collector Current) = %f mA",q);
printf("\n\t 3.Ib(Base Current)      = %f MA",p);
printf("\n\t 4.B(Beta)               = %f",B);
printf("\n\t 5.A(Alpha)              = %f",A);
end();
}
}
