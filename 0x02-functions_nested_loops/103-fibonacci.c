#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1 = 0, n2 = 1, fib = 0, sum = 0;

while (fib <= 4000000)
{
fib = n1 + n2;
n1 = n2;
n2 = fib;
if (n1 % 2 == 0)
{
sum += n1;
}
}
printf("%d\n", sum);
return (0);
}
