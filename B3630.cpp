#include<iostream>
using namespace std;

int arr[1000001],ans[1000001],c,l;

int main(){
    cin >> c;
    for(int i = 1;i <= c;i ++) {
        cin >> arr[i];
        if(arr[i] == 0) ans[c-1] = i;
    }
    cin >> l;
    arr[0]=ans[0]=l;
    int s = l;
    int i = 1;
    while(i < c){
        int num = arr[s];
        ans[i] = num;
        s = ans[i];
        i ++;
    }
    for(int i = 0; i<c;i++) cout << ans[i] << " ";
}