//prefix sum
#include <iostream>
using namespace std;

//prefix sum of an array without creating anotherarray
// #include <vector>
// int main(){
//     int n;
//     cin>>n;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//     }
//     for(int i=1;i<=v.size();i++){
//         v[i]+=v[i-1];
//     }
//     for(int i:v) cout<<i<<" ";
//     return 0;
// }

//if sub array's sum is equal - use prefix sum and suffix sum
// #include <vector>
// void equalCheck(vector <int> v){
//     int arrSum = 0;
//     for(int i = 0; i < v.size(); i++){
//         arrSum += v[i];
//     }
//     int prefixSum = 0;
//     for(int i = 0; i < v.size(); i++){
//         prefixSum += v[i];
//         int suffixSum = arrSum - prefixSum;
//         if(prefixSum == suffixSum){
//             cout << "true" << endl;
//             return;
//         }
//     }
//     cout << "False" << endl;
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector <int> v;
//     for(int i=0;i<n;i++){
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//     }
//     equalCheck(v);
//     return 0;
    
// }

//print sum of values given in a certain range of indices(use prefixSum)
#include <vector>

void prefixSum(vector <int> &v){
    for(int i=0;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return;
}
int main(){
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        v.push_back(temp);
    }
    prefixSum(v);
    char x;
    do{
        int a, b;
        cout << "enter indices a b : ";
        cin >> a >> b;
        cout << "sum is : " << v[b-1] - v[a] << endl;//indexing starts from 1 for user frindlyness
        cout << "y/n : ";
        cin >> x;
    }while(x == 'y');
    return 0;
}
