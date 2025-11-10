#include <vector>
#include <string.h>
//sort in lexicographical order , in increasing order
void inLexicoOrder(int n, vector <string> &arr){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            
            if((strcmp(arr[j].c_str(),arr[min].c_str()))<0){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
