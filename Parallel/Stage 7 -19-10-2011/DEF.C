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

