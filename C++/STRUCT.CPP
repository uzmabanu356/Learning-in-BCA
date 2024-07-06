
#include<stdio.h>
#include<conio.h>
struct studentMarksheet
{
 char name[50];
 int  rollNumber;
 float marks[5];
 float totalMarks;
 float percentage;
 };
  int main()
  {
   struct studentMarksheet student;
   clrscr();
   int i;
   printf("Enter student name :");
   scanf("%s",student.name);
   printf("Enter roll Number :");
   scanf("%d",student.rollNumber);
   printf("Enter marks 5 subject :\n");
   student.totalMarks=0.0;
    for (i=0;i<=4;i++)
    {
     printf("subject %d : ", i+1);
     scanf("%f",&student.marks[i]);

     student.totalMarks+= student.marks[i];
     }
     //Claculate perecentage
     student.percentage=(student.totalMarks/(5*100));
     //Display Marksheet
     printf("\n---------MARKSHEET---------\n");
     printf("Name %s\n",student.name);
     printf("RollNumber %d\n",student.rollNumber);
     printf("TotalMarks : %f\n",student.totalMarks);
     printf("Perecentage :%f\n",student.percentage);

     //Determine the grade based on perecetage
      if(student.percentage>=90)
      {
	printf("Grade :A\n");
	}
     else if(student.percentage>=80)
      {
	printf("Grade :B\n");
	}
	else if(student.percentage>=70)
      {
	printf("Grade :C\n");
	}
	  else if(student.percentage>=60)
      {
	printf("Grade :D\n");
	}
      else
      {
	printf("Fail \n");
	}
	return 0;
	getch();
	}



