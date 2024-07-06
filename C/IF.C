#include<stdio.h>
#include<conio.h>
void main(){
int salary,netsalary,bonus;
clrscr();
printf("Enter your salary=");
scanf("%d",&salary);
if(salary>=10000){
bonus=salary/100*40;
printf("Bonus%d\n",bonus);
netsalary=salary+bonus;
printf("Netsalary%d\n",netsalary);
}
else{
bonus=salary*100/25;
printf("Bonus%d\n",bonus);
netsalary=salary+bonus;
printf("Netsalary%d\n",netsalary);
}
getch();
}
