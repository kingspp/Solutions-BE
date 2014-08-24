#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<ctype.h>
#include<errno.h>
#include<io.h>
#include<process.h>
#include<string.h>
#include<sys\stat.h>
#include<fcntl.h>
#define PI 3.1458271456
#define e 2.718281828


int main()
{
clrscr();
display();
main1();
return 0;
}





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


int ask1()
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
Formula();
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





int date()
{
   int c;
   struct date d;
   struct time t;
   getdate(&d);
   gettime(&t);
   gotoxy(4,23);
   textcolor(DARKGRAY);
   cprintf(" Date : %d-%d-%d ", d.da_day,d.da_mon,d.da_year);
   gotoxy(4,24);
   if(t.ti_hour<=12)
   {
   cprintf(" Time : %2d:%2d AM",t.ti_hour,t.ti_min);
   }
   else
   {
   c=t.ti_hour-12;
   cprintf(" Time : %2d:%2d PM",c,t.ti_min);
   }
   textcolor(WHITE);
   cprintf("");
   return 0;
}






int keyword()
{
int c;
char key[25];
clrscr();
date();
gotoxy(4,2);
printf("\n\t Enter Keyword(in small case): ");
gets(key);
c=strcmp(key,"base terminal");
if(c==0)
printf("\n\n\t The base terminal is thinly doped such that it acts as the depletion\n\t region between emitter and collector");
c=strcmp(key,"alpha");
if(c==0)
printf("\n\n\t The ratio of Collector Current to the Emitter current at constant\n\t output voltage Vcb");
c=strcmp(key,"beta");
if(c==0)
printf("\n\n\t The ratio of Collector Current to the Base Current at constant output\n\t voltage Vce");
c=strcmp(key,"capacitor");
if(c==0)
printf("\n\n\t The device which stors Electrical energy is said to be a capacitor");
c=strcmp(key,"collector terminal");
if(c==0)
printf("\n\n\t The Collector terminal is moderately doped and its function is to \n\t collect the charge carriers from the emitter");
c=strcmp(key,"common base mode");
if(c==0)
printf("\n\n\t The mode in which Emitter terminal(Input) is forward biased and \n\t Collector  terminal(Output) is reverse biased is known as \n\t Common base mode. Base terminal is grounded. \n\t The gain is given by Alpha");
c=strcmp(key,"common emitter mode");
if(c==0)
printf("\n\n\t The mode in which Base terminal(Input) is forward biased and \n\t Collector terminal(Output) is reverse biased is known as \n\t Common Emitter mode. Emitter terminal is grounded \n\t The gain is given by Beta");
c=strcmp(key,"common collector");
if(c==0)
printf("\n\n\t The mode in which Base terminal(Input) is forward biased and Emitter \n\t terminal(output) is reverse biased is known as Common Emitter mode. Collector Terminal is grounded. \n\t The gain is given by Gamma");
c=strcmp(key,"dc load line");
if(c==0)
printf("\n\n\t It is a line plotted in the graph, where it shows the \n\t maximum voltage and current which a Diode or a Transistor can work \n\t and their Q points ");
c=strcmp(key,"diffusion capacitance");
if(c==0)
printf("\n\n\t The capacitance effect caused due to the Time Delay of the Diode \n\t is known as Diffusion Capacitance");
c=strcmp(key,"diode");
if(c==0)
printf("\n\n\t Diode is a two terminal single junction device");
c=strcmp(key,"diode current equation");
if(c==0)
printf("\n\n\t If = Is[e pow(V/NVt) - 1] \n\n\t Where, \n\t If = Forward Current \n\t Is = Reverse Saturation Current \n\t V  = Forward Voltage \n\t Vt = Thermal Equivalent Voltage \n\t N  = 2 for Silicon, 1 for Germanium \n\t Vt = (T/11600), T = 25 C");
c=strcmp(key,"diode voltage equation");
if(c==0)
printf("\n\n\t E = IfRf + Vf \n\n\t Where,\n\t E  = Voltage Supplied \n\t If = Forward Current \n\t Rf = Forward Resistance \n\t Vf = Forward Voltage");
c=strcmp(key,"emitter terminal");
if(c==0)
printf("\n\n\t The Emitter terminal is highly doped because it has to emit \n\t the charge carriers");
c=strcmp(key,"filter");
if(c==0)
printf("\n\n\t Filters are the circuits that is used to remove the AC component \n\t present in the rectifier circuits");
c=strcmp(key,"forward bias");
if(c==0)
printf("\n\n\t When positive part of a device is said to be connected to the \n\t positive terminal of the Battery and negetive to the negetive terminal, \t the device is said to be Forward Biased");
c=strcmp(key,"input characteristics");
if(c==0)
printf("\n\n\t It is the graph of Input Voltage vs Input Current, at \n\t constant Output Voltage ");
c=strcmp(key,"npn transistor");
if(c==0)
printf("\n\n\t When a p-type Semiconductor is sandwiched between two n-type \n\t Semiconductors, the device is said to be a n-p-n Transistor.\n\t Free electrons are the majority charge carriers");
c=strcmp(key,"output characteristics");
if(c==0)
printf("\n\t It is a graph of output voltage vs output current at constant input current");
c=strcmp(key,"peak inverse voltage");
if(c==0)
printf("\n\n\t The maximum reverse voltage that can be applied across the diode \n\t during the rectification process");
c=strcmp(key,"pnp transistor");
if(c==0)
printf("\n\n\t When a n-type Semiconductor is said to be sandwiched between two \n\t p-type Semiconductors, the device is said to be a p-n-p Transistor");
c=strcmp(key,"rectifier");
if(c==0)
printf("\n\n\t The device which rectifies(converts) AC wave to a DC wave is known as \n\t a Rectifier");
c=strcmp(key,"resistor");
if(c==0)
printf("\n\n\t The devices which has the property to obstruct the \n\t flow of Electric Current is said to be a Resistor");
c=strcmp(key,"reverse bias");
if(c==0)
printf("\n\n\t When the positive terminal of a device is connected to the \n\t negetive terminal of the battery and negetive to the positive terminal, \t the device is said to be Reverse Biased");
c=strcmp(key,"reverse recovery time");
if(c==0)
printf("\n\n\t The time taken by the diode to stop the flow of current when \n\t it is Reverse Biased");
c=strcmp(key,"ripple factor");
if(c==0)
printf("\n\n\t The ratio of RMS value of the AC Component to the DC Component \n\t is known as ripple factor");
c=strcmp(key,"transistor");
if(c==0)
printf("\n\n\t Bipolar Junction Transistor is a bi junction, three terminal, \n\t bi polar current controlled active device");
c=strcmp(key,"transition capacitance");
if(c==0)
printf("\n\n\t When the diode is Reverse Biased, the width of the depletion layer \n\t increases and it produces the capacitance effect this is known as \n\t Transition Capacitance");
c=strcmp(key,"types of filter");
if(c==0)
printf("\n\n\t There are three types of Filters : \n\t 1.Capacitor Filter \n\t 2.Choke Input Filter \n\t 3.PI Filter");
c=strcmp(key,"zener diode");
if(c==0)
printf("\n\n\t Zener is a type of diode, wherein it can work in both Forward Bias mode \t as well as in Reverse bias");
return 0;
}

