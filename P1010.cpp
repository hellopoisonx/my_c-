#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void ttoo(int x,int *ans){
    int i = 0;
    while(x >= 1){
        ans[i] = x % 2;
        x /= 2;
        i ++;
    }
}
int main(){
    int a,ans[10000];
    cin >> a;
    int i = 0;
    while(a >= 1){
        ans[i] = a % 2;
        a /= 2;
        i ++;
    }

}