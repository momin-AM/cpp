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
// #include <climits> 
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
// int main(){
//     int arr[5]={5,5,5,5,5},biggest=arr[0],index,second=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>=biggest) biggest=arr[i];
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]>=second && arr[i]!=biggest) second=arr[i];
//     }
//     cout<<second<<endl;
//     return 0;
// }

//rotating an array with k numbers

// int main(){
//     int arr[]={1,2,3,4,5},ansarr[5],k;
//     cin>>k;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         ansarr[(i+k)%size]=arr[i];
//     }
//     for(int i:ansarr) cout<<i<<" ";
//     return 0;
// }

//doing this without creating an extra array
// #include <vector>
// #include <algorithm> 
// int main(){
//     vector <int> v;
//     int k;
//     cin>>k;
//     for(int i=1;i<=5;i++) v.push_back(i);
//     k=k%v.size();
//     reverse(v.begin(),v.end());
//     reverse(v.begin(),v.begin()+k);
//     reverse(v.begin()+k,v.end());
//     for(int i:v) cout<<i<<" ";
//     return 0;
// }

//if an element present in an array(how many times) or not(production grade)
#include <vector>
int main(){
    int n;
    cin>>n;
    vector <int> v;
    int userElement;
    for(int i=0;i<n;i++){
        cin>>userElement;
        v.push_back(userElement);
    }
    const int N=1e5;
    vector <int> freq(N,0);
    for(int i:v){
        freq[i]++;
    }
    int query;
    char again;
    do{
        cout<<"enter queries :";
        cin>>query;
        cout<<"present "<<freq[query]<<" times"<<endl;
        cout<<"search again? y or n : ";
        cin>>again;
    }while(again=='y');
    return 0;
}
