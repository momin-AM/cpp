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
