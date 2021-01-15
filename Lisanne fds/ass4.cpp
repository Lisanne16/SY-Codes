#include<conio.h>
#include<iostream>
//without pointer

using namespace std;
int i=0,n;
struct student
{
char name[100];
int prn;
float  percent;
}s[100],t[100];

void menu()
{
int x;
cout<<"\n 1. Create\n2.Insert \n 3.Modify \n 4.Delete \n 5.Display\n 6.Exit \n Enter your choice: ";
cin>>x;
if(x==1)
{cout<<"\n How many records do you want to enter? ";
cin>>n;
for(i=0;i<n;i++)
{create();}
menu();}

if(x==2)
{modify();}
else if(x==3)
{del();}
else if(x==4)
{disp();}
else if(x==5)
{exit(0);}

else{cout<<"\n Wrong input ";exit(0);}
}

void create()
{fflush(stdin);
cout<<"\n Enter name: ";
cin.getline(s[i].name,100);
cout<<"\n Enter prn: ";
cin>>s[i].prn;
cout<<"\n Enter percentage: ";
cin>>s[i].percent;
}

void insert()
{fflush(stdin);
int n,i;
cout<<"How many records do you wish to insert? ";
cin>>n;
for(i=0;i<n;i++)
{cout<<"\n Enter name: ";
cin.getline(s[i].name,100);
cout<<"\n Enter prn: ";
cin>>s[i].prn;
cout<<"\n Enter percentage: ";
cin>>s[i].percent;}
}
void modify()
{int x,pr,count=0;
cout<<"\n Enter prn of record: ";
cin>>pr;
for(i=0;i<n;i++)
{if(s[i].prn==pr)
{count=1;
cout<<"\n Which field do you want to modify for the record\n1.Name \n2.Prn\n3.Percentage";
cin>>x;
if(x==1){cout<<"\n Enter new name ";fflush(stdin);cin.getline(s[i].name,100);}
else if(x==2){cout<<"\n Enter new prn  ";cin>>s[i].prn;}
else if(x==3){cout<<"\n Enter percentage ";cin>>s[i].percent;}
else{cout<<"\n Wrong input";}
}
}
if(count==0){cout<<"\n No record found";}
menu();
}
void del()
{
int x,p,count=0;
cout<<"\n Enter prn number of the record to be deleted: ";
cin>>x;
for(i=0;i<n;i++)
{if(s[i].prn==x)
{cout<<"Record deleted sucessfully!!";
for(int j=i;j<n-1;j++)
{
s[j]=s[j+1];count++;
}
n=n-1;
}

if(count==0){cout<<"\n Record could not be found.";}
}
menu();
}
void disp()
{for(i=0;i<n;i++)
{cout<<"\n---------------------------------------------------------";
cout<<"\n PRN : "<<s[i].prn<<"\n Name : "<<s[i].name<<"\n Percentage : "<<s[i].percent;}
menu();
}
main()
{menu();
}

