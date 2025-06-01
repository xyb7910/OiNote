#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m, head, tail, l[N], r[N];
bool st[N];
inline void init() {
    head = n + 1, tail = n + 2;
    r[head] = tail, l[tail] = head;
}

inline void ins(int u, int v) {
    int ne = r[u];
    r[u] = v, l[v] = u;
    r[v] = ne, l[ne] = v;
}

inline void del(int v) {
    int f = l[v], ne = r[v];
    r[f] = ne, l[ne] = f;
}

int main() {
    scanf("%d", &n);
    init(), ins(head, 1);
    for (int i = 2; i <= n; i ++) {
        int k, p; scanf("%d%d", &k, &p);
        if(!p) k = l[k];
        ins(k, i); 
    }
    scanf("%d", &m);
    while(m --) {
        int x; scanf("%d", &x);
        if(st[x]) continue;
        st[x] = 1;
        del(x);
    }
    for (int i = r[head]; i != tail; i = r[i])
        cout << i << " \n"[r[i] == tail];
    return 0;
}