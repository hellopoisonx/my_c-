#include<cmath>
#include<iostream>
using namespace std;
int   a[1000]= {0};
int N;

int quicksort(int * array, int left , int right){
    if(left >= right) return 0;
    int l = left, r = right;
    int a = array[l];
    while(l < r){
        while(array[r] >= a && l < r) r --;   //大于基准数，不交换，下标继续向左移动
        if(l < r) array[l] = array[r]; //小于基准数，交换，下标停止移动
        while(array[l] <= a && l < r) l ++; //小于基准数，不交换，下表继续向右移动
        if(l < r) array[r] = array[l]; //大于基准数，交换，下标停止移动
        if(l >= r) array[l] = a;
    }
    //if(l + 1 > right || r - 1< left) return 0;
    quicksort(array,left,r - 1);
    quicksort(array,r + 1,right);
}
int main(){
    cin >> N;
    for(int i = 0; i <= (pow(N,2)-N)/2 - 1; i ++) {
        cin >> a[i];
        //b[a[i]]++;    
    }
    cout << 1 << endl;
    int x = (pow(N,2)-N)/2 - 1;
    quicksort(a,0,x);
    cout << a[x - 1];
}