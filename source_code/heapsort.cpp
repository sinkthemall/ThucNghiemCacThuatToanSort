#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin>>n;
    _for(i,1,n+1) cin>>a[i];
}

int h[maxn];
int s;
void up(int i)
{
    if(i == 1) return;
    if (h[i] < h[i/2])
    {
        swap(h[i], h[i/2]);
        up(i/2);
    }
}

void down(int i)
{
    int pos = i;
    if (i*2 <=s && h[pos] > h[i*2]) pos = 2*i;
    if (i*2 + 1 <= s && h[pos] > h[i*2 + 1]) pos = i*2 + 1;
    if (pos != i)
    {
        swap(h[pos], h[i]);
        down(pos);
    }
}

void push(int val)
{
    h[++s] = val;
    up(s);
}
void pop()
{
    h[1] = h[s--];
    down(1);
}
void heapsort()
{
    _for(i,1,n+1)
    {
        push(a[i]);
    }
    _for(i,1,n+1)
    {
        a[i] = h[1];
        pop();
    }
}

void gen()
{
    n = 10;
    _for(i,1,n+1) a[i] = rand()%100;
}
int main(int argc, char * argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();
//    cout<<"mang truoc khi sort : \n";
//    _for(i,1,n+1) cout<<a[i]<<" ";
//    cout<<"\n";
    heapsort();
//    cout<<"mang sau khi sort : \n";
//    _for(i,1,n+1) cout<<a[i]<<" ";
    return 0;
}
