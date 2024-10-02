#include <stdio.h>
int main(void)
{
   int i; // index
   int a[10] = { 3,7,8,9,2,3,4,6,1,7 };
   for (i = 9; i>-1; i--) {
      if (!(a[i] % 2)) {
         printf("Found:a[%d]=%d\n",
            i, a[i]);
         break;
      }
   }
   if (i == -1) {
      printf("No even number\n");
   }
   return 0;
}