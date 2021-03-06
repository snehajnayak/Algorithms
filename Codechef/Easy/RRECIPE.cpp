#include <cstdio>
#include <cstring>
#include <cassert>
using namespace std;

#define FOR(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

#define MOD 10000009

char A[1<<20];
int n;

int main() {
    int T;
    scanf("%d",&T);
        
    while(T--) {
        scanf("%s",A);
        int n=strlen(A);
        
        ll res=1;
        FOR(i,n) {
            int j=n-i-1;
            if(i>j) break;
            if(A[i]=='?' && A[j]=='?') res=(res*26)%MOD;
            if(A[i]!='?' && A[j]!='?' && A[i]!=A[j]) {
                res=0;
                break;
            }
            /*In all other cases we multiply by 1, so they can be ignored :)*/
        }
        
        printf("%lld\n",res);
    }
    return 0;
}
