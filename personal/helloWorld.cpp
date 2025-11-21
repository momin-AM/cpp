#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    string letters="abcdefghijklmnopqrstuvwxyz .,/;", res="", inp;
    getline(cin,inp);
    while(1){
    for(int i=0;i<inp.size();i++){
        for(int j=0;j<letters.size();j++){
            cout<<res;
            cout<<letters[j]<<endl;
            this_thread::sleep_for(chrono::milliseconds(10));
            if(letters[j]==inp[i]) {
             res+=letters[j];
             break;
            }
                
        }
    }
    cout<<" "<<endl;
   }
    return 0;
}
