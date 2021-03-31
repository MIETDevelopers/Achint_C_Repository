//Author:Achint Sathoo
//Creation Date; 19/2/2021
//Purpose; WAP for Check Whether a Number is Prime Number or Not.
/*  CONDITIONS FOR PRIME NUMBER
>> Prime number is a number which can be divided by 1 and itself
>> A number which can not be divided by any other number other than 1 or itself is a prime number.
>> It should have only 2 factors. 
>> They are, 1 and the number itself.*/
#include <stdio.h>     //Standard header filre for input and output
int main()            //int main is a  function in which our whole code or program is writtened and executed

{ 
           //Start of the  main function body
  int n, a, b = 0;    //initializing variables
  printf("Enter any number n:");
  scanf("%d", &n);

 // Checking for number of divisor
   for (a = 1; a <= n; a++) {
   
      if (n % a == 0) {
         b++;
      }
  }

  if (b == 2)    //no Divisors other than 1 and itself
   {
  printf("%d is a Prime number",n);  // Printing statement  
  }
  else {
  printf("%d is not a Prime number",n);    // Printing statement  
  }
  return 0;    
}      // End of  main funtion body 

