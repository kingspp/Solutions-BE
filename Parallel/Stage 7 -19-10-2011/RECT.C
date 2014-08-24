void HWR()
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
}

void FWR()
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
}

void Bridge()
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
}