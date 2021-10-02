#include <time.h>
#include <stdio.h>

int main (int argc, char** argv) {
    clock_t begin = clock();

    /* here, do your time-consuming job */
    unsigned long long a, b, sum;
    scanf("%llu%llu", &a, &b);
    int lastDigit = (a%10 + b%10)%10;
    int carry = (a%10 + b%10)/10;
    sum = a/10 + b/10 + carry;
    if (sum == 0)
    {
        printf("%d", lastDigit);
    }
    else {
        printf("%llu%d", sum, lastDigit);
    }
    

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Excution time: %f\n", time_spent);
    return 0;
}