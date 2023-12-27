#include <bits/stdc++.h>  //header
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")
#pragma GCC optimize(3)
#pragma GCC target("avx,avx2")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("Ofast,fast-math")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC optimize(2)
#define el '\n'   
#define fi first
#define sc second
//#define int ll
#define pii pair<int, int>
#define all(v) v.begin(), v.end()

using namespace std;
using ll=long long;
using ull=unsigned long long;
using ld=long double;
const int mod=1e9+7;
const int N=2e5+1;
int n, k, sz[N], vit[N], dp[N], a[N];
ll ans[N];
vector<int> adj[N];
vector<int> ned;
vector<int> uoc;
//Uoc chung lon nhat
int gcd(int a, int b){
    if( b > a && b % a == 0) return a;
    return a == 0 ? b : b % a;
}
// Cay
int subtree(int u, int pa)
{
    sz[u] = 1;
    for (auto v: adj[u])
    {
        if (v != pa && !vit[v])
        {
            sz[u] += subtree(v, u);
        }
    }
    return sz[u];
}

int cen(int u, int pa, int n)
{
    for (auto i: adj[u])
    {
        if (i != pa && !vit[i] && sz[i] > n/2)
        {
            return cen(i, u, n);
        }
    }
    return u;
}
void dfs(int u, int pa, int d, int ch, int c)
{
    if(ch)
    {
        dp[d]++;
        if(dp[d]>0) ned.push_back(d);
    }
    else
    {
        for(int i:uoc) ans[gcd(i, d)]+=dp[i];
    }
    for(auto v: adj[u])
    {
        if(v != pa && !vit[v]) dfs(v, u, gcd(d, a[v]), ch, c);
    }
}
void calc(int u)
{
    subtree(u, 0);
    int c = cen(u, 0, sz[u]);
    vit[c] = 1;
    dp[a[c]]=1;
    for(int i=1; i*i<a[c]; i++)
    {
        if(a[c]%i==0)
        {
            uoc.push_back(i);
            uoc.push_back(a[c]/i);
        }
    }
    int cc=sqrt(a[c]);
    if(sqrt(a[c])==cc) uoc.push_back(cc);
    for(auto u: adj[c])
    {
        if (!vit[u])
        {
            dfs(u, c, gcd(a[c], a[u]), 0, c);
            dfs(u, c, gcd(a[c], a[u]), 1, c);
        }
    }
    dp[a[c]]=0;
    for(int i:ned) dp[i]=0;
    ned.clear();
    uoc.clear();
    for (auto v: adj[c])
    {
        if (!vit[v])
        {
            calc(v);
        }
    }
}
void sol()
{
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i], ans[a[i]]++;
    for(int i=1, u, v; i<n; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    calc(1);
    for(int i=1; i<=200000; i++) if(ans[i]>0) cout << i << ' '  << ans[i] << el;
}
signed main()
{
//    freopen("divisor.INP", "r", stdin);
//    freopen("divisor.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sol();
}