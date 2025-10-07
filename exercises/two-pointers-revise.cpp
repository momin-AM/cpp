#//basic problem solving in arrays (revison version) - by pw course
#include <iostream>
using namespace std;

//q1 - meging two arrays(sorted)

// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     int arr1[n];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"enter m: ";
//     cin>>m;
//     int arr2[m];
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     int arr[m+n];
//     int pointer1=0,pointer2=0,pOfArr=0;
//     while(pointer1<n && pointer2<m){
//         if(arr1[pointer1]<arr2[pointer2]){
//             arr[pOfArr]=arr1[pointer1++];
//         }else arr[pOfArr]=arr2[pointer2++];
//         pOfArr++;
//     }        
//     while(pointer1<n){
//         arr[pOfArr++]=arr1[pointer1++];
//     }
//     while(pointer2<m){
//         arr[pOfArr++]=arr2[pointer2++];
//     }

//     for (int i = 0; i < m+n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

//q2 - input x, fixed size vector, get two sum==x?1:0
//#include <vector>
//o(n^2)
// int main(){
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"enter x: ";
//     cin>>x;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(i+j==x){
//                 printf("yes\n");
//                 return 0;
//             }
//         }
//     }
//     printf("no\n");
//     return 0;

// }
//o(n)

// int main(){
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x; cin>>x;
//     int leftPtr=0,rightPtr=n-1;
//     while(leftPtr<=rightPtr){
//         if(v[leftPtr]+v[rightPtr]==x){
//             cout<<"yes"<<endl;
//             return 0;
//         }
//         if(v[leftPtr]+v[rightPtr]<x){
//             leftPtr++;
//         }else rightPtr--;
//     }
//     cout<<"no"<<endl;
//     return 0;

// }

//q3 - same as before, just this time it's twosubstract
// #include <vector>

// int main(){
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x; cin>>x;
//     int leftPtr=0,rightPtr=1;
//     while(leftPtr<n && rightPtr<n){
//         if(abs(v[leftPtr]-v[rightPtr])==x){
//             cout<<"yes"<<endl;
//             return 0;
//         }
//         if(abs(v[leftPtr]-v[rightPtr])<x){
//             rightPtr++;
//         }else leftPtr++;
//     }
//     cout<<"no"<<endl;
//     return 0;

// }

//q4- return squared array in sorted , increasingform
// #include <vector>
// #include <algorithm>
// #include <cstdlib>

// int main(){
//     vector <int> v,res;
//     int n;
//     while(cin>>n){
//         v.push_back(n);
//     }
//     int leftptr=0,rightptr=v.size()-1;
//     while(leftptr<=rightptr){
//         if(abs(v[leftptr])>abs(v[rightptr])){
//             res.push_back(v[leftptr]*v[leftptr]);
//             leftptr++;
//         }else{
//             res.push_back(v[rightptr]*v[rightptr]);
//             rightptr--;
//         }
//     }
//     reverse(res.begin(),res.end());
//     for(int i:res) cout<<i<<" ";
//     return 0;
// }

//q5 - count twosum can be done how many times
// #include <vector>
// int main(){
//     int n,count=0;
//     cin>>n;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x; cin>>x;
//     int leftPtr=0,rightPtr=n-1;
//     while(leftPtr<rightPtr){
//         if(v[leftPtr]+v[rightPtr]==x){
//             count++;
//             leftPtr++;
//             rightPtr--;
//         }
//         else if(v[leftPtr]+v[rightPtr]<x){
//             leftPtr++;
//         }else rightPtr--;
//     }
//     cout<<count<<endl;
//     return 0;

// }

//q6-threesum , vector in incrementing sorted form, 3 elements are unequal

#include <vector>

int main(){
    vector <int> v;
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    
}
