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
    //take smallest and put at first
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

//merge sort (O(nlogn) time and O(n) space)

void merge(vector <int> &arr, int l,int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int arr1[n1], arr2[n2];
    int i=0,j=0,k=l;
    for(int i=0;i<n1;i++){
        arr1[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[i+mid+1];
    }
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) {
            arr[k++]=arr1[i++];
        }else {
            arr[k++]=arr2[j++];
        }

    }
    while(i<n1) arr[k++]=arr1[i++];
    while(j<n2) arr[k++]=arr2[j++];
}


void mergeSort(vector <int> &arr,int l,int r){
    if(l>=r) return ;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

