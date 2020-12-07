#include <stdio.h>
int main()
{
    int v1, v2, t, s, l; // t是领先米数，s是休息时长
    int l1=0, l2=0, m, t1, t2;
    m = 0;
    scanf("%d%d%d%d%d", &v1, &v2, &t, &s, &l);
    t2 = l / v2;
    if (v2 > v1)
        {
            printf("T\n%d", t2);
            return 0;
        }
    while (l1 < l && l2 < l)
        {
            m++;
            l1 += v1;
            l2 += v2;
            if (l1 >= l || l2 >= l)
                break;
            if ((l1 - l2) >= t)
                {
                    m += s;
                    l2 += s * v2;
                }
        }
    if (l1 >= l && l2 >= l)
        {
            printf("D\n%d", t2);
            return 0;
        }
    else if (l1 >= l)
        printf("R\n%d", m);
    else
        printf("T\n%d", t2);
        
    return 0;
}

