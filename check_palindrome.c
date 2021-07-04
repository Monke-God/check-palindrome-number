#include <stdio.h>

int isPalindrome(int num)
{
    int revnum = 0, n = 1, m = 1, r, k;
    while (num / m != 0)
    {
        m *= 10;// m is 10^x where x is number of digits in num
    }
    do//it reverses the number
    {
        m /= 10;
        r = n;
        n *= 10;
        revnum += (((num % n) - num % r) / r) * m;
    } while (num / n != 0);

    if (revnum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter a number to check wether it is a palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    return 0;
}
