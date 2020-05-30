#include <stdio.h>

int main()
{
    int t, a, b, c, s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        s = 0;
        while (b > 0 && c > 1)
        {
            b--;
            c -= 2;
            s += 3;
        }
        while (a > 0 && b > 1)
        {
            a--;
            b -= 2;
            s += 3;
        }

        printf("%d\n", s);
    }
}
