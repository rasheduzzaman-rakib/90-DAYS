#include <stdio.h>

int main()
{
    int n, m, walrus=0;
    scanf("%d %d",&n,&m);

    while (m >= walrus)
        {
        m =m-walrus;
        int given_chips=given_chips+walrus;
        walrus=(walrus % n) + 1;
    }
    printf("%d\n", m);

    return 0;
}

