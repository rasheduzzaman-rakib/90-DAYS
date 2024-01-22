#include <stdio.h>
int main() {
    int n,a,b,c_Capacity = 0, m_Capacity = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        c_Capacity = c_Capacity - a + b;
        if (c_Capacity > m_Capacity)
            {
                m_Capacity = c_Capacity;
            }
    }
    printf("%d\n", m_Capacity);

    return 0;
}

