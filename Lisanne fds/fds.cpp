#include<iostream>

using namespace std;

//Linear search with multiple occurrences
void lsearch(int a[],int n, int no)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{if(a[i]==no)
	  {count++;
	   cout<<"\nElement found at position :"<<(i+1);
	  }
	}
	if(count==0)
	cout<<"\nElement not found.";
}

//Binary search with iteration
void iterative(int a[],int n, int no)
{
	int f=0,l=n-1,mid,count=0;
	while(f<=l)
	{mid=(f+l)/2;
	 if(a[mid]==no)
	 {count++;
	  cout<<"\nNumber found at position"<<(mid+1);
	  break;
	 }
	 else if(a[mid]>no)
	 l=mid-1;
	 else
	 f=mid+1;
	}
	if (count==0)
	cout<<"\nNumber not found in the array.";
	
}

//Binary search with recursion
void recursive(int a[],int no,int first,int last)
{
	int f=first,l=last,mid;
	
	if(f<=l)
	{
		mid=(f+l)/2;
		if(a[mid]==no)
		{cout<<"\nNumber found at position: "<<(mid+1);
		}
		else if(a[mid]>no)
		recursive(a,no,f,mid-1);
		else
		recursive(a,no,mid+1,l);
		
	}
	else
	cout<<"\nNumber not found in the array.";
	
}

void sort(int a[],int n)
{int i,j,temp;
    for(i=0;i<n-1;i++)
	for(j=0;j<n-(i+1);j++)
	{if(a[j]>a[j+1])
	{temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;}}
    cout<<"\nThe sorted array is: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{   int ch,i,arr[100],no,n,ans;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {cout<<"Enter element "<<(i+1)<<" ";
    cin>>arr[i];}
    
do{ cout<<"Enter the number to be seached: ";
    cin>>no;
	cout<<"\n\nChose the method of searching:";
	cout<<"\n\n1.Linear search with multiple occurrences";
	cout<<"\n2.Binary search with iteration (single occurance)";
	cout<<"\n3.Binary search with recursion (single occurance)";	
	cout<<"\n\nEnter your choice: ";
	cin>>ch;
	
	if(ch==1)
	lsearch(arr,n,no);
	else if(ch==2)
	{sort(arr,n);
	 iterative(arr,n,no);}
	else if(ch==3)
	{sort(arr,n);
	 recursive(arr,no,0,n-1);}
   cout<<"\n\nDo you wish to continue? 1 for yes and 0 for no: ";
   cin>>ans;
   }while(ans);
}


