#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int total=0;
struct student
{
char name[30];
int PRN;
float percent;
};

struct student st[10];

void create(struct student *pt)
{

int num,i;
printf("How many recordss do you want to create: ");
scanf("%d",&num);

for(i=0;i<num;i++)
{

printf("\nEnter the name: ");

fflush(stdin);
gets((pt+i)->name);
printf("\nEnter PRN: ");
scanf("%d",&(pt+i)->PRN);
printf("\nEnter the percentage:\t");
scanf("%f",&(pt+i)->percent);

total++;

}
return;
}
void insert(struct student *pt)
{
int i,n;
printf ("How many entries do you want to insert: ");
scanf ("%d",&n);
for (i=total; i<total + n; i++)
{
printf ("\nRecord %d\n",i+1);
printf ("Name: ");
fflush(stdin);
gets ((pt+i)->name);
printf ("PRN: ");
scanf ("%d",&(pt+i)->PRN);
printf ("Percentage: ");
scanf ("%f",&(pt+i)->percent);
}
total+=n;
}
void show(struct student *pt)
{
int a=0;
while (a<total)
{
printf("\n------------------------------------");
printf("\nRecord %d\n",a+1);
printf("------------------------------------\n");
printf("Name: ");
puts((pt+a)->name);
printf("PRN: %d\n", (pt+a)->PRN);
printf("Percentage: %f\n", (pt+a)->percent);
a++;
}
}
void deleteRecord(struct student *pt)
{
int d,i=0;
printf("\nEnter the record number you want to delete: ");
fflush(stdin);
scanf("%d", &d);
while(d<total)
{
pt[d-1]= pt[d];
d++;
}
total--;
printf("Record deleted\n");
}

void modify(struct student *pt)
{
int r,ch;

printf("Enter record number which you want to modify: ");
scanf("%d", &r);
printf("\n1. Modify PRN\n2. Modify Name");
printf("\n3. Modify Percentage");
printf("\nEnter your choice: ");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("Enter PRN: ");
scanf("%d", &(pt+r-1)->PRN);

break;
case 2:
printf("Enter Name: ");
getch();
gets((pt+r-1)->name);
break;
case 3:
printf("Enter Percentage: ");
scanf("%f", &(pt+r-1)->percent);
break;
default:
printf("Invalid Choice");
break;
}

}

int main()
{
int choice, exitornot;
struct student *s1=st;

do
{
printf("\nMENU\n1. Create a record.\n2. Insert a record.\n3. Modify a record.\n4. Display all records.");
printf("\n5. Delete a record.\n6. Exit.\n");
exitornot = 0;

printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create(s1);
break;
case 2:
insert(s1);
break;
case 3:
modify(s1);
break;
case 4:

show(s1);
break;
case 5:
show(s1);
deleteRecord(s1);
break;
case 6:
exitornot = 1;
break;
default:
printf("\nEnter valid choice\n");

}
}while(exitornot!=1);
return 0;
}
