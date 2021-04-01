// Author Name : Achint Sathoo
// Creation date: 31-03-21
// Purpose: Demonstrating array name as pointer representation and print its elements values
#include <stdio.h>
int main( )
{
   //Pointer variable
   int *p;

   //Array declaration
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

   // Assigning the address of val[0] the pointer
    
   p = &val[0];

   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d and address is %p\n", i, *p, p);
      // Incrementing the pointer so that it points to next element * on every increment.
       
      p++;
   }
   return 0;
}