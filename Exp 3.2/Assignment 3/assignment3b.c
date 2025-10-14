/* program to print the following pattern
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 */

#include <stdio.h>

int main() {
    int rows = 5;
    
    for(int i = 0; i < rows; i++) {
        for(int space = 0; space < rows-i; space++) {
            printf(" ");
        }
        
        int number = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d", number);
            number = number * (i - j) / (j + 1);
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
