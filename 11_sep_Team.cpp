#include <stdio.h>
int main()
{
    int i, n, petya, vasya, tonya;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya + vasya + tonya >= 2) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

