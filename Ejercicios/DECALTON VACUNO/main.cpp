/*no se*/
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

struct gift{

    int c,p,b;

    bool operator<(gift const& other){
        return c<other.c;
    }
};

int n,b,c,p,t;

int32_t main(){
	
	fast
	//freopen("file.in", "r", stdin);freopen("file.out", "w", stdout);

    cin>>n>>b;

    gift temp;

    vector<gift> bonos;

    loop(i,b){
        cin>>c>>p>>t;
        temp.b=t;
        temp.c=c;
        temp.p=p;
        bonos.PB(temp);
    }

    sortt(bonos);

    int tabla[n*n];

    loop(i,n*n){
            cin>>tabla[n];
        
    }

    /*loop(i,n){
        loop(j,n){
            cout<<tabla[i][j]<<" ";
        }
        cout<<endl;
    }*/

    loop(i,(1<<n)){
        loop(j,n){
            if(i&(1<<j)){
                cout<<tabla[j]<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"ye";

return 0;}