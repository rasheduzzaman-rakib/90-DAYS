#include <stdio.h>
int main()
{
    int t,a,b,result;
    scanf("%d",&t);
    while (t--) {
        scanf("%d+%d", &a, &b);
        result = a + b;
        printf("%d\n",result);
    }
    return 0;
}

