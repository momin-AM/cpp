//pointers :
#include <iostream>
using namespace std;

// int main(){
//     int x=10;
//     float y=3.14;
//     int *ptr1=&x;
//     float *ptr2;
//     ptr2=&y;
//     cout<<"ptr1 : "<<ptr1<<" ptr2 : "<<ptr2<<endl;
//     //dereference
//     cout<<*ptr1<<endl;
//     return 0;
// }

//pass by reference 

// void swap(int *x, int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     return  ;
// }

// int main(){
//     int x=9,y=10;
//     int *p1,*p2;
//     p1=&x;
//     p2=&y;
//     swap(p1,p2);
//     cout<<"x : "<<x<<" y : "<<y<<endl;
//     return 0;

// }

//first and last occurence of a in aaacad

// void updateOcc(string s, int *first, int *last){
//     int i=0;
//     while(i< s.length()){
//         if(s[i]=='a'){
//             *first=i;
//             break;
//         }
//     }
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]=='a'){
//             *last=i;
//             break;
//         }
//     }
// }

// int main(){
//     string s="aaacad";
//     char a='a';
//     int first=-1;
//     int last= -1;
//     updateOcc(s,&first,&last);
//     cout<<"first : "<<first<<" last : "<<last<<endl;
//     return 0;
// }


//pointer arithematic : 
//increment and decrement

// int main(){
//     int x=10;
//     int *ptr=&x;
//     for(int i=0;i<10;i++){
//         cout<<*(ptr--)<<endl;
//     }
//     return 0;
// }

// int main(){
//     int arr[2]={1,19};
//     int *ptr=&arr[0];
//     cout<<*ptr++<<endl;
//     return 0;
// }


//arrays as pointers :

// void print(int *arr,int n){
//     for (int i=0;i<n;i++){
//         cout<<*(arr++)<<endl;
//     }
//     return ;
// }
// int main(){
//     int arr[2]={1,2};
//     // cout<<*arr<<endl;
//     print(arr,2);
//     return 0;
// }

int main(){
    int arr[3]={1,2,3};
    int (*ptr)[3]=&arr;
    cout<<ptr+1<<" "<<arr<<endl;
    cout<<*ptr<<endl;
    return 0;
}

//pointers types:
#include <iostream>
using namespace std;

//1. wild pointer : declared but not intialised

int main(){
    int *ptrW;//wild pointer ->random address
    cout<<"wild :" <<ptrW<<endl;
    int *ptrN=NULL;//Null pointer
    //NULL=0='\0'
    cout<< "Null : " <<ptrN<<endl;
    //Null pointer dereference has segmentation fault
    //dangling pointer : when the var that it points to, gets deleted or disappears
    int *ptrD=NULL;
    {
        int x=10;
        ptrD=&x;
    }
    cout<<"dangling : "<<ptrD<<" : "<<*ptrD<<endl;

    //void/generic pointer :
    //these pointers can point to any type of value
    float f=10.9;
    void *ptrV=&f;
    cout<<"void : "<<ptrV<<endl;
    //void pointers can't be dereferenced 
    //but u ca, u have to typecast the ptr to dereference
    cout<<"void dereference :"<<*(float *)ptrV<<endl;

    return 0;
}

