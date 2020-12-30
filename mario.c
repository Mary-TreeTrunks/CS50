#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n;
    char hash = '#';
    char dot = ' ';
    
    do
    {
       n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    
    for (int row = 1; row <= n; row++) 
    {
        
      
        for (int column = 0; column < n - row; column++)
        {
        
        printf("%c", dot);

         }
         
         for (int column = 0; column < row; column++)
        {
        
        printf("%c", hash);

         }
         

          printf("\n");
     }
        
}

// get_int использовать, чтобы обновить переменную после лупа
//  printf("%c", dot);
