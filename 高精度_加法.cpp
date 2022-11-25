#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=0,temp=0;
    string a,b;
    int ans[100000]={0};
    int len_a,len_b;
    cin >> a >> b;
    len_a = a.length();
    len_b = b.length();
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i = 0; i < max(len_a,len_b); i ++){
        int c = a[i] - '0',d = b[i] - '0';
        int res = c + d;
        temp = res / 10;
        r = res % 10;
        ans[i] += r;
        ans[i + 1] += temp; 
    }
    int x = max(len_a,len_b);
    for(int i = x;i >= 0; i --){
        if(i==x && ans[i] == 0) continue;
        cout << ans[i] ;
    }
    return 0;
}