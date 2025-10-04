//two pointers approaces...
//difficult problem solving in arrays
#include <iostream>
using namespace std;

//get all zeroes to left and 1's to the right in  the array
// #include <vector>

// void sortZeroesndOnes(vector <int> &v){
//     int left_ptr=0,right_ptr=v.size()-1;
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }if(v[left_ptr]==0) left_ptr++;
//         if(v[right_ptr]==1) right_ptr--;
//     }
//     return;
// }
// int main(){
//     vector <int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int ele; 
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sortZeroesndOnes(v);
//     for(int i : v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//get all evens to left and odds to the right in  the array

// #include <vector>

// void sortZeroesndOnes(vector <int> &v){
//     int left_ptr=0,right_ptr=v.size()-1;
//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
//             int temp=v[left_ptr];
//             v[left_ptr]=v[right_ptr];
//             v[right_ptr]=temp;
//             left_ptr++;
//             right_ptr--;
//         }if(v[left_ptr]%2==0) left_ptr++;
//         if(v[right_ptr]%2!=0) right_ptr--;
//     }
//     return;
// }
// int main(){
//     vector <int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int ele; 
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sortZeroesndOnes(v);
//     for(int i : v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//get sorted increasing squares array of an sorted increasing array
#include <vector>
#include <algorithm>

vector <int> sortedSquares(vector <int> v){
    int left_ptr=0,right_ptr=v.size()-1;
    vector <int> res;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])>abs(v[right_ptr])){
            res.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }else {
            res.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;}
    }
    return res;
}
int main(){
    vector <int> v,square;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        v.push_back(temp);
    }
    square=sortedSquares(v);
    reverse(square.begin(),square.end());
    for(int i: square) cout<<i<<" ";
    return 0;
}
