#include <stdio.h> 
#include <string.h> 
struct struct_example 
{ 
    int integer; 
    float decimal; 
    char name[20]; 
}; 
union union_example 
{ 
    int integer; 
    float decimal; 
    char name[20]; 
}; 
int main() 
{ 
 // creating variable for structure, union and initializing values difference  
   struct struct_example s = {18,38,"programming"};
   union union_example u = {18,38, "programming"}; 
   printf("structure data:\n integer: %d\n" 
              "decimal: %.2f\n name: %s\n", 
                s.integer, s.decimal, s.name); 
    printf("\n union data:\n integer: %d\n"
                 "decimal: %.2f\n name: %s\n",  
                u.integer, u.decimal, u.name); 
    printf("\n sizeof structure : %d\n", sizeof(s)); 
    printf("sizeof union : %d\n", sizeof(u)); 
    printf("\n Accessing all members at a time: \n");  
    s.integer = 183; 
    s.decimal = 90; 
    strcpy(s.name, "programming"); 
    printf("structure data:\n integer: %d\n "
                "decimal: %.2f\n name: %s\n", 
            s.integer, s.decimal, s.name); 
    
    u.integer = 183; 
    u.decimal = 90; 
    strcpy(u.name, "programming"); 
    printf("\n union data:\n integer: %d\n "
                "decimal: %.2f\n name: %s\n", 
            u.integer, u.decimal, u.name); 
    printf("\n Accessing one member at time:");       
    printf("\n structure data:"); 
    s.integer = 240; 
    printf("\n integer: %d", s.integer);        
    s.decimal = 120; 
    printf("\n decimal: %f", s.decimal);        
    strcpy(s.name, "programming"); 
    printf("\n name: %s\n", s.name);        
    printf("\n union data:"); 
    u.integer = 240; 
    printf("\n integer: %d", u.integer);        
    u.decimal = 120; 
    printf("\n decimal: %f", u.decimal);        
    strcpy(u.name, "programming"); 
    printf("\n name: %s\n", u.name);        
    
} 