int defview()
{
int ch;
clrscr();
printf("\n\t");
textcolor(CYAN);
date();
gotoxy(5,2);
cprintf(" Enter your choice and press enter : ");
scanf("%d",&ch);
textcolor(WHITE);
cprintf("");
switch(ch)
{
case 1:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Alpha");
printf("\n\n\t The ratio of Collector Current to the Emitter current at constant\n\t output voltage Vcb");
textcolor(WHITE);
cprintf("");
ask();
break;

case 2:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Base Terminal");
printf("\n\n\t The base terminal is thinly doped such that it acts as the depletion\n\t region between emitter and collector");
textcolor(WHITE);
cprintf("");
ask();
break;

case 3:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Beta");
printf("\n\n\t The ratio of Collector Current to the Base Current at constant output\n\t voltage Vce");
textcolor(WHITE);
cprintf("");
ask();
break;

case 4:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Capacitor");
printf("\n\n\t The device which stors Electrical energy is said to be a capacitor");
textcolor(WHITE);
cprintf("");
ask();
break;

case 5:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Collector Terminal");
printf("\n\n\t The Collector terminal is moderately doped and its function is to \n\t collect the charge carriers from the emitter");
textcolor(WHITE);
cprintf("");
ask();
break;

case 6:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Common Base mode");
printf("\n\n\t The mode in which Emitter terminal(Input) is forward biased and \n\t Collector  terminal(Output) is reverse biased is known as \n\t Common base mode. Base terminal is grounded. \n\t The gain is given by Alpha");
textcolor(WHITE);
cprintf("");
ask();
break;

case 7:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Common Emitter mode");
printf("\n\n\t The mode in which Base terminal(Input) is forward biased and \n\t Collector terminal(Output) is reverse biased is known as \n\t Common Emitter mode. Emitter terminal is grounded \n\t The gain is given by Beta");
textcolor(WHITE);
cprintf("");
ask();
break;

case 8:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Common Collector mode");
printf("\n\n\t The mode in which Base terminal(Input) is forward biased and Emitter \n\t terminal(output) is reverse biased is known as Common Emitter mode. Collector Terminal is grounded. \n\t The gain is given by Gamma");
textcolor(WHITE);
cprintf("");
ask();
break;

case 9:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" DC Load Line");
printf("\n\n\t It is a line plotted in the graph, where it shows the \n\t maximum voltage and current which a Diode or a Transistor can work \n\t and their Q points ");
textcolor(WHITE);
cprintf("");
ask();
break;

case 10:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Diffusion Capacitance");
printf("\n\n\t The capacitance effect caused due to the Time Delay of the Diode \n\t is known as Diffusion Capacitance");
textcolor(WHITE);
cprintf("");
ask();
break;

case 11:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Diode");
printf("\n\n\t Diode is a two terminal single junction device");
textcolor(WHITE);
cprintf("");
ask();
break;

case 12:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Diode Current Equation");
printf("\n\n\t If = Is[e pow(V/NVt) - 1] \n\n\t Where, \n\t If = Forward Current \n\t Is = Reverse Saturation Current \n\t V  = Forward Voltage \n\t Vt = Thermal Equivalent Voltage \n\t N  = 2 for Silicon, 1 for Germanium \n\t Vt = (T/11600), T = 25 C");
textcolor(WHITE);
cprintf("");
ask();
break;

case 13:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Diode Voltage Equation");
printf("\n\n\t E = IfRf + Vf \n\n\t Where,\n\t E  = Voltage Supplied \n\t If = Forward Current \n\t Rf = Forward Resistance \n\t Vf = Forward Voltage");
textcolor(WHITE);
cprintf("");
ask();
break;

case 14:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Emitter Terminal");
printf("\n\n\t The Emitter terminal is highly doped because it has to emit \n\t the charge carriers");
textcolor(WHITE);
cprintf("");
ask();
break;


case 15:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Filter");
printf("\n\n\t Filters are the circuits that is used to remove the AC component \n\t present in the rectifier circuits");
textcolor(WHITE);
cprintf("");
ask();
break;

case 16:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Forward Bias");
printf("\n\n\t When positive part of a device is said to be connected to the \n\t positive terminal of the Battery and negetive to the negetive terminal, \t the device is said to be Forward Biased");
textcolor(WHITE);
cprintf("");
ask();
break;

case 17:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Input Characteristics");
printf("\n\n\t It is the graph of Input Voltage vs Input Current, at \n\t constant Output Voltage ");
textcolor(WHITE);
cprintf("");
ask();
break;

case 18:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" N-P-N Transistor");
printf("\n\n\t When a p-type Semiconductor is sandwiched between two n-type \n\t Semiconductors, the device is said to be a n-p-n Transistor.\n\t Free electrons are the majority charge carriers");
textcolor(WHITE);
cprintf("");
ask();
break;

case 19:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Output Characteristics");
printf("\n\n\t It is a graph of Output Voltage vs Output Current at constant \n\t Input Current");
textcolor(WHITE);
cprintf("");
ask();
break;

case 20:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Peak Inverse Voltage");
printf("\n\n\t The maximum reverse voltage that can be applied across the diode \n\t during the rectification process");
textcolor(WHITE);
cprintf("");
ask();
break;

case 21:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" P-N-P Transistor");
printf("\n\n\t When a n-type Semiconductor is said to be sandwiched between \n\t two p-type Semiconductors, the device is said to be a p-n-p Transistor");
textcolor(WHITE);
cprintf("");
ask();
break;


case 22:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Rectifier");
printf("\n\n\t The device which rectifies(converts) AC wave to a DC wave is known as \n\t a Rectifier");
textcolor(WHITE);
cprintf("");
ask();
break;

case 23:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Resistor");
printf("\n\n\t The devices which has the property to obstruct the \n\t flow of Electric Current is said to be a Resistor");
textcolor(WHITE);
cprintf("");
ask();
break;


case 24:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Reverse Bias");
printf("\n\n\t When the positive terminal of a device is connected to the \n\t negetive terminal of the battery and negetive to the positive terminal, \t the device is said to be Reverse Biased");
textcolor(WHITE);
cprintf("");
ask();
break;

case 25:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Reverse Recory Time");
printf("\n\n\t The time taken by the diode to stop the flow of current when \n\t it is Reverse Biased");
textcolor(WHITE);
cprintf("");
ask();
break;

case 26:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Ripple Factor");
printf("\n\n\t The ratio of RMS value of the AC Component to the DC Component \n\t is known as ripple factor");
textcolor(WHITE);
cprintf("");
ask();
break;

case 27:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Transistor");
printf("\n\n\t Bipolar Junction Transistor is a bi junction, three terminal, \n\t bi polar current controlled active device");
textcolor(WHITE);
cprintf("");
ask();
break;

