#include <stdio.h>

int main()
{
    int t = 0, l = 0, greatest = 0, smallest = 0, a = 0, gr_last = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &l);
        scanf("%d", &a);
        greatest = a;
        smallest = a;
        for(int i = 0; i < l-1; i++)
        {
            scanf("%d", &a);
            if(a > greatest)
            {
                greatest = a;
                gr_last = 1;
            }
            else if(a < smallest)
            {
                smallest = a;
                gr_last = 0;
            }
        }
        if(gr_last)
        {
            printf("%d %d\n", smallest, greatest);
        }
        else
        {
            printf("%d %d\n", greatest, smallest);
        }
        

    }
}