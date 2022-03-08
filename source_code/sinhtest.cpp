#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;

string to_str(int val)
{
    string q = "";
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}
void gentest_1()
{
    ofstream fi;
    fi.open("test1.inp");
    int n = 1000000;
    fi<<n<<"\n";
    vector<int> q(n);
    _for(i,0,n) q[i] = (rand()*rand())%100000000 + rand();
    sort(q.begin(), q.end());
    _for(i,0,n) fi<<q[i]<<" ";
    fi.close();
}

void gentest_2()
{
    ofstream fi;
    fi.open("test2.inp");
    int n = 1000000;
    fi<<n<<"\n";
    vector<int> q(n);
    _for(i,0,n) q[i] = (rand()*rand())%100000000 + rand();
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    for(auto i:q) fi<<i<<" ";
    fi.close();
}

void gentest(int stt)
{
    ofstream fi;
    fi.open("test" + to_str(stt) + ".inp");
    int n = 1000000;
    fi<<n<<"\n";
    _for(i,0,n) fi<<(rand()*rand())%100000000 + rand()<<" ";
    fi.close();
}
int main()
{
    srand(int(time(0)));
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    ///sinh test 1 : day co thu tu tang dan
    gentest_1();
    cout<<"hoan thanh sinh test 1\n";
    ///sinh test 2 : day co thu tu giam dan
    gentest_2();
    cout<<"hoan thanh sinh test 2\n";
    /// sinh test ngau nhien
    _for(i,3,11)
    {
        gentest(i);
        cout<<"hoan thanh sinh test "<<i<<"\n";
    }
    return 0;
}