case 28:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Transition Capacitance");
printf("\n\n\t When the diode is Reverse Biased, the width of the depletion layer \n\t increases and it produces the capacitance effect this is known as \n\t Transition Capacitance");
textcolor(WHITE);
cprintf("");
ask();
break;

case 29:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Types of Filters");
printf("\n\n\t There are three types of Filters : \n\t 1.Capacitor Filter \n\t 2.Choke Input Filter \n\t 3.PI Filter");
textcolor(WHITE);
cprintf("");
ask();
break;

case 30:
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" Zener Diode");
printf("\n\n\t Zener is a type of diode, wherein it can work in both Forward Bias mode \t as well as in Reverse bias");
textcolor(WHITE);
cprintf("");
ask();
break;

default:
invalid();
break;
}
return 0;

}

int view1()
{
char ch;
clrscr();
printf("\n\t");
textcolor(GREEN);
cprintf(" Page 1:");
printf("\n\n\t");
textcolor(WHITE);
cprintf(" 1.Alpha");
printf("\n\t 2.Base terminal");
printf("\n\t 3.Beta");
printf("\n\t 4.Capacitor");
printf("\n\t 5.Collector terminal");
printf("\n\t 6.Common Base mode");
printf("\n\t 7.Common Emitter mode");
printf("\n\t 8.Common Collector mode");
printf("\n\t 9.DC load line");
printf("\n\t 10.Diffusion Capacitance");
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press 2 for next page");
printf("\n\t");
cprintf(" Press 0 for main menu");
printf("\n\t");
cprintf(" Press E to Enter your choice:");
textcolor(WHITE);
cprintf("");
date();
ch=getch();
switch(ch)
{
case '2':
view2();
break;

case '0':
main1();
break;

case 'E':
defview();
break;

default:
invalid();
break;
}
return 0;
}

int view2()
{
char ch;
clrscr();
printf("\n\t");
textcolor(GREEN);
cprintf(" Page 2:");
printf("\n\n\t");
textcolor(WHITE);
cprintf(" 11.Diode");
printf("\n\t 12.Diode Current Equation");
printf("\n\t 13.Diode Voltage Equation");
printf("\n\t 14.Emitter terminal");
printf("\n\t 15.Filter");
printf("\n\t 16.Forward Bias");
printf("\n\t 17.Input Characteristics");
printf("\n\t 18.N-P-N Transistor");
printf("\n\t 19.Output Characteristics");
printf("\n\t 20.Peak Inverse Voltage");
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press 3 for next page ");
printf("\n\t");
cprintf(" Press 1 for previous page");
printf("\n\t");
cprintf(" Press 0 for main menu");
printf("\n\t");
cprintf(" Press E to Enter your choice:");
textcolor(WHITE);
cprintf("");
date();
ch=getch();
switch(ch)
{
case '1':
view1();
break;

case '0':
main1();
break;

case '3':
view3();
break;

case 'E':
defview();
break;

default:
invalid();
break;
}
return 0;
}

int view3()
{
char ch;
clrscr();
printf("\n\t");
textcolor(GREEN);
cprintf(" Page 3:");
printf("\n\n\t");
textcolor(WHITE);
cprintf(" 21.P-N-P Transistor");
printf("\n\t 22.Rectifier");
printf("\n\t 23.Resistor");
printf("\n\t 24.Reverse Bias");
printf("\n\t 25.Reverse Recovery Time");
printf("\n\t 26.Ripple Factor");
printf("\n\t 27.Transistor");
printf("\n\t 28.Transition capacitance");
printf("\n\t 29.Types of Filter");
printf("\n\t 30.Zener Diode");
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press 2 for previous page");
printf("\n\t");
cprintf(" Press 0 for main menu");
printf("\n\t");
cprintf(" Press E to Enter your choice:");
textcolor(WHITE);
cprintf("");
date();
ch=getch();
switch(ch)
{
case '2':
view2();
break;

case '0':
main1();
break;

case 'E':
defview();
break;

default:
invalid();
break;
}
return 0;
}

int definitions()
{
char ch;
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Definitions");
textcolor(WHITE);
cprintf("");
printf("\n\n\t 1.Enter Keyword");
printf("\n\t 2.View all");
textcolor(YELLOW);
printf("\n\n\n\n\n\n\t");
cprintf(" Press 0 to go back");
printf("\n\t");
cprintf(" Press m for Main menu");
printf("\n\t");
cprintf(" Press Q to Exit");
textcolor(WHITE);
cprintf("");

date();
ch=getch();
switch(ch)
{
case '1':
keyword();
break;

case '2':
view1();
break;

case 'm':
main1();
break;

case '0':
definitions();
break;

case 'Q':
exit(ch-'Q');
break;

default:
invalid();
break;
}
end();
return 0;
}






int display()
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
return 0;
}





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






void Equations()
{
char ch;
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Choose the Equation: ");
printf("\n\n\t a.Vf2(Forward Voltage Drop) = Vf1+(T2-T1)V");
printf("\n\t b.Rd(Dynamic Resistance) = (26mv/If)(T+273/298)");
printf("\n\t c.P(Power) = V*I");
printf("\n\t d.Trr(Reverse Recory Time) = Tf(min)/10");
printf("\n\t e.E(Diode Voltage Equation) = IfRf+Vf");
printf("\n\t f.If(Diode current Equation) = Is(e^(V/N * Vt)-1)");
printf("\n\t g.P2(Maximum power)=P1-(T2-T1 * Derating Factor)");
printf("\n\t h.Ripple Factor = 1/4root(3)*F*C*Rl");
printf("\n\t i.C(Capacitance) = 1/4root(3)*F*Ripple Factor*Rl ");
printf("\n\t j.Ct(Transition Capacitance) = EA/d");
printf("\n\n\n\t");
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
else if(ch!='0'||'Q')
{
switch(ch)
{
char ch;
case 'a':
	{
	float vf1,v,If,t1,t2,t,vf2,rd,a;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find Vf2(Forward Voltage Drop)");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of Vf1(in volts)     : ");
	scanf("%f",&vf1);
	printf("\t Enter the value of V(in milli volts)   : ");
	scanf("%f",&v);
	printf("\t Enter the value of T1(in Celsius)      : ");
	scanf("%f",&t1);
	printf("\t Enter the value of T2(in Celsius)      : ");
	scanf("%f",&t2);
	a=v/1000;
	vf2=vf1+(t2-t1)*a;//to find Voltage Drop
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution: \n");
	printf("\t 1.Vf2 = %f V ",vf2);
	end();
	}
	}
break;

case 'b':
	{
	float If,t,rd;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find Rd(Dynamic Resistance)");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\t Enter the value of If(in mA)     : ");
	scanf("%f",&If);
	printf("\t Enter the value of T(in Celsius) : ");
	scanf("%f",&t);
	rd=(26/If)*((t+273)/298);//to find dynamic resistance
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution: \n");
	printf("\t Rd  = %f ohm",rd);
	end();
	}
	}
break;

