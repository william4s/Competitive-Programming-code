#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int t, b[25],i, j, n;
    memset(b, 0, sizeof(b));
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            {
                scanf("%d", &t);
                if (t == 0 && i!=j)
                    b[j]++;
            }
    for (i = 0; i < n; i++)
        {
            if (b[i] <=(n / 2))
                printf("%d ", i+1);
        }

    return 0; 
            }
