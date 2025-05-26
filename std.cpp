#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, M  =1e5 + 10;
int n, m, ans[N], h[N], e[M], ne[M], k;
void add(int x, int y) {
    e[++ k] = y, ne[k] = h[x], h[x] = k;
}

void dfs(int x, int w) {
    ans[x] = w;
    for (int i = h[x]; i; i = ne[i]) {
        int y = e[i];
        if(ans[y]) continue;
        dfs(y, w);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    scanf("%d%d", &n, &m);
    // 这里反向新建图
    for (int i = 0, x, y; i < m;  i++) 
        scanf("%d%d", &x, &y), add(x, y);
    for (int i = n; i; i --)
        if(!ans[i]) dfs(i, i);
    for (int i = 1; i <= n; i ++)
        cout << ans[i] << " \n"[i ==n];
    return 0;
}
