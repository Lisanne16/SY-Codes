#include<conio.h>
#include<iostream>
//With Pointer

using namespace std;
int i=0,n;
struct student
{
char name[100];
int prn;
float  percent;
void create();
void modify();
void del();
void disp();
}s[100],t[100];
void menu()
{
int x;
cout<<"\n\n\n 1. Create \n 2.Modify \n 3.Delete \n 4.Display\n 5.exit \n \n enter your choice";
cin>>x;
if(x==1)
{cout<<"\n how many records do you want to enter";
cin>>n;
for(i=0;i<n;i++)
{
s[i].create();}
menu();}

if(x==2)
{s[i].modify();}
else if(x==3)
{s[i].del();}
else if(x==4)
{s[i].disp();}
else if(x==5)
{exit(0);}

else{cout<<"\n wrong input ";exit(0);}
}

void student::create()
{struct student *ptr1;
ptr1=&s[i];
fflush(stdin);
cout<<"\n enter name  ";
cin.getline(ptr1->name,100);
cout<<"\n enter prn ";
cin>>ptr1->prn;
cout<<"\n enter percentage";
cin>>ptr1->percent;
}
void student::modify()
{int x,pr,count=0;
struct student *ptr1;
cout<<"\n enter prn of record ";
cin>>pr;
for(i=0;i<n;i++)
{ptr1=&s[i];
if(ptr1->prn==pr)
{count=1;
cout<<"\n which field do you want to modify for the record\n1.name \n2.prn\n3.percentage";
cin>>x;
if(x==1){cout<<"\n enter new name ";fflush(stdin);cin.getline(ptr1->name,100);}
else if(x==2){cout<<"\n enter new prn  ";cin>>ptr1->prn;}
else if(x==3){cout<<"\n enter percentage ";cin>>ptr1->percent;}
else{cout<<"\n wrong input";}	
}
}
if(count==0){cout<<"\n no record found";}
menu();
}
void student::del()
{struct student *ptr1;
int x,p,flag=0;
cout<<"\n enter prn number of the record to be deleted";
cin>>x;
for(i=0;i<n;i++)
{if(s[i].prn==x)
{cout<<"record deleted sucessfully!!";
for(int j=i;j<n-1;j++)
{
s[j]=s[j+1];flag++;
}
n=n-1;
}

if(flag==0){cout<<"\n record couldnot be found.";}
}
menu();
}
void student::disp()
{struct student *ptr1;
for(i=0;i<n;i++)
{ptr1=&s[i];
cout<<"\n---------------------------------------------------------";
cout<<"\n PRN : "<<ptr1->prn<<"\n Name : "<<ptr1->name<<"\n Percentage : "<<ptr1->percent;}
menu();
}
main()
{menu();
}