case 'c':
	{
	float v,i,p;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find P(Power dissipation across Diode)");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of Voltage(in volts): ");
	scanf("%f",&v);
	printf("\n\t Enter the value of Current(in mA)   : ");
	scanf("%f",&i);
	p=v*i;
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution:\n");
	printf("\n\t The Power dissipation of the diode is : %f mW",p);
	end();
	}
	}

case 'd':
	{
	float trr,tf,a;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find Reverse Recory Time of the Diode");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of Tf(Input Pulse in Ms): ");
	scanf("%f",&tf);
	trr=tf/10;//to find reverse recory time
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution:\n");
	printf("\n\t The Reverse recory time of the Diode is : %f Ms",trr);
	end();
	}
	}

case 'e':
	{
	float vf,If,E,rf,a;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find Voltage(Diode Voltage Equation))");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of Vf(Forward voltage in volts)       : ");
	scanf("%f",&vf);
	printf("\n\t Enter the value of If(Forward current in mA)            : ");
	scanf("%f",&If);
	printf("\n\t Enter the value of Rf(Forward Resistance in ohms)       : ");
	scanf("%f",&rf);
	a=If/1000;
	E=(a*rf)+vf;
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution:\n");
	printf("\n\t The value of If is %f V",E);
	end();
	}
	}
break;

case 'f':
	{
	float vf,t,is,n,vt,a,If,b,c;
	clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         To find If(Diode Current Equation)");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of Vf(Forward voltage in volts)         : ");
	scanf("%f",&vf);
	printf("\n\t Enter the value of T(Temperature in Celsius)            : ");
	scanf("%f",&t);
	printf("\n\t Enter the value of Is(Reverse Saturation current in nA) : ");
	scanf("%f",&is);
	printf("\n\t Enter the value of N(neta)                              : ");
	scanf("%f",&n);
	vt=(t+273)/11600;
	a=vf/(n*vt);
	b=pow(e,a);
	If=is*(b-1);
	c=If/pow(10,6);
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution:\n");
	printf("\n\t The value of If is %f mA",c);
	end();
	}
	}
break;

case 'g':
	{
	float p1,p2,t1,t2,d,a;
	clrscr();
	printf("\n");
	textcolor(RED);
	cprintf("         To find P2(Maximum Power)");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of P1(Maximum power at room temperature in Watt) : ");
	scanf("%f",&p1);
	printf("\n\t Enter the value of T2(Temperature in Celsius)                    : ");
	scanf("%f",&t2);
	printf("\n\t Enter the value of T1(Temperature in Celsius)                    : ");
	scanf("%f",&t1);
	printf("\n\t Enter the value of D(Derating Factor in mw/c)                    : ");
	scanf("%f",&d);
	a=p1*1000;
	p2=a-((t2-t1)*d);//to find P2
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution:\n");
	printf("\n\t P2(Maximum power) is : %f mW",p2);
	end();
	}
	}
break;

case 'h':
	{
	float f,rip,c,rl,a;
	clrscr();
	printf("\n\t");
	textcolor(RED);
	cprintf(" To find Ripple Factor");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of F(Frequency in Hz)           : ");
	scanf("%f",&f);
	printf("\n\t Enter the value of C(Capacitance in nF)         : ");
	scanf("%f",&c);
	printf("\n\t Enter the value of Rl(Load Resistance in ohms)  : ");
	scanf("%f",&rl);
	a=c/pow(10,8);
	rip=(1/(4*sqrt(3)*f*a*rl));
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution is:\n");
	printf("\n\t");
	textcolor(WHITE);
	cprintf(" The value of Ripple factor is : %f",rip);
	end();
	}
	}
break;

case 'i':
	{
	float f,rip,c,rl,a;
	clrscr();
	printf("\n\t");
	textcolor(RED);
	cprintf(" To find Capacitance");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of F(Frequency in Hz)           : ");
	scanf("%f",&f);
	printf("\n\t Enter the value of Ripple Factor                : ");
	scanf("%f",&rip);
	printf("\n\t Enter the value of Rl(Load Resistance in ohms)  : ");
	scanf("%f",&rl);
	a=(1/(4*sqrt(3)*f*rip*rl));
	c=a*pow(10,8);
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution is:\n");
	printf("\n\t");
	textcolor(WHITE);
	cprintf(" The value of C(Capacitance) is : %f nF",c);
	end();
	}
	}

case 'j':
	{
	float E,ct,a,d;
	clrscr();
	printf("\n\t");
	textcolor(RED);
	cprintf(" To find Capacitance");
	printf("\n\n");
	textcolor(YELLOW);
	cprintf("         Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	date();
	gotoxy(10,8);
	ch=getch();
	if(ch=='0')
	Equations();
	else if(ch!='0')
	{
	printf("\n\n\t Enter the value of E(Epsalon)                   : ");
	scanf("%f",&E);
	printf("\n\t Enter the value of D(Dielectric Constant)         : ");
	scanf("%f",&d);
	printf("\n\t Enter the value of Area(Depletion Region)         : ");
	scanf("%f",&a);
	ct=(E*a)/d;
	clrscr();
	printf("\n\t");
	textcolor(RED+BLINK);
	cprintf(" Solution is:\n");
	printf("\n\t");
	textcolor(WHITE);
	cprintf(" The value of Ct(Transition Capacitance) is : %f MF",ct);
	end();
	}
	}
break;


default:
printf("\n\n\t");
textcolor(RED);
cprintf(" Invalid Choice");
invalid();
getch();
break;
}
}
}







int Features()
{
clrscr();
textcolor(RED);
cprintf("         Features:");
printf("\n\n\t");
textcolor(WHITE);
cprintf(" * Easy to use Interface");
printf("\n\t * Accurate results upto 6 decimals");
printf("\n\t * Results in their respective SI units");
printf("\n\t * Can solve more than 15 types of problems");
printf("\n\t * Over 60 formulas");
printf("\n\t * Explanation of each formula");
printf("\n\t * Over 30 basic definitions");
printf("\n\t * Sepatate option to view list of Formulas");
printf("\n\t * Inbuilt Date and Time Viewer");
printf("\n\t * Easier Navigation");
printf("\n\t * Reference Section");
printf("\n\t * Question paper pattern");
printf("\n\t * Syllabus Copy");
printf("\n\n\n\n\t");
textcolor(LIGHTMAGENTA);
end();
return 0;
}





