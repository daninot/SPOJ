// https://www.spoj.com/problems/TEST/
// TEST - Life, the Universe, and Everything

#include <stdio.h>

int main (void)
{
    int n;
    while(scanf("%d",&n) == 1 && n != 42)
    {
        printf("%d\n",n);
    }
    return 0;
}
