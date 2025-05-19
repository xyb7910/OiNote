#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int s[N], top = 0;
int main() {
    int n;
    scanf("%d", &n);
    int l = 0;
    for (int i = 0; i < n; i ++) {
        int x;
        scanf("%d", &x);
        if(s[top] != x) {
            for (int j = l + 1; j <= x; j ++) {
                s[++ top] = j;
                printf("push %d\n", j);
            }
            l = x;
        }
        puts("pop");
    }
}