int Formula()
{
char ch;
clrscr();
printf("\n\t");
textcolor(CYAN);
cprintf(" Formula List:");
printf("\n\n\t 1.Diode \n\t 2.Half Wave Rectifier(HWR) \n\t 3.Full Wave Rectifier(FWR) \n\t 4.Bridge Rectifier \n\t 5.Transistor");
printf("\n\n\t");
textcolor(YELLOW);
cprintf(" Press 0 to go back");
printf("\n\t");
cprintf(" Press Q to Quit");
printf("\n\n\t");
cprintf(" Enter your Choice : ");
textcolor(WHITE);
cprintf("");
date();
ch=getche();
switch(ch)
{
char ch;

case '0':
main1();
break;

case 'Q':
exit(ch-'Q');
break;

case '1':
	{
	clrscr();
	printf("\n");
	textcolor(GREEN);
	cprintf("         Diode :");
	printf("\n\n\t a.Vf2(Forward Voltage Drop) = Vf1+(T2-T1)V");
	printf("\n\t b.Rd(Dynamic Resistance) = (26mv/If)(T+273/298)");
	printf("\n\t c.P(Power) = V*I");
	printf("\n\t d.Trr(Reverse Recory Time) = Tf(min)/10");
	printf("\n\t e.If(Diode current Equation) = Is(e^(V/N*Vt)-1)");
	printf("\n\t f.E(Diode Voltage Equation) = IfRf+Vf");
	printf("\n\t g.P2(Maximum power)=P1-(T2-T1 * Derating Factor)");
	printf("\n\t h.Ct(Tansition Capacitance) = EA/d");
	printf("\n\n\n\t");
	textcolor(YELLOW);
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press 1 to return to Main menu");
	printf("\n\t");
	cprintf(" Press Q to Quit");
	printf("\n\t");
	cprintf(" Press Enter your Choice : ");
	textcolor(WHITE);
	cprintf("");
	end1();
	ch=getche();
	switch(ch)
	{
	case 'a':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" a.Vf2 = Vf1+(T2-T1)V");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t Vf2 = Forward Voltage drop across V2 \n\t Vf1 = Forward Voltage drop across V1 \n\t T2  = Final Temperature \n\t T1  = Initial Temperature \n\t V   = Voltage Specified");
	ask1();
	break;

	case 'b':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" b.Rd = (26mV / If) (T+273 / 298)");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t Rd = Dynamic Resistance \n\t If = Forward Current \n\t T  = Given Temperature");
	ask1();
	break;

	case 'c':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" c.P = V * I");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t P = Powwr dissipation across the diode \n\t V = Voltage across the diode \n\t I = Current across the diode");
	ask1();
	break;

	case 'd':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" d.Trr = Tf/10");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t Trr = Reverse Recory Time \n\t Tf  = Given Forward time in minutes");
	ask1();
	break;

	case 'e':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" e.If = Is(e ^ (V/N*Vt3) - 1");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t If = Forward current \n\t Is = Reverse Saturation current \n\t e  = Exponential value \n\t V  = Given Voltage \n\t N  = Value of Eta \n\t Vt = Votage at given temperature");
	ask1();
	break;

	case 'f':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" f.E = IfRf + Vf");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t E = Source Voltage \n\t If = Forward Current \n\t Rf = Forward Resistance \n\t Vf = Forward Voltage");
	ask1();
	break;

	case 'g':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" g.P2 = P1 - (T2-T1 * Derating Factor)");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t P2 = Secondary Power \n\t P1 = Primary Power \n\t T2 = Final Temperature \n\t T1 = Initial Temperature");
	ask1();
	break;

	case 'h':
	clrscr();
	printf("\n\t");
	textcolor(LIGHTRED);
	cprintf(" h.Ct = EA / d");
	textcolor(WHITE);
	cprintf("");
	printf("\n\n\t Where");
	printf("\n\t Ct = Transition Capacitance \n\t E  = Epsilon \n\t A  = Area of the plates \n\t d  = Distance between the plates");
	ask1();
	break;

	case '0':
	Formula();
	break;

	case '1':
	main1();
	break;

	case 'Q':
	exit(ch-'Q');
	break;

	default:
	invalid();
	break;
	}
	}
break;

case '2':
	{
	clrscr();
	printf("\n");
	textcolor(GREEN);
	cprintf("         Half Wave Rectifier(HWR) : ");
	printf("\n\n\t a.V2(Mean Voltage) = (n2/n1)*V1");
	printf("\n\t b.F(Frequency) = W/(2*PI)");
	printf("\n\t c.Im(Mean Current) = Vm/(Rf+Rl)");
	printf("\n\t d.Irms(Root mean square value) = Im/2");
	printf("\n\t e.Idc(DC load current) = Im/PI");
	printf("\n\t f.Vdc(DC load voltage) = (Vm/PI)/(1+(Rf/Rl)");
	printf("\n\t g.PIV(Peak inverse voltage) = Vm");
	printf("\n\t h.Pac(AC power) = (Irms*Irms)*(Rf+Rl)");
	printf("\n\t i.Pdc(DC power) = (Idc*Idc)*Rl");
	printf("\n\t j.N(Effeciency) = (Pdc/Pac)*100");
	printf("\n\t k.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
	printf("\n\n\n\t");
	textcolor(YELLOW);
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press 1 to return to Main menu");
	printf("\n\t");
	cprintf(" Press Q to Quit");
	printf("\n\t");
	cprintf(" Press E to Enter your Choice : ");
	textcolor(WHITE);
	cprintf("");
	end1();
	ch=getche();
	switch(ch)
{

	case '0':
	Formula();
	break;

	case '1':
	main1();
	break;

	case 'Q':
	exit(ch-'Q');
	break;


case 'a':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" a.V2 = (n2/n1) * V1");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t V2 = Secondary Voltage \n\t N2 = no of turns in Secondary coil \n\t N1 = No of turns in Primary coil \n\t V1 = Primary Voltage");
ask1();
break;

case 'b':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" b.F = W / (2*PI)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t F  = Frequency \n\t W  = Omega (2PIf) \n\t PI = 22/7");
ask1();
break;

case 'c':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" c.Im = Vm / (Rf+Rl) ");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Im = Mean Currnet \n\t Vm = Mean Voltage \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
ask1();
break;

case 'd':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" d.Irms = Im / 2");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Im   = Mean Current");
ask1();
break;

case 'e':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" e.Idc = Im / PI");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Idc = DC Current \n\t Im  = Mean Current \n\t PI  = 22/7");
ask1();
break;

case 'f':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" f.Vdc = (Vm / PI) / (1 + (Rf/Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Vdc = DC Voltage \n\t Vm  = Mean Voltage \n\t PI  = 22/7 \n\t Rf  = Forward Resistance \n\t Rl  = Load Resistance");
ask1();
break;

case 'g':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" g.PIV = Vm");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t PIV = Peak Inverse Voltage \n\t Vm  = Mean Voltage");
ask1();
break;


case 'h':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" h.Pac = (Irms * Irms) * (Rf+Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pac  = AC Power \n\t Irms = Root mean square value \n\t Rf   = Forward Resistance \n\t Rl   = Load Resistance");
ask1();
break;

case 'i':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" i.Pdc = (Idc * Idc) * Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pdc  = DC Power \n\t Irms = Root mean square value \n\t Rl   = Load Resistance");
ask1();
break;


case 'j':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" j.N   = (Pdc/Pac) * 100");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t N   = Eta \n\t Pdc = DC Power \n\t Pac = AC Power");
ask1();
break;

case 'k':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" k.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Idc  = DC Current");
ask1();
break;

default:
invalid();
break;
}
}
break;

