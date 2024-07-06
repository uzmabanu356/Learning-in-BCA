#include<stdio.h>
#include<conio.h>
void main(){
int salary, bonus, netsalary;
clrscr();
printf("Enter Your Salary\t");
scanf("%d",&salary);
if(salary>=10000){
bonus=salary/100*40;
printf("Your Bonus is:-\t%d",bonus);
netsalary=bonus+salary;
printf("\nYour Net salary is:-\t%d",netsalary);
}
else{
bonus=salary/100*25;
printf("Your Bonus is:-\t%d",bonus);
netsalary=bonus+salary;
printf("\nYour Net salary is:-\t%d",netsalary);
}
getch();
}