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
int b[maxn];
void mergesort(int l,int r)
{
    if (l==r) return;
    else
    {
        int mid = (l+r)>>1;
        mergesort(l,mid);
        mergesort(mid + 1, r);
        _for(i,l,r+1) b[i] = a[i];
        merge(b + l, b + mid + 1, b + mid + 1, b + r + 1, a + l);
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
    mergesort(1, n);
//    cout<<"mang sau khi sort : \n";
//    _for(i,1,n+1) cout<<a[i]<<" ";

    return 0;
}