case '3':
	{
	clrscr();
	printf("\n");
	textcolor(GREEN);
	cprintf("         Full Wave Rectifier(FWR) : ");
	printf("\n\n\t a.V2(Mean Voltage) = (n2/n1)*V1");
	printf("\n\t b.F(Frequency) = W/(2*PI)");
	printf("\n\t c.Im(Mean Current) = Vm/(Rf+Rl)");
	printf("\n\t d.Irms(Root mean square value) = Im/sqrt(2)");
	printf("\n\t e.Idc(DC load current) = 2Im/PI");
	printf("\n\t f.Vdc(DC load voltage) = (2Vm/PI)/(1+(Rf/Rl)");
	printf("\n\t g.Vrms = (Vm/root 2) / 1 + Rf/Rl");
	printf("\n\t h.PIV(Peak inverse voltage) = 2Vm");
	printf("\n\t i.Pac(AC power) = (Irms*Irms)*(Rf+Rl)");
	printf("\n\t j.Pdc(DC power) = (Idc*Idc)*Rl");
	printf("\n\t k.N(Effeciency) = (Pdc/Pac)*100");
	printf("\n\t l.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
	printf("\n\n\n\t");
	textcolor(YELLOW);
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press 1 to return to Main menu");
	printf("\n\t");
	cprintf(" Press Q to Quit");
	printf("\n\t");
	cprintf(" Press E to Enter your Choice : ");
	textcolor(WHITE);
	cprintf("");
	end1();
	ch=getche();
	switch(ch)
	{
	case '0':
	Formula();
	break;

	case '1':
	main1();
	break;

	case 'Q':
	exit(ch-'Q');
	break;

case 'a':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" a.V2 = (n2/n1) * V1");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t V2 = Secondary Voltage \n\t N2 = no of turns in Secondary coil \n\t N1 = No of turns in Primary coil \n\t V1 = Primary Voltage");
ask1();
break;

case 'b':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" b.F = W / (2*PI)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t F  = Frequency \n\t W  = Omega (2PIf) \n\t PI = 22/7");
ask1();
break;

case 'c':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" c.Im = Vm / (Rf+Rl) ");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Im = Mean Currnet \n\t Vm = Mean Voltage \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
ask1();
break;

case 'd':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" d.Irms = Im / sqrt(2)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Im   = Mean Current");
ask1();
break;

case 'e':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" e.Idc = 2Im / PI");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Idc = DC Current \n\t Im  = Mean Current \n\t PI  = 22/7");
ask1();
break;

case 'f':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" f.Vdc = (2Vm / PI) / (1 + (Rf/Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Vdc = DC Voltage \n\t Vm  = Mean Voltage \n\t PI  = 22/7 \n\t Rf  = Forward Resistance \n\t Rl  = Load Resistance");
ask1();
break;

case 'g':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" g.Vrms = (Vm/sqrt(2)) / 1 + Rf/Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Vrms = Root mean square value \n\t Vm   = Mean Voltage \n\t Rf   = Forward Resistance \n\t Rl   = Load resistance");
ask1();
break;

case 'h':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" h.PIV = 2Vm");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t PIV = Peak Inverse Voltage \n\t Vm  = Mean Voltage");
ask1();
break;


case 'i':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" i.Pac = (Irms * Irms) * (Rf+Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pac  = AC Power \n\t Irms = Root mean square value \n\t Rf   = Forward Resistance \n\t Rl   = Load Resistance");
ask1();
break;

case 'j':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" j.Pdc = (Idc * Idc) * Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pdc  = DC Power \n\t Irms = Root mean square value \n\t Rl   = Load Resistance");
ask1();
break;


case 'k':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" k.N = (Pdc/Pac) * 100");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t N   = Eta\n\t Pdc = DC Power \n\t Pac = AC Power");
ask1();
break;

case 'l':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" l.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Idc  = DC Current");
ask1();
break;

default:
invalid();
break;
	}
break;

case '4':
	{
	clrscr();
	printf("\n");
	textcolor(GREEN);
	cprintf("         Bridge Rectifier : ");
	printf("\n\n\t a.V2(Mean Voltage) = (n2/n1)*V1");
	printf("\n\t b.F(Frequency) = W/(2*PI)");
	printf("\n\t c.Im(Mean Current) = Vm/(2Rf+Rl)");
	printf("\n\t d.Irms(Root mean square value) = Im/sqrt(2)");
	printf("\n\t e.Idc(DC load current) = 2Im/PI");
	printf("\n\t f.Vdc(DC load voltage) = (2Vm/PI)/(1+(Rf/Rl)");
	printf("\n\t g.Vrms = (Vm/sqrt(2) / 1 + Rf/Rl");
	printf("\n\t h.PIV(Peak inverse voltage) = 2Vm");
	printf("\n\t i.Pac(AC power) = (Irms*Irms)*(Rf+Rl)");
	printf("\n\t j.Pdc(DC power) = (Idc*Idc)*Rl");
	printf("\n\t k.N(Effeciency) = (Pdc/Pac)*100");
	printf("\n\t l.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
	printf("\n\t m.Ripple Factor = 1/4root(3)*F*C*Rl");
	printf("\n\n\n\t");
	textcolor(YELLOW);
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press 1 to return to Main menu");
	printf("\n\t");
	cprintf(" Press Q to Quit");
	printf("\n\t");
	cprintf(" Press E to Enter your Choice : ");
	textcolor(WHITE);
	cprintf("");
	end1();
	ch=getche();
	switch(ch)
{
	case '0':
	Formula();
	break;

	case '1':
	main1();
	break;

	case 'Q':
	exit(ch-'Q');
	break;

case 'a':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" a.V2 = (n2/n1) * V1");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t V2 = Secondary Voltage \n\t N2 = no of turns in Secondary coil \n\t N1 = No of turns in Primary coil \n\t V1 = Primary Voltage");
ask1();
break;

case 'b':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" b.F = W / (2*PI)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t F  = Frequency \n\t W  = Omega (2PIf) \n\t PI = 22/7");
ask1();
break;

case 'c':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" c.Im = Vm / (2Rf+Rl) ");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Im = Mean Currnet \n\t Vm = Mean Voltage \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
ask1();
break;

case 'd':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" d.Irms = Im / sqrt(2)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Im   = Mean Current");
ask1();
break;

case 'e':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" e.Idc = 2Im / PI");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Idc = DC Current \n\t Im  = Mean Current \n\t PI  = 22/7");
ask1();
break;

case 'f':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" f.Vdc = (2Vm / PI) / (1 + (Rf/Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Vdc = DC Voltage \n\t Vm  = Mean Voltage \n\t PI  = 22/7 \n\t Rf  = Forward Resistance \n\t Rl  = Load Resistance");
ask1();
break;

case 'g':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" g.Vrms = (Vm/sqrt(2)) / 1 + Rf/Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Vrms = Root mean square value \n\t Vm   = Mean Voltage \n\t Rf   = Forward Resistance \n\t Rl   = Load resistance");
ask1();
break;

case 'h':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" h.PIV = 2Vm");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t PIV = Peak Inverse Voltage \n\t Vm  = Mean Voltage");
ask1();
break;


