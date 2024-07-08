#include <stdio.h>



void ne_Chet()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        return;
    if (n%2 != 0)
    {
        printf("%d ", n);
        ne_Chet();
    }
    else
        ne_Chet();
}

int main()
{
    ne_Chet();
    return 0;
}
