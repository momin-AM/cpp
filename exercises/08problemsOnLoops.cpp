#include <iostream>
#include <cmath>
using namespace std;

//-------------COUNTING DIGITS OF N-------//

// int main(){
//     int n,digits=0;
//     cout<<"enter a number : ";
//     cin>>n;
//     while(n%10!=0){
//         digits++;
//         n/=10;
//     }
//     cout<<digits<<" digits."<<endl;
//     return 0;

// }

//-------------SUM of DIGITS of N-------//
// int main(){
//     int n,sum=0;
//     cout<<"enter a number :";
//     cin>>n;
//     while(n>0){
//         sum+=n%10;
//         n/=10;
//     }
//     cout<<"sum of digits of this number is : "<<sum<<endl;
//     return 0;
// }

//-------------REVERSE the DIGITS of N-------//

// int main(){
//     int n,reversed=0;
//     cout<<"enter a number : ";
//     cin>>n;
//     int temp=n;
    // while(n%10!=0){
    //     digits++;
    //     n/=10;
    // }
    // n=temp;
    // for(int j=digits;j>=1;j--){
    //     int x=(n%10)*pow(10,j-1);
    //     reversed+=x;
    //     n/=10;
    // }
//     while(n>0){
//         reversed=reversed*10+n%10;
//         n/=10;
//     }
//     cout<<"reversed number is : "<<reversed<<endl;
//     return 0;
// }


//-------------SUM of scertain series of N-------//
//sum=1-2+3-4...n----

// int main(){
//     int n,sum=0;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         if(i%2==0){
//             sum-=i;
//         }else {sum+=i;}
//     }
//     cout<<"sum of this finite series is: "<<sum<<endl;
//     return 0;
// }


//-------------PRINT FIRST N FACTORIAL NUMBERS-------//

// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//         cout<<"factorial of "<<i<<" is "<<fact<<endl;
//     }
//     return 0;
// }

//-------------POW fumc Implementation ------//

int main(){
    int a,b,res=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        res*=a;
    }
    cout<<res<<endl;
    return 0;

}