case 'i':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" i.Pac = (Irms * Irms) * (Rf+Rl)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pac  = AC Power \n\t Irms = Root mean square value \n\t Rf   = Forward Resistance \n\t Rl   = Load Resistance");
ask1();
break;

case 'j':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" j.Pdc = (Idc * Idc) * Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Pdc  = DC Power \n\t Irms = Root mean square value \n\t Rl   = Load Resistance");
ask1();
break;


case 'k':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" k.N = (Pdc/Pac) * 100");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t N   = Eta\n\t Pdc = DC Power \n\t Pac = AC Power");
ask1();
break;

case 'l':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" l.Ripple Factor = sqrt(((Irms/Idc)square)-1)");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t Irms = Root mean square value \n\t Idc  = DC Current");
ask1();
break;

case 'm':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" m.Ripple Factor = 1 / 4root(3) * F * C * Rl");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t F  = Frequency \n\t C  = Capacitance \n\t Rl = Load resistance");
ask1();
break;

default:
invalid();
break;
}
	}
break;

case '5':
	{
	clrscr();
	printf("\n");
	textcolor(GREEN);
	cprintf("         Transistor : ");
	printf("\n\n\t a.Ie(Emitter current) = Ib+Ic ");
	printf("\n\t b.A(alpha) = B/1+B");
	printf("\n\t c.B(Beta) = A/1-A");
	printf("\n\t d.Ib(Base current) = (Vbb-Vbe)/Rb");
	printf("\n\t e.Ic(Collector current) = (Vcc-Vce)/Rc");
	printf("\n\t f.B = Ic/Ib");
	printf("\n\t g.A = Ic/Ie");
	printf("\n\n\n\t");
	textcolor(YELLOW);
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press 1 to return to Main menu");
	printf("\n\t");
	cprintf(" Press Q to Quit");
	printf("\n\t");
	cprintf(" Press E to Enter your Choice : ");
	textcolor(WHITE);
	cprintf("");
	end1();
	ch=getche();
	switch(ch)
	{
	case '0':
	Formula();
	break;

	case '1':
	main1();
	break;

	case 'Q':
	exit(ch-'Q');
	break;

case 'a':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" a.Ie = Ib+Ic");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t Ie = Emitter Current \n\t Ib = Base Current \n\t Ic =  Collector Current");
ask1();
break;

case 'b':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" b.A = B/1+B");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t A = Alpha \n\t B = Beta");
ask1();
break;

case 'c':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" c.B = A/1-A");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t B = Beta \n\t A = Alpha");
ask1();
break;

case 'd':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" d.Ib = (Vbb - Vbe) / Rb");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t Ib  = Base Current \n\t Vbb = Source Voltage \n\t Vbe = Voltage across emitter base junction \n\t Rb  = Base Resistance");
ask1();
break;

case 'e':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" e.Ic = (Vcc - Vce) / Rc");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t Ic  = Collector Current \n\t Vcc = Source Voltage \n\t Vce = Voltage across colltector - emitter junction \n\t Rc  = Collector Resistance");
ask1();
break;

case 'f':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" f.B = Ic/Ib");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t B  = Beta \n\t Ic = Collector Current \n\t Ie = Emitter Current");
ask1();
break;

case 'g':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" g.A = Ic/Ie");
textcolor(WHITE);
cprintf("");
printf("\n\n\t Where");
printf("\n\t A  = Alpha \n\t Ic = Collector Current \n\t Ie = Emitter currente");
ask1();
break;
}


default:
invalid();
getch();
break;
}
}
}
return 0;
}





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
cprintf("");
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
invalid();
getch();
end1();
break;
}
return 0;
}






int pattern()
{
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Question Paper Pattern");
printf("\n\n\t");
textcolor(CYAN);
cprintf(" Subject Code : 10ELN15 / 10ELN25");
printf("\n\t");
textcolor(WHITE);
printf("\n\t Part A and Part B ");
printf("\n\t 5 Questions in each part carring 20 Marks");
printf("\n\t eg : 1.a) 1 mark question *(4) - 4 marks \n\t        b) Circuitand  Explanation - 8 Marks \n\t        c) Problem - 8 Marks");
printf("\n\t Rules:");
printf("\n\t * Minimum of 2 questions are to be answered in each part");
printf("\n\t * Maximum marks is for 100");
printf("\n\t * 25 Marks for Internals Assessment");
printf("\n\t * So a subject carries 125 marks in total");
end();
return 0;
}






int HWR()
{
char ch;
float n1,n2,rf,rl,v1,v2,w,f,vm,piv;
float im,irms,idc,vdc,pac,pdc,n,rip,a,b;
float p,q,r,s,t;
clrscr();
printf("\n\n");
textcolor(RED);
cprintf("         Problem on Half Wave Rectifier(HWR)");
printf("\n\n");
textcolor(YELLOW);
cprintf("         Press 0 to go back");
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
printf("\n\n\t Enter the Following Data:");
printf("\n\n\t Enter the value of N1                             : ");
scanf("%f",&n1);
printf("\t Enter the value of N2                             : ");
scanf("%f",&n2);
printf("\t Enter the value of Rf(Forward Resistance in ohm)  : ");
scanf("%f",&rf);
printf("\t Enter the value of Rl(Load Resistance in ohm)     : ");
scanf("%f",&rl);
printf("\t Enter the value of Vm(Mean voltage of V1 in volts): ");
scanf("%f",&v1);
printf("\t Enter the value of w(omega in rad/s)              : ");
scanf("%f",&w);
v2=(n2/n1)*v1;//To find the value of V2
f=w/(2*PI);//To find Frequency
vm=v2;
im=vm/(rf+rl);
//im=(vm/2)/sqrt(1+(rf/rl));//To find Im
irms=im/2;//To find Irms
idc=im/PI;//To find DC current
vdc=(vm/PI)/(1+(rf/rl));//To find DC Voltage
piv=vm;
pac=(irms*irms)*(rf+rl);//To find Power in ac
pdc=(idc*idc)*rl;//To find Power in dc
n=(pdc/pac)*100;//To find Efficiency
a=(irms/idc);//To find Ripple Factor
b=a*a;
rip=sqrt(b-1);
p=im*1000;
q=irms*1000;
r=idc*1000;
s=pac*1000;
t=pdc*1000;
clrscr();
printf("\n\t");
textcolor(RED+BLINK);
cprintf(" Solution: \n");
printf("\n\t 1. Vm(V2 or mean voltage)       = %f V",vm);
printf("\n\t 2. Im(Mean current)             = %f mA",p);
printf("\n\t 3. Irms(Root mean square value) = %f mA",q);
printf("\n\t 4. Idc(DC load Current)         = %f mA",r);
printf("\n\t 5. Vdc(DC load Voltage)         = %f V",vdc);
printf("\n\t 6. PIV(Peak inverse voltage)    = %f V",piv);
printf("\n\t 7. Pac(AC Power)                = %f mW",s);
printf("\n\t 8. Pdc(DC Power)                = %f mW",t);
printf("\n\t 9. N(Efficiency)                = %f %",n);
printf("\n\t 10.Ripple Factor                = %f",rip);
printf("\n\t 11.Frequency                    = %f Hz",f);
end();
}
return 0;
}

