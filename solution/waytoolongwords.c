#include <stdio.h>

int main()
{
   char r;
   char c = '1';
   scanf("%c", &r);
   char input[r][c];
   char i, j;
   for (i = 0; i<r; i++){
    for (j=0; j<c; j++){
        scanf("%s\n", &input[i][j]);
    }
   }
    return 0;
}