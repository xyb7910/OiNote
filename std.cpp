#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct Node 
{
    int value;
    Node* next;
} l[N], *head;
int main() 
{
    head = NULL;
    int n; 
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) 
    {
        scanf("%d", &l[i].value);
        // 插入位置可能为 链表头部
        if(head == NULL || l[i].value < head -> value)
        {
            l[i].next = head;
            head = &l[i];
        } 
        else 
        {
            // 在链表中插入元素，首先要找到最后一个小于 a[i].value 的节点位置
            Node *p = head;
            while(p -> next && p -> next -> value < l[i].value)
                p = p -> next;
            l[i].next = p -> next;
            p -> next = &l[i];
        }
    }
    Node *p = head;
    while(p) {
        printf("%d ", p -> value);
         p = p-> next;
    }
    return 0;
}