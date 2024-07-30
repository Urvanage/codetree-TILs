#include <iostream>
using namespace std;

int prime[10005] = {0,};

int main() {
    prime[1] = 1;
    for(int i=2;i<=10000;i++){
        if(prime[i]==0){
            for(int j=2;i*j<=10000;j++) prime[i*j] = 1;
        }
    }
    int a,b; cin>>a>>b;

    int minP=-1, maxP = -1;
    int cnt = 0;
    for(int i=a;i<=b;i++){
        if(prime[i]==0){
            if(minP == -1) minP = i;
            cnt += i;
        }
    }

    if(minP == -1) cout<<"-1";
    else cout<<cnt<<"\n"<<minP;

    return 0;
}