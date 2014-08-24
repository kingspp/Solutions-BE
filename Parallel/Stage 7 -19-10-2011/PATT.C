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