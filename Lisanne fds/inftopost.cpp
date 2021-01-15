#include<iostream>
#include<string.h>
using namespace std;

char s[40];
int top=-1;
string infix, postfix;

void push(char x)
{
	if(top==39)
	cout<<"Stack Overflow";
	else
	{
		top++;
		s[top]=x;
	}
}

void pop()
{
	if(top==-1)
	    cout<<"Stack Underflow";
	else if(top==0)
	    top=-1;
	else
		top--;
}

bool isoperator(infix[i])
{
	if(infix[i]=="^"||infix[i]=="*"||infix[i]=="/"||infix[i]=="+"||infix[i]=="-")
	  return true;
	else 
	  return false;  
}

int proiroity(infix[i])
{
	if(infix[i]=="^")
	   return 3;
	else if(infix[i]=="*"||infix[i]=="/")
	   return 2;
	else if(infix[i]=="+"||infix[i]=="-")
	   return 1;      
}

string convert(string infix)
{ int i;
	for(i=0;i<strlen(infix);i++)
	{
		if (infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z')
		 postfix=postfix+infix[i]; 
		 
		else if(infix[i]=="(")
		 push(infix[i]);
		 
		else if(infix[i]==")")
		 {while(s[top]!="("&&top!=-1) 
		   {postfix=postfix+infix[i]; 
          pop();}
          if(s[top]=="(")
           pop();}
		
		else if (isoperator(infix[i])) {
            if (top==-1) {
                push(infix[i]);
            }
            else {
                if (priority(infix[i]) > priority(s[top])){
                    push(infix[i]);
                }
                else if ((priority(infix[i]) == priority(s[top])) && (infix[i] == '^')) {
                    while ((priority(infix[i]) == priority(s[top]))&& (infix[i] == '^')) {
                        postfix += s[top];
                        pop();
                    }
                     push(infix[i]);
                }
                else if (priority(infix[i]) == priority(s[top])) {
                    push(infix[i]);
                }
                else {
                    while ((top==-1) && (priority(infix[i])) < priority(s[top])) {
                        postfix += s[top];
                        pop();
                    }
                    push(infix[i]);
	}
} } }           while (top>=0) {
        postfix += s[top];
        pop();
}
return postfix;}

int main()
{
	string infix, postfix;
	cout<<"Enter the Infix expression: ";
	cin>>infix;
	cout<<"The Postfix expression is: ";
	cout<<convert(infix);
}

