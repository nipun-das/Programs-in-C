//An array of structures that stores info. of 5 students and prints students whose age is greater than 20

#include <stdio.h>
#include <string.h>
struct studentdata
{
   char name[20];
   int roll_no;
   int age;
};
void main()
{
   int i;
   struct studentdata st[5];
   printf("Enter the records of 5 students:\n");

   for (i = 0; i < 5; i++)
   {
      printf("Enter the name of student %d:\n", i + 1);
      scanf("%s", st[i].name);

      printf("Enter the Roll No.of student %d:\n", i + 1);
      scanf("%d", &st[i].roll_no);

      printf("Enter the ageof student %d:\n", i + 1);
      scanf("%int", &st[i].age);
   }
   printf("Student Data whosse age >20 is:\n");
   for (i = 0; i < 5; i++)
   {
      if (st[i].age > 20)
      {
         printf("Name : %s\n", st[i].name);
         printf("Roll no. : %d\n", st[i].roll_no);
         printf("Age : %d\n", st[i].age);
      }
   }
}