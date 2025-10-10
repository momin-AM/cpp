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

// vector <vector<int>> triangle(int n){
//     vector <vector<int>> v(n);
//     for(int i=0;i<n;i++){
//         v[i].resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i){
//                 v[i][j]=1;
//             }else {
//                 v[i][j]=v[i-1][j]+v[i-1][j-1];
//             }
//         }
//     }
//     return v;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector <vector<int>> res;
//     res=triangle(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<res[i].size();j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//advanced problems on 2D arrays
// #include <iostream>
// using namespace std;

//given 2D boolean array, get index no. of the row with max 1's
// #include <vector>

// int maxRow(vector <vector<int>> &v,int a, int b){
//     int max=0,ind=-1;
//     for(int i=0;i<a;i++){
//         // int current=0;
//         for(int j=0;j<b;j++){
//             // if(v[i][j]==1){ //previous logic
//             //     current=v[i].size()-j;
//             //     break;
//             // }
//             //or
//             if(v[i][j]==1){
//                 return i;
//             }
//         }
//         // if(current>max){
//         //     max=current;
//         //     ind=i;
//         // }
//     }
//     return ind;
// }

// int leftMostRow(vector <vector<int>> &v){
//     int ind=-1,cInd=-1;
//     int j=v[0].size()-1;
//     while ((j>=0 && v[0][j]==1))
//     {
//         cInd=j;
//         j--;
//         ind=0;
//     }
//     for(int i=0;i<v.size();i++){
//         while(j>=0 && v[i][j]==1){
//             cInd=j;
//             j--;
//             ind=i;
//         }
//     }
//     return ind;
    
// }

// int main(){
//     int r,c;
//     cin>>r>>c;
//     vector <vector<int>> v(r, vector <int> (c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>v[i][j];
//         }
//     }
//     int res=leftMostRow(v);
    
//     cout<<res<<endl;
//     return 0;
// }

//rotating an matrix(square- n*n) to 90 degrees
#include <algorithm>

void rotate(vector <vector<int>> &v){
    //transpose
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    //reverse every row
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector <vector<int>> v(n, vector <int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    rotate(v);
    cout<<"-----------"<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
