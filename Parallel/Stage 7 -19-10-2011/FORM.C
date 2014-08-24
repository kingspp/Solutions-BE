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
printf("\n\t Vdc  = DC Voltage \n\t Vm  = Mean Voltage \n\t PI  = 22/7 \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Pac = AC Power \n\t Irms = Root mean square value \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Pdc = DC Power \n\t Irms = Root mean square value \n\t Rl = Load Resistance");
ask1();
break;


case 'j':
clrscr();
printf("\n\t");
textcolor(LIGHTRED);
cprintf(" j.N = (Pdc/Pac) * 100");
textcolor(WHITE);
cprintf(" ");
printf("\n\n\t Where");
printf("\n\t N = Eta \n\t Pdc = DC Power \n\t Pac = AC Power");
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
printf("\n\t Irms = Root mean square value \n\t Idc = DC Current");
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
printf("\n\t F  = Frequency \n\t W = omega(2PIf) \n\t PI = 22/7");
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
printf("\n\t Irms = Root mean square value \n\t Im = Mean Current");
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
printf("\n\t Idc = DC Current \n\t Im = Mean Current \n\t PI = 22/7");
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
printf("\n\t Vdc = DC Voltage \n\t Vm = Mean Voltage \n\t PI = 22/7 \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Vrms = Root mean square value \n\t Vm = Mean Voltage \n\t Rf = Forward Resistance \n\t Rl = Load resistance");
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
printf("\n\t Pac = AC Power \n\t Irms = Root mean square value \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Pdc = DC Power \n\t Irms = Root mean square value \n\t Rl = Load Resistance");
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
printf("\n\t N = Eta\n\t Pdc = DC Power \n\t Pac = AC Power");
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
printf("\n\t Irms = Root mean square value \n\t Idc = DC Current");
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
printf("\n\t F  = Frequency \n\t W = omega(2PIf) \n\t PI = 22/7");
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
printf("\n\t Irms = Root mean square value \n\t Im = Mean Current");
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
printf("\n\t Idc = DC Current \n\t Im = Mean Current \n\t PI = 22/7");
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
printf("\n\t Vdc = DC Voltage \n\t Vm = Mean Voltage \n\t PI = 22/7 \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Vrms = Root mean square value \n\t Vm = Mean Voltage \n\t Rf = Forward Resistance \n\t Rl = Load resistance");
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
printf("\n\t Pac = AC Power \n\t Irms = Root mean square value \n\t Rf = Forward Resistance \n\t Rl = Load Resistance");
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
printf("\n\t Pdc = DC Power \n\t Irms = Root mean square value \n\t Rl = Load Resistance");
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
printf("\n\t N = Eta\n\t Pdc = DC Power \n\t Pac = AC Power");
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
printf("\n\t Irms = Root mean square value \n\t Idc = DC Current");
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
printf("\n\t F = Frequency \n\t C = Capacitance \n\t Rl = Load resistance");
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
printf("\n\t Ib = Base Current \n\t Vbb = Source Voltage \n\t Vbe = Voltage across emitter base junction \n\t Rb = Base Resistance");
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
printf("\n\t Ic = Collector Current \n\t Vcc = Source Voltage \n\t Vce  = Voltage across colltector - emitter junction \n\t Rc  = Collector Resistance");
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






