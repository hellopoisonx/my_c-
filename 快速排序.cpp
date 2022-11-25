//
//  快速排序.cpp
//  Test
//
//  Created by 夏泽羽 on 2022/11/18.
//

#include<iostream>
using namespace std;
int _count;
void quicksort(int * array,int left,int right);
int main(){
    int array[100000];
    cin >> _count;
    cout << endl;
    for(int i = 0; i < _count; i ++) cin >> array[i];
    cout << "Start sorting" << endl;
    quicksort(array,0,_count - 1);
    cout << "Finished" << endl;
    for(int i = 0; i < _count; i ++) cout << array[i] << " ";
    return 0;
}   
void quicksort(int * array, int left , int right){
    if(left >= right) return;
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
