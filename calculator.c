/**
 * Author:
 * Date:
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;
// numbers is in integer type;
//change in flaot to int;
  printf("Enter operand a: ");
  scanf("%f", &a);

  printf("Enter operand b: ");
  scanf("%f", &b);
// if divisor is zero invalid input
  if(b==0)
  {
   printf("Invalid input input again");
  }
 

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("%f", a + b);
  } else if(choice == 2) {
    result = a - b;
    printf("%f", result);
  } else if(choice == 3) {
    //TODO: handle this case (multiplication)
     result = a * b;
  } else if(choice == 4) {
    //TODO: handle this case (division)
    result = a / b;
  } else if(choice == 5) {
    //TODO: handle this case (minimum)
    if(a>b)
    {
      printf("%d is smaller",a);
    }
    else{
      printf("%d is smaller",b);
    }
  } else if(choice == 6) {
    //TODO: handle this case (log_a(b))
   // ln a{(b)} = frac{ln{(b)}}{ln{(a)}}
  } else {
    printf("Please input a valid operator next time");
  }

  return 0;
}
