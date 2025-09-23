#include <iostream>
using namespace std;

//----------rectangular----------//
// int main(){
//     int r,c;
//     string msg="";
//     cout<<"enter row-column : ";
//     cin>>r>>c;
//     for(int i=0;i<r;i++){
//         cout<<endl;
//         for(int j=0;j<c;j++){
//             cout<<"#";
//         }
//     }
//     return 0;
// }

//----------Hollow rectangular----------//

// int main(){
//     int r,c;
//     cout<<"enter row-column : ";
//     cin>>r>>c;
//     for(int i=1;i<=r;i++){       
//         for(int j=1;j<=c;j++){
//             if(j==1 || j==(c) || i==1 || i==r){
//                 cout<<"#";
//             }else {cout<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//----------TRIANGULAR----------//

// int main(){
//     int n;
//     cout<<"enter a numberv : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
// }

//-----reversed---//
// int main(){
//     int n;
//     cout<<"enter a numberv : ";
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
// }

//-----3a triangle---//

// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=(2*i-1);k++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
// }


//----------NUMERICAL patterns----------//

// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<j;
//         }
//         for(int k=1;k<i;k++){
//             cout<<k;
//         }
//         cout<<endl;

//     }
//      return 0;
// }

// ------Rectangular Hollow--------
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=6;j++){
//             if(j==1 || i==1 || j==6 || i==n){
//                 cout<<j;
//             }else{ cout<<" ";}
//         }
//         cout<<endl;
//     }
//     return 0;

// }

/*121212
  212121
  121212
  212121-----------*/

//   int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if((i+j)%2==0){
//                 cout<<1;
//             }else{cout<<2;}
//         }
//         cout<<endl;
//     }

//   }

// ------Numerical Triangle--------

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//-----3a triangle---------------

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         for(int l=i-1;l>=1;l--){
//             cout<<l;
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

//-----Hollow triangular same numbers on a row------

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            if(k==1 || k==(2*i-1) || i==1 || i==n){
                cout<<i;
            }else{cout<<" ";}
        }
        cout<<endl;
    }

    return 0;
}
