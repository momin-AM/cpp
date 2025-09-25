#include <iostream>
#include <cmath>
using namespace std;
//-------------any base to decimal AND decimal to any base------------------//
int convertBaseToDecimal(int base,int number ){
    int result=0,i=0;
    while(number>0){
        result+=(number%10)*pow(base,i);
        number/=10;
        i++;
    }
    return result;
}
int convertDecimalToBase(int base,int number){
    int result=0,i=0;
    while ((number!=0))
    {
        result+=pow(10,i)*(number%base);
        i++;
        number/=base;
    }
    return result;
    

}

int main(){
   int a,b,choice,result;
   
   do{
    cout<<"1. To Decimal 2.decimal To any Base (0 to stop) :";
    cin>>choice;
    if(choice==0) break;
    else if(choice==1){
        cout<<"enter <base> <number> : ";
        cin>>a>>b;
        result=convertBaseToDecimal(a,b);
        cout<<"result : "<<result<<endl;
    }else{
        cout<<"enter <base> <number> : ";
        cin>>a>>b;
        int result=convertDecimalToBase(a,b);
        cout<<"result is : "<<result<<endl;
    }
}while(1);
   


}
