/*
* AUTHOR: Ganesh S Kudva
* https://www.codechef.com/problems/SEAVOTE
*/


#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define memo(a,v) memset(a,v,sizeof(a))
#define pb push_back
#define all(a) a.begin(),a.end()
#define eps (1e-9)
#define inf (1<<29)
#define i64 long long
#define u64 unsigned i64
#define AIN(a,b,c) assert(a<=b && b<=c)
#define MAXN 100000

typedef pair<int,i64> pii;
int a[10005];
int main(){
    int t,i,sum,n, flag , cnt;
    scanf("%d",&t);
    AIN(1,t,50);
    while(t--){
        scanf("%d",&n);
        AIN(1,n,10000);
        sum = 0;
        flag = 0;
        cnt = 0;
        for(i = 0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>100){
                flag = 1;
            }
            if(a[i]>0){
                cnt++;
            }
            sum+=a[i];
        }
        if(!flag && sum - 100>=0 && sum - 100<cnt)
            puts("YES");
        else puts("NO");
    }
	return 0;
}
