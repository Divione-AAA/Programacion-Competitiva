#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define loopi(i,n) for(int i=0;i<=n;i++)
#define lup(i,x,n) for(int i=x;i<=n;i++)
#define loup(i,x,n) for(int i=x;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int long long
#define double long double
#define endl '\n'
#define over(i,a) for(auto i: a)
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PF push_front
#define INS insert
#define sortt(a) sort(a.begin(),a.end())

const int INF=100000;
const double pi=3.1415926535;

int n,d;

int ans(int n){
    if(n<=d || (n+d)%2) return 1;

    int x=(n+d)/2;

    return ans(x)+ans(n-x); 
}

int32_t main(){
	
	fast
	freopen("ratf.in", "r", stdin);freopen("ratf.out", "w", stdout);

    cin>>n>>d;
    cout<<ans(n);

return 0;}