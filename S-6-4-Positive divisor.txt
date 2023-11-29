#include <stdio.h>
#include <stdbool.h>
 
bool isPerfectNumber(int n) {
   if (n <= 0) {
       return false;
   }
 
   int sumOfDivisors = 0;
   
   for (int i = 1; i <= n / 2; i++) {
       if (n % i == 0) {
           sumOfDivisors += i;
       }
   }
 
   return sumOfDivisors == n;
}
 
int main() {
   int n;
 
   printf("Enter an integer: ");
   scanf("%d", &n);
 
   if (isPerfectNumber(n)) {
       printf("%d is a perfect number.\n", n);
   } else {
       printf("%d is not a perfect number.\n", n);
   }
 
   return 0;
}
