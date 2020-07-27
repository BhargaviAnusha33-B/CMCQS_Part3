#include <stdio.h>
int main()
{
    int c = 5, no = 10;//c=2
    do {
        no =no/ c;//0/2
    } while(c--);//
    printf ("%d\n", no);
    return 0;
}
