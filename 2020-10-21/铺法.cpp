#include <cstdio>
int n, f[105];

int main(void) {
    scanf("%d", &n);

    f[1] = 1, f[2] = 3;
    for (int i=3; i<=n; i++)
        f[i] = f[i - 1] + f[i - 2] + f[i - 2];
    
    printf("%d\n", f[n]);

    return 0;
}