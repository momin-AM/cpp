//pointers :
#include <iostream>
using namespace std;

int main(){
    int x=10;
    float y=3.14;
    int *ptr1=&x;
    float *ptr2;
    ptr2=&y;
    cout<<"ptr1 : "<<ptr1<<" ptr2 : "<<ptr2<<endl;
    //dereference
    cout<<*ptr1<<endl;
    return 0;
}
