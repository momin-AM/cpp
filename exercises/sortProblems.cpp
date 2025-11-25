#include <iostream>
using namespace std;
#include <vector>

//move all xeros to the end while maintaining items order
void swapZeros(vector <int> &arr){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        int j=0, foundZero=0;
        while(j!=i){
            if(arr[j]==0 && arr[j+1]!=0){
                swap(arr[j],arr[j+1]);
                foundZero=1;
            }
            j++;
        }
        if(!(foundZero)) break;
    }
}

//order strings lexicographically
#include <string.h>
void lexicofy(vector <string> &arr){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }   
}

int main(){
    int n;
    cin>>n;
//     vector <int> arr(n);
    vector <string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
//     swapZeros(arr);
    lexicofy(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}
