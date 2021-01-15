#include<stdio.h>
#include<stdlib.h>
 
void display(int a[],int n);
void bubble_sort(int a[],int n);
void selection_sort(int a[],int n);
void insertion_sort(int a[],int n);
 
int main()
{
   int n,choice,i;
   char ch[20];
   while(1)
   {printf("\n\nEnter no. of elements u want to sort : ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
   }
   printf("\nPlease select any option Given Below for Sorting : \n");
 
    printf("\n\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Display Array.\n5. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
 
    switch(choice)
    {
    case 1:
        bubble_sort(arr,n);
        break;
    case 2:
        selection_sort(arr,n);
        break;
    case 3:
        insertion_sort(arr,n);
        break;
    case 4: 
        display(arr,n);
        break; 
    case 5:
        return 0;
    default:
        printf("\nPlease Select only 1-5 option ----\n");
    }
}
return 0;
}


void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",arr[i]);
   }
 
}

void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
      for(j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
      }
       printf("\nPass %d is ",i+1);
	display(arr,n);
  }
printf("\n\nAfter Bubble sort Elements are : ");
display(arr,n);
}
 
void selection_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    printf("\nPass %d is ",i+1);
	display(arr,n);
	}
printf("\n\nAfter Selection sort Elements are : ");
display(arr,n);
}
 
void insertion_sort(int arr[],int n)
{ 
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    printf("\nPass %d is ",i);
	display(arr,n); }
printf("\n\nAfter Insertion sort Elements are : ");
display(arr,n);
} 


