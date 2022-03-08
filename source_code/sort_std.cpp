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
    sort(a+1,a+n+1);
//    cout<<"mang sau khi sort : \n";
//    _for(i,1,n+1) cout<<a[i]<< " ";
    return 0;
}
