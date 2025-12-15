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

// #include <iostream>
// #include <string>
// #include <thread>
// #include <chrono>
// using namespace std;

// int main(){
//     string letters="abcdefghijklmnopqrstuvwxyz .,/;<3", res="", inp, res2="";
//     // getline(cin,inp);
//     inp="i love you ishamni <3";
//     // while(1){
//     for(int i=0;i<inp.size();i++){
//         for(int j=0;j<letters.size();j++){
//             cout<<res;
//             cout<<letters[j]<<endl;
//             this_thread::sleep_for(chrono::milliseconds(50));
//             if(letters[j]==inp[i]) {
//              res+=letters[j];
//              break;
//             }
                
//         }
//     }
// //     res+=" ";
// //     cout<<" "<<endl;
// //    }
//     for(int i=inp.size()-1;i>=0;i--){
//         for(int j=letters.size()-1;j>=0;j--){
//             cout<<res<<"    <-->   ";
//             cout<<res2;
//             cout<<letters[j]<<endl;
//             this_thread::sleep_for(chrono::milliseconds(50));
//             if(letters[j]==inp[i]) {
//              res2+=letters[j];
//              break;
//             }
                
//         }
//     }
//     for(int i=0;i<10;i++){
//         cout<<res<<"    <-->   ";
//         cout<<res2;
//         cout<<endl;
//     }
// string hello="Ummmaaaahhhhhh💋";
//     for(int i=0;i<10;i++){
//         for(int j=0;j<hello.size();j++){
//             cout<<hello[j]<<flush;
//             this_thread::sleep_for(chrono::milliseconds(100));
//         }
//         cout<<"     "<<flush;
//         if(i%3==0) cout<<endl<<flush;
//         this_thread::sleep_for(chrono::milliseconds(500));
//     }

//     return 0;
// }
  
