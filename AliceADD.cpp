#include <stdio.h>

int main(int argc, char** argv)
{
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
    
    return 0;
}