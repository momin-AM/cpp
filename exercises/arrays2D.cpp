//2d arrays
#include <iostream>
using namespace std;

//1. multiplication of 2 matrices

// int main(){
//     int r1,c1;
//     cin>>r1>>c1;
//     int arr1[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     cout<<"array 2 : ";
//     int r2,c2;
//     cin>>r2>>c2;
//     if(c1!=r2){
//         cout<<"invalid column and rows for mul";
//         return 0;
//     }
//     int arr2[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>arr2[i][j];
//         }
//     }
//     int res[r1][c2];
//     for(int i=0;i<r1;i++){//logic
//         for(int j=0;j<c2;j++){
//             int temp=0;
//             for(int k=0;k<c1;k++){
//                 temp+=arr1[i][k]*arr2[k][j];
//             }
//             res[i][j]=temp;
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//2. transpose of a matrix

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c],res[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            res[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------"<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
