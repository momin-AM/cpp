#include <iostream>
using namespace std;

//input n, find out sum of it's digits using recursion

int sumOfDigits(int n){
    if(n%10==0){
        return n;
    }
    int res=0;
    res=n%10+sumOfDigits(n/10);
    return res;
}

int main(){
    int n;
    cin>>n;
    int res=sumOfDigits(n);
    cout<<res<<endl;
    return 0;
}

//pow with recursion

// int myPow(int p,int q){//brute force O(q)
//     if(q==0){
//         return 1;
//     }
//     int res=p*myPow(p,--q);
//     return res;
// }
int myPow(int p,int q){//optimised 2^k - O(log q)

    if(q==0){
        return 1;
    }
    int res=myPow(p,q/2);
    res*=res;
    if(q%2!=0){
        return res*p;
    }
    return res;
}  

int main(){
    int p,q;
    cin>>p>>q;
    int res=myPow(p,q);
    cout<<res<<endl;
    return 0;
}
