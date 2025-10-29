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

//recursion  -6
#include <iostream>
using namespace std;

// //n integers, target int x, array a. return 1 if x in a
#include <vector>

bool isPresent(vector <int> &arr,int size, int target,int i){
    if(i==size){
        return 0;
    }
    return (arr[i]==target?1:0) || isPresent(arr,size,target,i+1);

}

int main(){
    int n=6, x;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>x;
    if(isPresent(v,n,x,0)) cout<<"present"<<endl;
    else cout<<"no"<<endl;
    return 0;
}

//return all subsets of a set
#include <vector>
#include <cmath>
void sumSubSets(int *arr, int ind, int sum, vector<int> &subs, int n){
    if(ind==n){
        subs.push_back(sum);
        return;
    }
    sumSubSets(arr,ind+1,sum+arr[ind],subs,n);
    sumSubSets(arr,ind+1,sum,subs,n);
}
int main(){
    int arr[3]={2,4,5};
    vector<int> subs;
    int size= sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    sumSubSets(arr,0,sum, subs, size);
    for(int i=0;i<subs.size();i++){
        cout<<subs[i]<<" ";
    }
    return 0;
}


//mXn grid, rules - go right or down . reach (m-1, n-1) from(0,0)... count successfull paths

int pathsCount(int m, int n, int rows, int columns){
    if (rows >= m || columns >= n)
        return 0;
    if(rows==m-1 && columns==n-1){
        return 1;
    }
    return pathsCount(m,n,rows+1, columns)+pathsCount(m,n,rows, columns+1);;
}

int main(){
    int m,n;
    cin>>m>>n;
    int res=pathsCount(m,n,0,0);
    cout<<res<<endl;
    return 0;
}


//recursion  -7
#include <iostream>
using namespace std;


//get all subsequences of a string
#include <vector>
void subsequences(string &str, int size, int ind, string res, vector <string> &vs){
    if(ind==size){
        vs.push_back(res);
        return;
    } 
    subsequences(str,size,ind+1, res+str[ind],vs);
    subsequences(str,size,ind+1, res, vs);

}

int main(){
    string str="abc", subs="";
    vector <string> vstr;
    subsequences(str,str.size(),0,subs, vstr);  
    for(string i : vstr) cout<< i<<" ";
    return 0;
}

//return all the letter combinations for numbers 2-9(keypad phone letter values)
#include <vector>

void letComb(string numstr,int i,int size,vector <string> &data, vector<string> &res, string tres){
    if(i==size){
        res.push_back(tres);
        return ;
    }
    int idata=numstr[i]-'0';
    letComb(numstr,i+1,size,data,res,tres+ data[idata][0]);
    letComb(numstr,i+1,size,data,res,tres+ data[idata][1]);
    letComb(numstr,i+1,size,data,res,tres+ data[idata][2]);  
    if(data[idata].size()==4){
        letComb(numstr,i+1,size,data,res,tres+ data[idata][3]);
    }
}

int main(){
    string nums="27";
    vector <string> data={"","","abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"}, vs;
    string tres;
    letComb(nums,0,nums.size(),data,vs, "");
    for(string i:vs){
        cout<<i<<" ";
    }

    return 0;
}
