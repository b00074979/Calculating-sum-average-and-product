/*LAB 1 Q1 */

/* ------------------------------------------------------------

 Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose: To accept 3 numbers and to calculate the sum average and product and to state the largest and smallest.

------------------------------------------------------------*/
#include <stdio.h>

int main()
{
 int a,b,c,sum, average, product, smallest, largest;

  printf("Enter value for a:");
  scanf("%d",&a);

  printf("Enter value for b:");
  scanf("%d",&b);

  printf("Enter value for c:");
  scanf("%d",&c);

  sum = a+b+c;
  product = a*b*c;
  average = sum/3;

  printf("The sum of the numbers is:%d\n",sum);
  printf("The product of the numbers is:%d\n",product);
  printf("The average of the numbers is: %d\n",average);

  if ( a>b && b>c ) {
      printf("a is biggest (%d)\n",a);
  }

  else if ( b>a && b>c ) {
   printf("b is biggest (%d)\n",b);
  }

  else if ( c>a && c>b ) {
    printf("c is biggest (%d)\n",c);
  }


  if ( a<b && b<c ) {
      printf("a is smallest(%d)\n",a);
  }

  else if ( b<a && b<c ) {
   printf("b is smallest (%d)\n",b);
  }

  else if ( c<a && c<b ) {
    printf("c is smallest (%d)\n",c);
  }


  return 0;
}
