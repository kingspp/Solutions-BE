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
