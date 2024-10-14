 #include <stdio.h>
int main() {

   double n[50];
   int a;
   scanf("%d", &a);
   for (int i = 0; i < a; i++) {
      scanf("%d", &n[i]);
   }

   int b;
   double m[50];
   scanf("%d", &b);
   for (int i = 0; i < b; i++) {
      scanf("%d", &m[i]);
      int c = 0;
      for (int j = 0; j < a; j++) {

         if (n[j] == m[i]) {
            c += 1;
         }

      }
      printf("%d ", c);
   }

}