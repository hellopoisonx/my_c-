#include<iostream>
using namespace std;

int main(){
    int array[10000],m;
    cin >> m;
    for(int k = 0; k < m;k ++){
        cin >> array[k];
    }
    for(int i = m - 1; i >= 0; i --){
        for(int j = 0; j < i;j ++){
            if(array[j] > array[j + 1]){
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
            else continue;
        }
    }
    cout << endl;
    for(int i = 0; i < m;i ++) cout << array[i] << endl;
    return 0;
}