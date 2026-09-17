#include<stdio.h>
// this includes the string library we need it because we use: strlen()
#include<string.h>
int main()
{ // we use it to store the binary number as a string
  char a[100];
  /*
    i     -> used for the loop
    len   -> stores the length of the binary number
    carry -> used while adding 1
    we initialize carry to 1 because we need to add 1 to the 1's complement.
 */
  int i,len, carry=1;

  printf("enter the binary number : ");
  scanf("%s", a);
  printf("\n");
 // strlen() finds the length of the sring.
  len = strlen(a);

        // ** FINDING THE 1'S COMPLEMENT ** //
/* 
  FIRST FOR LOOP
  this loop checks every bit from left to right.
*/

  for (i=0;i<len; i++)
    {
      // this cheacks whether the current bit is 0.if it is 0,we chang it to 1.

      if   (a[i]=='0')

           a[i] = '1';
      else
           a[i]= '0';
        
    }
    printf(" ##### 1'S COMPLEMENT : %s #####\n\n",a);

      // ** FINDING THE 2'S COMPLEMENT ** //

/* 2'S COMPLEMENT = 1's COMPLEMENT + 1
   this loop strat from the rightmost bit and moves toward the left. why? =  Because when we add 1, binary Addition strat from the rightmost bit.
*/
   
   for (i = len -1; i >= 0 && carry == 1; i--)
     {
// if the current bit is 0: so we chang it to 1.
      if ( a[i] == '0')
      { 
        a[i] = '1';
        carry = 0; // the loop stops.
      }
// if the current bit is 1,then moves to the next bit on left.
      else 
       a[i] = '0';
      }

    printf("  #####  2's complement = %s ######\n",a);

   return 0;
}

