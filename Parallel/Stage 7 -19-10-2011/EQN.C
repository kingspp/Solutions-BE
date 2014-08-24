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

