// Problem: PROBLEM LINK:
// Platform: codechef
// Language: //Utkarsh.25dec
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector <ll>
#define all(c) (c).begin(),(c).end()
using namespace std;
ll power(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll modInverse(ll a){return power(a,mod-2);}
const int N=500023;
bool vis[N];
vector <int> adj[N];
long long readInt(long long l,long long r,char endd){
    long long x=0;
    int cnt=0;
    int fi=-1;
    bool is_neg=false;
    while(true){
        char g=getchar();
        if(g=='-'){
            assert(fi==-1);
            is_neg=true;
            continue;
        }
        if('0'<=g && g<='9'){
            x*=10;
            x+=g-'0';
            if(cnt==0){
                fi=g-'0';
            }
            cnt++;
            assert(fi!=0 || cnt==1);
            assert(fi!=0 || is_neg==false);

            assert(!(cnt>19 || ( cnt==19 && fi>1) ));
        } else if(g==endd){
            if(is_neg){
                x= -x;
            }

            if(!(l <= x && x <= r))
            {
                cerr << l << ' ' << r << ' ' << x << '\n';
                assert(1 == 0);
            }

            return x;
        } else {
            assert(false);
        }
    }
}
string readString(int l,int r,char endd){
    string ret="";
    int cnt=0;
    while(true){
        char g=getchar();
        assert(g!=-1);
        if(g==endd){
            break;
        }
        cnt++;
        ret+=g;
    }
    assert(l<=cnt && cnt<=r);
    return ret;
}
long long readIntSp(long long l,long long r){
    return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
    return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
    return readString(l,r,'\n');
}
string readStringSp(int l,int r){
    return readString(l,r,' ');
}
void solve()
{
    int n=readInt(1,100,' ');
    int X=readInt(1,100000,' ');
    int Y=readInt(1,100000,'\n');
    int A[n+1]={0};
    int withoutdisc=0,withdisc=X;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
            A[i]=readInt(1,100000,'\n');
        else
            A[i]=readInt(1,100000,' ');
        withoutdisc+=A[i];
        withdisc+=(max(A[i]-Y,0));
    }
    if(withdisc<withoutdisc)
        cout<<"COUPON\n";
    else
        cout<<"NO COUPON\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int T=readInt(1,1000,'\n');
    while(T--)
        solve();
    assert(getchar()==-1);
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/DISCOUNTT?tab=solution
// Solved on: 2026-10-23T15:55:32.562Z

class Solution {
    public String checkCoupon(int n, int x, int y, int[] prices) {
        long save = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] >= y) {
                save += y;
            } else {
                save += prices[i];
            }
        }
        if (save > x) {
            return "COUPON";
        } else {
            return "NO COUPON";
        }
    }
}