int FWR()
{
char ch;
float n1,n2,rf,rl,v1,v2,w,f,vm,piv;
float im,irms,idc,vdc,pac,pdc,n,rip,a,b;
float p,q,r,s,t;
clrscr();
	printf("\n\n");
	textcolor(RED);
	cprintf("         Problem on Full Wave Rectifier(FWR)");
	textcolor(YELLOW);
	printf("\n\n\t");
	cprintf(" Press 0 to go back");
	printf("\n\t");
	cprintf(" Press any key to Enter");
	textcolor(WHITE);
	printf("");
	ch=getch();
	if(ch=='0')
	main1();
	else if(ch!='0')
	{
printf("\n\n\t Enter the Following Data:");
printf("\n\n\t Enter the value of N1                             : ");
scanf("%f",&n1);
printf("\t Enter the value of N2                             : ");
scanf("%f",&n2);
printf("\t Enter the value of Rf(Forward Resistance in ohm)  : ");
scanf("%f",&rf);
printf("\t Enter the value of Rl(Load Resistance in ohm)     : ");
scanf("%f",&rl);
printf("\t Enter the value of Vm(Mean voltage of V1 in volts): ");
scanf("%f",&v1);
printf("\t Enter the value of w(omega in rad/s)              : ");
scanf("%f",&w);
v2=(n2/n1)*v1;//To find the value of V2
f=w/(2*PI);//To find Frequency
vm=v2;
im=vm/(rf+rl);
//im=(vm/2)/sqrt(1+(rf/rl));//To find Im
irms=(im/sqrt(2));//To find Irms
idc=2*im/PI;//To find DC current
vdc=(2*vm/PI)/(1+(rf/rl));//To find DC Voltage
piv=2*vm;
pac=(irms*irms)*(rf+rl);//To find Power in ac
pdc=(idc*idc)*rl;//To find Power in dc
n=(pdc/pac)*100;//To find Efficiency
//To find Ripple Factor
rip=sqrt(((irms*irms)/(idc*idc))-1);
p=im*1000;
q=irms*1000;
r=idc*1000;
s=pac*1000;
t=pdc*1000;
clrscr();
printf("\n\t");
textcolor(RED+BLINK);
cprintf(" Solution:\n");
printf("\n\t 1. Vm(V2 or mean voltage)       = %f V",vm);
printf("\n\t 2. Im(Mean current)             = %f mA",p);
printf("\n\t 3. Irms(Root mean square value) = %f mA",q);
printf("\n\t 4. Idc(DC load Current)         = %f mA",r);
printf("\n\t 5. Vdc(DC load Voltage)         = %f V",vdc);
printf("\n\t 6. PIV(Peak inverse voltage)    = %f V",piv);
printf("\n\t 7. Pac(AC Power)                = %f mW",s);
printf("\n\t 8. Pdc(DC Power)                = %f mW",t);
printf("\n\t 9. N(Efficiency)                = %f %",n);
printf("\n\t 10.Ripple Factor                = %f",rip);
printf("\n\t 11.Frequency                    = %f Hz",f);
end();
}
return 0;
}

int Bridge()
{
char ch;
float n1,n2,rf,rl,v1,v2,w,f,vm,piv;
float im,irms,idc,vdc,pac,pdc,n,rip,a,b;
float p,q,r,s,t;
clrscr();
printf("\n\n");
textcolor(RED);
cprintf("         Problem on Bridge Rectifier");
textcolor(YELLOW);
printf("\n\n\t");
cprintf(" Press 0 to go back");
printf("\n\t");
cprintf(" Press any key to Enter");
textcolor(WHITE);
printf("");
ch=getch();
if(ch=='0')
main1();
else if(ch!='0')
{
printf("\n\n\t Enter the Following Data:\n");
printf("\n\t Enter the value of N1                             : ");
scanf("%f",&n1);
printf("\t Enter the value of N2                             : ");
scanf("%f",&n2);
printf("\t Enter the value of Rf(Forward Resistance in ohm)  : ");
scanf("%f",&rf);
printf("\t Enter the value of Rl(Load Resistance in ohm)     : ");
scanf("%f",&rl);
printf("\t Enter the value of Vm(Mean voltage of V1 in volts): ");
scanf("%f",&v1);
printf("\t Enter the value of w(omega in rad/s)              : ");
scanf("%f",&w);
v2=(n2/n1)*v1;//To find the value of V2
f=w/(2*PI);//To find Frequency
vm=v2;
im=vm/((2*rf)+rl);
//im=(vm/2)/sqrt(1+(rf/rl));//To find Im
irms=(im/sqrt(2))/(1+(rf/rl));//To find Irms
idc=2*im/PI;//To find DC current
vdc=(2*vm/PI)/(1+(rf/rl));//To find DC Voltage
piv=2*vm;
pac=(irms*irms)*(rf+rl);//To find Power in ac
pdc=(idc*idc)*rl;//To find Power in dc
n=(pdc/pac)*100;//To find Efficiency
//To find Ripple Factor
rip=sqrt(((irms*irms)/(idc*idc))-1);
p=im*1000;
q=irms*1000;
r=idc*1000;
s=pac*1000;
t=pdc*1000;
clrscr();
printf("\n\t");
textcolor(RED+BLINK);
cprintf(" Solution:\n");
printf("\n\t 1. Vm(V2 or mean voltage)       = %f V",vm);
printf("\n\t 2. Im(Mean current)             = %f mA",p);
printf("\n\t 3. Irms(Root mean square value) = %f mA",q);
printf("\n\t 4. Idc(DC load Current)         = %f mA",r);
printf("\n\t 5. Vdc(DC load Voltage)         = %f V",vdc);
printf("\n\t 6. PIV(Peak inverse voltage)    = %f V",piv);
printf("\n\t 7. Pac(AC Power)                = %f mW",s);
printf("\n\t 8. Pdc(DC Power)                = %f mW",t);
printf("\n\t 9. N(Efficiency)                = %f %",n);
printf("\n\t 10.Ripple Factor                = %f",rip);
printf("\n\t 11.Frequency                    = %f Hz",f);
end();
}
return 0;
}






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






int syllabus()
{
clrscr();
printf("\n\t");
textcolor(RED);
cprintf(" Syallabus");
printf("\n\n\t");
textcolor(CYAN);
cprintf(" Part A :");
printf("\n\t");
textcolor(WHITE);
cprintf(" 1.Diode and its Applications");
printf("\n\t 2.Transistors");
printf("\n\t 3.Transistor Biasing");
printf("\n\t 4.SCR and its Applications");
printf("\n\n\t");
textcolor(CYAN);
cprintf(" Part B :");
printf("\n\t");
textcolor(WHITE);
cprintf(" 5.Amplifiers and Oscillators");
printf("\n\t 6.Communication and Number Systems");
printf("\n\t 7.Operational Amplifiers");
printf("\n\t 8.Digital Logic");
end();
return 0;
}







int Transistor()
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
return 0;
}





















