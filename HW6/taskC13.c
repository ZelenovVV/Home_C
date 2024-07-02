


#include <stdio.h>
#include <math.h>

float cosinus(float x);
float power(float x, int p);
unsigned int fuk(unsigned int N);

int main()
{
    float x, PI;
    PI = 3.1415926535;
    scanf("%f", &x);
    if (x >= 0 && x <= 90)
    {
        x = x* PI/180;
        printf("%.3f\n", cosinus(x));
    }
    else
        printf("Error");
    return 0;
}



float cosinus(float x)
{
    float cosin_x, delta, cosin_delta;
    unsigned int i = 0;
    delta =  0.001;
    cosin_x = 0;
    cosin_delta = (power(x,i)/fuk(i)) - (power(x,i+2)/fuk(i+2));
    while (cosin_delta > delta)
    {
        cosin_x = cosin_x + cosin_delta;
        i = i+4;
        cosin_delta = (float)(power(x,i)/fuk(i)) - (float)(power(x,i+2)/fuk(i+2));
    }
    return (cosin_x);
}

float power(float x, int p)
{
    int i;
    float x_p;
    x_p = x;
    if (p >=2)
    {
        for (i = 2; i <= p; i++)
            x_p = x_p*x;
    }
    if (p == 1)
    {
        x_p = x;
    }
    if (p == 0)
    {
        x_p = 1;
    }
    return (x_p);
}

unsigned int fuk(unsigned int N)
{
    unsigned int res;
    res = 1;
    if (N >= 1)
    {
        for(int i = 1; i <= N; i++)
        {
            res *= i;
        }
    }
    if (N ==0)
        res = 1;
    return res;
}
