#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int l[N];
int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i ++)
        scanf("%d", &l[i]);
    int h; scanf("%d", &h);
    while(h) cout << h << " \n"[!l[h]], h = l[h];
    return 0;
}