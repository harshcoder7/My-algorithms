#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
bool sortbydesc(const pair<int, int> &a, const pair<int,int> &b)
    {
        return a.second>b.second;
    }
int main()
{
    fast_cin();
     ///freopen("output.txt","w",stdout); 
    ///freopen("input.txt","r",stdin); 
    vector<pair<int,int>> v;
    v.push_back(make_pair(1,5));
    v.push_back(make_pair(10,75));
    v.push_back(make_pair(7,1));
    v.push_back(make_pair(11,0));
    v.push_back(make_pair(18,9));
    v.push_back(make_pair(4,4));
    sort(v.begin(),v.end(),sortbydesc);
    for(auto i:v)
        cout<<i.second<<" ";
    return 0;
}

    