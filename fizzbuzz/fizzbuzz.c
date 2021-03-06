#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
*/
void fizzbuzz(int num)
{
    for (int i = 1; i <= num; i++)
    {
        
        if (i % 15 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
