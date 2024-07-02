


#include <stdio.h>


int sum(int a);
int chet(int a);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%s\n", (chet(a) == 1)? "YES" : "NO");
    return 0;
}


int sum(int a)
{
    int sum_a;
    sum_a = 0;
    if (a>=0)
    {
        while (a!=0)
        {
            sum_a+=a%10;
            a = a/10;
        }
    }
    else
        printf("Error, a<0\n");
    return (sum_a);
}

int chet(int a)
{
    int t;
    t = (sum(a)%2 == 0) ? 1 : 0;
    return (t);
}

