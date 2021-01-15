#include <stdio.h>
#include<iostream>
using namespace std;


int r1,c1,r2,c2,ans;
int mat1[50][50]; int mat2[50][50];


void dispmat()
{int i,j;
std::cout<<"\n the first matrix is \n";
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
{std::cout<<" "<<mat1[i][j];}
std::cout<<"\n";
}
if(ans<4||ans==7)
{
std::cout<<"\n the second matrix is \n";
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
{std::cout<<" "<<mat2[i][j];}
std::cout<<"\n";
}
}
}
// addition
int addition(){
    if(r1==r2 && c1==c2){
        int sum[r1][c1];
        std::cout<<"\n th resultant sum matrix is \n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                sum[i][j] = mat1[i][j] + mat2[i][j];
                std::cout<<" "<<sum[i][j];
            }
            std::cout<<"\n";
        }
    }
    else
        std::cout<<"Addition is not possible";
}
// subtraction
int subtraction(){
    if(r1==r2 && c1==c2){
        int sub[r1][c1];
        std::cout<<"\n the resultant subtraction matrix is\n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                sub[i][j] = mat1[i][j] - mat2[i][j];
                std::cout<<" "<<sub[i][j];
            }
            std::cout<<"\n";
        }
    }
    else
        std::cout<<"Subtraction is not possible";
}

// multiplication
int multiplication(){
    if(c1==r2&&c2==r1){
        int product[r1][c2];
        std::cout<<"\n the multiplcation matrix is \n";
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                product[i][j] = 0;
                for(int k = 0; k < c1; k++){
                    product[i][j] += (mat1[i][k] * mat2[k][j]);
                }
                std::cout<<" "<<product[i][j];
            }
            std::cout<<"\n";
        }
    }
    else
        std::cout<<"Multiplication cannot be done.";
}

//finding greatest num in each Row
int greatest(){int max;
    for(int i = 0; i < r1; i++){
        max=mat1[i][0];
        for(int j = 0; j < c1; j++){
            if(mat1[i][j] > max){
                max = mat1[i][j];
            }
        }
        std::cout<<"\n Greatest number in row "<<i+1<<" is: "<<max;
    }
    
}
//sum of the major diagonal
int sum_of_major_diag(){
    int sum = 0;
    if(r1==c1)
    {
	
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            if(i == j){
               sum = sum + mat1[i][j];
            }
        }
    }
    std::cout<<"\n\nSum of the major diagonal elements is: "<<sum;
}
else {std::cout<<" \n the number of rows and columns should be same";}
    
}
//printing a matrix in sparse matrix form

int sparse_mtrx_form(){
    std::cout<<"\n i | j |value|\n_____________\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            if(mat1[i][j] != 0){
               std::cout<<i<<"  | "<<j<<" | "<<mat1[i][j]<<"   |\n";
            }
        }
    }
}
int additionofsparse(){
    if(r1==r2 && c1==c2){
        int sum[r1][c1];
        std::cout<<"\n th resultant sum matrix is \n";
        std::cout<<"\n i | j |value|\n_____________\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            if(mat1[i][j] != 0&&mat2[i][j]!=0){
            	sum[i][j]=mat1[i][j]+mat2[i][j];
               std::cout<<i<<"  | "<<j<<" | "<<sum[i][j]<<"   |\n";
            }
        }
    }
    }
    else
        std::cout<<"Addition is not possible";
}

int transpose(){
    std::cout<<"\n i | j |value|\n_____________\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            if(mat1[i][j] != 0){
               std::cout<<j<<"  | "<<i<<" | "<<mat1[i][j]<<"   |\n";
            }
        }
    }
}
int main()
{  
    int ch;
   do{
   std::cout<<"MENU \n\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Find the maximum number from each row \n5. Add the major diagonal elements \n6.Sparse matrix representation for given matrix \n7.addition of sparse matrix\n8.transpose of sparse matrix\nEnter your choice: ";
    std::cin>>ans;
    std::cout<<"Enter number of rows for matrix 1 : "; std::cin>>r1;
    std::cout<<"Enter number of columns for matrix 1: "; std::cin>>c1;
    std::cout<<"Matrix 1:";
    for(int x = 0; x < r1; x++){
        for(int y = 0; y < c1; y++){
            std::cout<<"Enter value: "; std::cin>>mat1[x][y];
        }
    }

    if(ans < 4||ans==7){
        std::cout<<"Enter number of rows for matrix 2 : ";std::cin>>r2;
        std::cout<<"Enter number of columns for matrix 2 : "; std::cin>>c2;
        std::cout<<"Matrix 2\n";
        for(int x = 0; x < r2; x++){
            for(int y = 0; y < c2; y++){
                std::cout<<"Enter value: "; std::cin>>mat2[x][y];
            }
        }
    }
    dispmat();
    

    switch(ans){
        case 1: addition(); break;
        case 2: subtraction(); break;
        case 3: multiplication();break;
        case 4: greatest(); break;
        case 5: sum_of_major_diag(); break;
        case 6: sparse_mtrx_form();break;
        case 7: additionofsparse();break;
        case 8:transpose();break;
		default: std::cout<<"Invalid input.";
    }
    std::cout<<"\n\n Do you want to continue? (Yes=1/No=0)"; 
	std::cin>>ch;
    }while(ch);
}

