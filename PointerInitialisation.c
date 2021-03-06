// Author: Achint Sathoo
// Creation Date: 31-3-21
// Purpose: Demonstrating pointer variable initialization with the address of another variable and then printing normal variable value and its address using pointer variable
#include <stdio.h>

int main()
{
    int a;  
    a = 10;
    int *p = &a;     // declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;
}