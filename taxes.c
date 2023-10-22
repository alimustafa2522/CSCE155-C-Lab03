/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;
  double calculation;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
    double a = numChildren;

    childCredit = a*2000;
                          
                        }
     
   if(agi>0&&agi<19900)
   // 10 per of AGI
     {
      tax = (10*agi)/100;
      totalTax = tax - childCredit;
     }

   else if(agi>19901 && agi<81050)
   {
     calculation = (agi - 19900);

    tax = ((12*calculation)/100)+1990;
   }                

  // copy the if else statements

  else if(agi>=81051 && agi<=172750)
  {
    calculation = (agi - 81050);
    tax = ((22*calculation)/100) + 9328;
    totalTax = tax - childCredit;
  }
  // copy if else just change the values ;

   else if(agi>=172751 && agi<=329850)
  {
    calculation = (agi - 172750);
    tax = ((24*calculation)/100) + 29502
      totalTax = tax - childCredit;
  }

   else if(agi>=329851 && agi<=418850)
  {
    calculation = (agi - 329850);
    tax = ((32*calculation)/100) + 67206;
    totalTax = tax - childCredit;
  }

   else if(agi>=418851 && agi<=628300)
  {
    calculation = (agi - 418850);
    tax = ((35*calculation)/100) + 95686;
    totalTax = tax - childCredit;
  }
   else if(agi>=628301)
  {
    calculation = (agi - 628300);
    tax = ((37*calculation)/100) + 168933.50;
    totalTax = tax - childCredit;
  }


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
