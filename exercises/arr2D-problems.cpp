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
// #include <algorithm>

// void rotate(vector <vector<int>> &v){
//     //transpose
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<i;j++){
//             swap(v[i][j],v[j][i]);
//         }
//     }
//     //reverse every row
//     for(int i=0;i<v.size();i++){
//         reverse(v[i].begin(),v[i].end());
//     }
//     return ;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector <vector<int>> v(n, vector <int> (n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>v[i][j];
//         }
//     }
//     rotate(v);
//     cout<<"-----------"<<endl;
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern spriral matrix :

// void printSpiral(vector <vector <int >> &v){
//     int left=0, right=v[0].size()-1, top=0,bottom=v.size()-1;

//     int r=v.size(), c= v[0].size();
//     int turn=0;
//     int x=0;
//     while(left<=right && top<=bottom){
//         if(turn ==0){
//             for(int i=left;i<=right;i++){
//                 cout<<v[top][i]<<" ";
//             }
//             top++;
//             turn++;
//         } else if(turn ==1){
//             for(int i=top;i<=bottom;i++){
//                 cout<<v[i][right]<<" ";
//             }
//             right--;
//             turn++;
//         }else if(turn ==2){
//             for(int i=right;i>=left;i--){
//                 cout<<v[bottom][i]<<" ";
//             }
//             bottom--;
//             turn++;
//         }else{
//             for(int i=bottom;i>=top;i--){
//                 cout<<v[i][left]<<" ";
//             }
//             left++;
//             turn=0;
//         }
//     }
    
// }

// int main(){
//     int r,c;
//     cin>>r>>c;
//     vector <vector <int>> v(r,vector <int> (c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){

//             cin>>v[i][j];
//         }
//     }
//     printSpiral(v);
//     return 0;
// }
//input - n, generate an matrix with 1-n^2 values in spiral form

// vector <vector <int>> genSpiralMatrix(int n){
//     vector <vector <int >> v(n, vector <int> (n));
//     int left=0, right=v[0].size()-1, top=0,bottom=v.size()-1;

//     int r=v.size(), c= v[0].size();
//     int turn=0;
//     int x=1;
//     while(left<=right && top<=bottom){
//         if(turn ==0){
//             for(int i=left;i<=right;i++){
//                 v[top][i]=x;
//                 x++;
//             }
//             top++;
//             turn++;
//         } else if(turn ==1){
//             for(int i=top;i<=bottom;i++){
//                 v[i][right]=x++;
//             }
//             right--;
//             turn++;
//         }else if(turn ==2){
//             for(int i=right;i>=left;i--){
//                 v[bottom][i]=x;
//                 x++;
//             }
//             bottom--;
//             turn++;
//         }else{
//             for(int i=bottom;i>=top;i--){
//                 v[i][left]=x;
//                 x++;
//             }
//             left++;
//             turn=0;
//         }
//     }
//     return v;
    
// }

// int main(){
//     int n;
//     cin>>n;
//     vector <vector <int>> v(n,vector <int> (n));

//     v=genSpiralMatrix(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//prefix sum for a rectange of given two points(l1,r1),(l2,r2)

int rectangleSum(vector <vector<int>> v, int l1,int r1, int l2,int r2){
    int res=0;
    for(int i=l1;l1<l2?i<=l2:i>=l2;i){
        for(int j=r1;r1<r2?j<=r2:j>=r2;j){
            res+=v[i][j];
            if(r1>r2) j--;
            else j++;
        }
        if(l1>l2){i--;
        }else i++;
    }
    return res;
}
//method2 using prefix sum on rows

vector <vector<int>> preSumRow(vector <vector<int>> v){
    int x=v.size() , y =v[0].size();
    for(int i=0;i<x;i++){
        for(int j=1;j<y;j++){
            v[i][j]+=v[i][j-1];
        }
    }
    return v;
}
//method 3 using prefix sum on rows and colums

void preSumColumn(vector <vector<int>> &v){
    int x=v.size() , y =v[0].size();
    for(int i=0;i<y;i++){
        for(int j=1;j<x;j++){
            v[j][i]+=v[j-1][i];
        }
    }
    return;
}

// int main(){
//     int r,c;
//     cin>>r>>c;
//     vector <vector<int>> matrix(r, vector<int> (c));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     int res;
//     int temp;
//     vector <vector<int>> resV(r,vector<int> (c));
//     resV=preSumRow(matrix);
//     preSumColumn(resV);
//     do{
//         cout<<"l1 r1 :";
//         int l1,r1,l2,r2;
//         cin>>l1>>r1;
//         cout<<"l2 r2: ";
//         cin>>l2>>r2;
//         // l1--; r1--; l2--; r2--;

//         // for(int i=l1;i<=l2;i++){
//         //     if(!(r1==0)){
//         //         res+=resV[i][r2]-resV[i][r1-1];
//         //     }else{
//         //         res+=resV[i][r2];
//         //     }
//         // }

//         // if(l2>l1 && r2>r1){//logic needs to be updated(this one holds !(l2>l1 && r2>r1) possibilities)
//         //     res=resV[l2][r2]-resV[l1][r1];
//         // }else if(l2>l1 && r1>r2){
//         //     res=resV[l2][r1]-resV[l1][r2];
//         // }else if(l1>l2 && r2>r1){
//         //     res=resV[l1][r2]-resV[l2][r1];
//         // }else{
//         //     res=resV[l1][r1]-resV[l2][r2];
//         // }
//         if(l1>0 && r1>0){
//             res=resV[l2][r2]-resV[l1-1][r2]-resV[l2][r1-1]+resV[l1-1][r1-1];
//         }else if(l1==0 && r1!=0){
//             res=resV[l2][r2]-resV[l2][r1-1];
//         }else if(l1!=0 && r1==0){
//             res=resV[l2][r2]-resV[l1-1][r2];
//         }else{
//             res=resV[l2][r2];
//         }

//         cout<<"sum is : "<<res<<endl;
//         cout<<"wannacontinue? ";
//         cin>>temp;
//     }while(temp==1);
//     // int res=rectangleSum(matrix,l1,r1,l2,r2);

//     return 0;
// }

