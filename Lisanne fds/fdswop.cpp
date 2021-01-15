#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int total=0;
typedef struct student
{
char name[30];
int PRN;
float percent;
}student;
student s1[10];
void create()
{
int num,i;
printf("How many entries do you want to create: ");
scanf("%d",&num);
for(i=0; i<num; i++)
{
printf("\nRecord %d\n", i+1);
printf("\nEnter the name: ");
fflush(stdin);
gets(s1[i].name);

printf("\nEnter PRN: ");
scanf("%d",&s1[i].PRN);
printf("\nEnter the percentage: ");
scanf("%f",&s1[i].percent);
total++;
}
return;
}
void insert()
{
int i,n;
printf ("How many entries do you want to insert: ");
scanf ("%d",&n);
for (i=total; i<total+n; i++)
{
printf ("\nRecord %d\n",total+1);
printf ("Name: ");
fflush(stdin);
gets (s1[i].name);
printf ("PRN: ");
scanf ("%d",&s1[i].PRN);
printf ("Percentage: ");
scanf ("%f",&s1[i].percent);
}
total+=n;
}

void show()
{
int a=0;
while (a<total)
{
printf("\nRecord %d\n",a+1);
printf("Name: ");
puts(s1[a].name);
printf("\nPRN: %d\n", s1[a].PRN);
printf("Percentage: %f\n", s1[a].percent);
a++;
}

}
void modify()
{
int r,ch;

printf("Enter the record number which you want to modify:");
scanf("%d", &r);
printf("\n1. Modify PRN\n2. Modify Name\n3.Modify Percentage");
printf("\nEnter your choice: ");
scanf("%d", &ch);
switch (ch)
{
case 1:

printf("Enter PRN:");
scanf("%d", &s1[r-1].PRN);

break;
case 2:
printf("Enter Name:");
getch();
gets(s1[r-1].name);
break;
case 3:
printf("Enter Percentage : ");
scanf("%f", &s1[r-1].percent);
break;
default:
printf("Invalid Choice");
break;
}
}
void deleteRecord()
{
int n;
printf("Enter the record number to be deleted");
scanf("%d",&n);
for(int i=n-1; i<total-1; i++)
{
s1[i] = s1[i + 1];
}

total = total - 1;

return;
}

int main()
{
int choice, exitornot;

do
{
printf("You can do following things:\n1. Create a record.\n2. Insert a record.\n3. Modify a record.\n4. Display all records.");
printf("\n5. Delete a record.\n6. Exit.\n");
exitornot = 0;
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
insert();
break;
case 3:
modify();
break;

case 4:
show();
break;
case 5:
show();
deleteRecord();
break;
case 6:
exitornot=1;
default:
printf("\nEnter valid choice\n");
}
}while(exitornot!=1);
return 0;
}                            `
