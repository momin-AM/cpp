//basic problem solving in arrays
#include <iostream>
using namespace std;

//find the total number of pairs in the array
//whose sum is equal to x
// int main(){
//     int arr[8]={1,2,3,4,5,6,7,8},x,count=0;
//     cin>>x;
//     for(int i=0;i<8;i++){
//         for(int j=i+1;j<8;j++){
//                 if(arr[j]+arr[i]==x){
//                     cout<<arr[j]<<"+"<<arr[i]<<"   ";
//                     count++;
//                 }
//             }
//     }
//     cout<<endl<<count<<endl;
//     return 0;
// }

//same thing as before but for triplets

// int main(){
//     int arr[6]={3,1,2,4,0,6},x,counts=0;
//     cin>>x;
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             for(int k=j+1;k<6;k++){
//                 if(i+j+k==x){
//                     cout<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<"   ";
//                     counts++;
//                 }
//             }
//         }
//     }
//     cout<<endl<<counts<<endl;
//     return 0;
// }

/*find the number in a unique array where all the elements are being repeated but not that unique one*/

// int main(){
//     int arr[7]={1,2,3,4,1,2,3};
//     for(int i=0;i<7;i++){
//         bool unique=true;
//         for(int j=0;j<7;j++){
//             if(i!=j && arr[i]==arr[j]) unique=false;
//         }
//         if(unique) cout<<arr[i]<<endl;
//     }
//     return 0;
// }
