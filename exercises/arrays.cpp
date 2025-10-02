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

/*find the  unique number in an array where all the elements are being repeated but not that unique one*/

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

//find the second largest element in the given array
#include <climits> 
// int largestIndex(int arr[],int size){
//     int biggest=arr[0],index;
//     for(int i=0;i<5;i++){
//         if(arr[i]>=biggest){
//             biggest=arr[i];
//             index=i;
//         }
//     }
//     return index;
// }
// int main(){
//     int arr[5]={1,5,3,5,5},biggest=arr[0],index,second;
    
//     index=largestIndex(arr,5);
//     biggest=arr[index];
//     arr[index]=INT_MIN;
//     for(int i=0;i<5;i++){
//         if(arr[i]==biggest) arr[i]=INT_MIN;
//     }
//     cout<<"second largest num is : "<<arr[largestIndex(arr,5)]<<endl;

//     return 0;
// }
//new try of the above
int main(){
    int arr[5]={5,5,5,5,5},biggest=arr[0],index,second=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>=biggest) biggest=arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]>=second && arr[i]!=biggest) second=arr[i];
    }
    cout<<second<<endl;
    return 0;
}
