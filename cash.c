#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  float U;        //change owed in dollars
  int q = 25;     //quaters (25 cents)
  int d = 10;     //dimes (10 cents)
  int n = 5;      //nickels (5 cents)
  int p = 1;      //pennies (1 cent)
  
  
  do
  {
   U = get_float("Change owed: \n");
  }
  while (U <= 0);
  
  int c = round(U * 100); //change owed in cents 
  
  int coins = 0;//coins owed
  
  while(c >= q)
  {
   c = c - q;
   coins++;
  }
  
  while (c >= d)
  {
   c = c - d;
   coins++;
  }
  
  while (c >= n)
  {
   c = c - n;
   coins++;
  }
  
  while (c >= p)
  {
   c = c- p;
   coins++;
  }
  
  printf("%i\n",coins); //how many coins owed (coins)
  
}
