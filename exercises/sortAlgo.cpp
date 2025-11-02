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


//sort algo - 2


//insertion sort

    //def - repeatedly take element from unsorted subarray and insert in sorted subarray
    //stable
#include <vector>
void sortArr(vector <int> &arr){
    int size=arr.size();
    for(int i=1;i<size;i++){
        int curr=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    
}


