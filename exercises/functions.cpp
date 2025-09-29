// C++ functions
#include <iostream>
using namespace std;

//---------------Function prototype-----------------//
// int add(int , int);

// int main(){
//     cout<<add(4,5);
//     return 0;
// }

// int add(int a, int b){
//     return a+b;
// }

//---------------ex-q4(odds)-college wallah -----------------//

// void oddNums(int lower,int upper){
//     for(int i=lower;i<=upper;i++){
//         if(i%2!=0) cout<<i<<" ";
//     }
//     return ;
// }
// int main(){
//     int start,end;
//     cin>>start>> end;
//     oddNums(start,end);
//     return 0;
// }

//---------------ex-q5(primes)-college wallah -----------------//
// #include <cmath>
// bool isPrime(int n){
//     bool isTrue=1;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) isTrue=0;
//     }
//     if(n==1 || n==0) isTrue=0;
//     return isTrue;
// }
// int main(){
//     int start,end;
//     bool isPrimeBool;
//     cin>>start>>end;
//     for(int i=(start);i<=end;i++){
//         isPrimeBool=isPrime(i);
//         if(isPrimeBool) cout<<i<<" ";

//     }
//     return 0;
// }

//---------------Var scope--------------//
//Global variable
// int n=10;

// void changeTen(){
//     n=9;
//     cout<<n<<endl;
//     return;
// }
// void changeLocalTen(int m){
//     m=9;
//     cout<<m<<endl;
//     return;
// }
// int main(){
//     int m=10;
//     cout<<m<<endl;
//     changeLocalTen(m);
//     cout<<m<<endl;
//     cout<<n<<endl;
//     changeTen();
//     cout<<n<<endl;

//     return 0;
// }

//---------------Pass by Value--------------//
// void sum(int a,int b){
//     a++;
//     b+=2;
//     cout<<a<<b<<endl;
//     return;
// }

// int main(){
//     int a=2,b=4;
//     sum(a,b);
//     cout<<a<<b<<endl;
//     return 0;
// }

//---------------Pass by Reference--------------//

// void sum(int &a,int &b){
//     a++;
//     b+=2;
//     cout<<a<<b<<endl;
//     return ;
// }

// int main(){
//     int a=2,b=4;
//     sum(a,b);
//     cout<<a<<b<<endl;
//     return 0;

// }
