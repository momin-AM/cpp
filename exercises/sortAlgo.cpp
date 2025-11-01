//sorting algo -0
#include <iostream>
using namespace std;

//bubble sort algo
    //stable - doesn't swap duplicates, bubble is stable
#include <vector>

void my_sort(vector <int> &arr){
    int n=arr.size();
    for(int i=n-1;i>0;i--){
        bool swapped=false;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=1;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    vector <int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    my_sort(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

//day -1

//selection sort algo---
    //unstable - the sequence of duplicate values can be changed and not.
#include <vector>
// #include <climits>
// int min0(vector <int> arr, int start, int &size){
//     int res=INT_MAX, resInd=start;
//     for(int i=start;i<size;i++){
//         if(arr[i]<res) {
//             res=arr[i];
//             resInd=i;
//         }
//     }
//     return resInd;
// }

void selectSort(vector <int> &arr){
    int  size=arr.size();
    for(int i=0;i<size-1;i++){
        int smallestInd=i;
        // int minimum=min0(arr,i,size);
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallestInd]){
                smallestInd=j;
            }
        }
        if(smallestInd!=i){
            swap(arr[i],arr[smallestInd]);
        }
    }

}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    selectSort(v);
    for(int i:v) cout<<i<<" ";

    return 0;
}

