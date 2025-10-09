//2D arrays problems
#include <iostream>
using namespace std;

//2D vectors --: 
#include <vector>

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector <vector<int>> v(n,vector <int> (m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pascal's triangle problem --:

// int fact(int n){
//     int res=1;
//     if(n==0 || n==1) return 1;
//     for(int i=2;i<=n;i++){
//         res*=i;
//     }
//     return res;
// }
// int comb(int n,int r){
//     int res=fact(n)/(fact(r)*fact(n-r));
//     return res;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector <vector<int>> v(n);
//     for(int i=0;i<n;i++){
//             for(int j=0;j<=i;j++){
//                 int temp=comb(i,j);
//                 v[i].push_back(temp);
//             }
        
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//also in simpler form -:

vector <vector<int>> triangle(int n){
    vector <vector<int>> v(n);
    for(int i=0;i<n;i++){
        v[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                v[i][j]=1;
            }else {
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector <vector<int>> res;
    res=triangle(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
