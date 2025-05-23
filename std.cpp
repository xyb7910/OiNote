#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, s[N], top;
char str[N];
int main() {
    scanf("%d%s", &n, str);
    for (int i = 0; i < n; i ++) {
        if(s[top] !=  str[i]) 
            s[ ++top] = str[i];
        else 
            -- top;
    }
    for (int i = 1; i <= top; i ++)
        printf("%c", s[i]);
    return 0;
}