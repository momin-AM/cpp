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

//recursion  -DAY 2
#include <iostream>
using namespace std;

//recursion on arrays---------

//traversing

void traverse(int arr[],int n){
    if( n==5){
        return;
    }
    cout<<arr[n]<<endl;
    traverse(arr,n+1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    traverse(arr,0);
    return 0;
}

//print the max val of an array
#include <limits.h>
int getMax(int arr[],int ind,int size){
    if(ind==size-1) return arr[ind];
    // return getMax(arr,ind+1,size,arr[ind]>max?arr[ind]:max);
    return max(arr[ind],getMax(arr,ind+1,size));
}

int main(){
    int arr[5]={3,10,11,2,5};
    int max=INT_MIN;
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=getMax(arr,0,size);
    cout<<res<<endl;
    return 0;

}

//find sum of the elements of array

int getSum(int arr[],int ind,int size){
    if(ind==size-1) return arr[ind];
    return arr[ind]+getSum(arr,ind+1,size);
}

int main(){
    int arr[5]={1,2,3,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=getSum(arr,0,size);
    cout<<res<<endl;
    return 0;
}

