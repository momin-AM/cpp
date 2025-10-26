//recursion  -5
#include <iostream>
using namespace std;

//FROG JUMP PROBLEM ----


//find common greatest divisor of x and y

int gcd(int x, int y){
    if(y==0) return x;
    return gcd(y,x%y);
}

int main(){
    int x,y;
    cin>>x>>y;
    int res=gcd(x>y?x:y,x<y?x:y);
    cout<<endl;
    cout<<res<<endl;
    return 0;
}

//check if the number is armstrong number
#include <cmath>

int myPow(int x, int power){
    if(power==0) return 1;
    if(power%2==0){
        int res=myPow(x,power/2);
        res*=res;
        return res;
    }else{
        return x* myPow(x,power-1);
    }
}
int sumPowered(int n, int power){
    if(n/10 == 0){
        return myPow(n%10,power);
    }
    return myPow(n%10,power)+ sumPowered(n/10,power);
}

int main(){
    int n;
    cin>>n;
    string strNum=to_string(n);
    int digits=strNum.length();
    int res= sumPowered(n,digits);
    if (res==n) cout<<"armstrong"<<endl;
    else cout<<"no"<<endl;
    return 0;
}

//FROG jump problem
#include <vector>

int minPoints(int n, vector <int> v, int i){
    if(i==n-1) return 0;
    if(i==n-2){
        return minPoints(n,v,i+1)+abs(v[i]-v[i+1]);
    }
    return  min((minPoints(n,v,i+1)+abs(v[i]-v[i+1])),(minPoints(n,v,i+2)+abs(v[i]-v[i+2])));
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res= minPoints(n,v,0);
    cout<<res<<endl;
    return 0;
}
