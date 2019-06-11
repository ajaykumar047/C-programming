#include <stdio.h>

main()
{
   int number, sum = 0, temp, remainder;
   for( number=0; number<=1000; number++)
   {
      temp = number;
      sum=0;
      while( temp != 0 )
      {
         remainder = temp%10;
         sum = sum + remainder*remainder*remainder;
         temp = temp/10;
      }

      if ( number == sum )
         printf("%d is an armstrong number.\n", number);
      }
   return 0;
}
