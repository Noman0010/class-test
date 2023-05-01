#include <stdio.h>
#include <math.h>

int main() {
   int n;
   scanf("%lld", &n);
   int digit = n;
   int temp = n;
   int ans = 0;
   int count = 0;

    while (digit != 0) {
       int rem = digit % 10;
        digit = digit / 10;
        count++;
    }

    while (temp != 0) {
       int rem = temp % 10;
        ans = pow(rem, count) + ans;
        temp = temp / 10;
    }

    if (ans == n) {
        printf("Armstrong number");
    }
    else {
        printf("Not an Armstrong number");
    }

    return 0;
}
