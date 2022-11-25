//
//  main.cpp
//  Test
//
//  Created by 夏泽羽 on 2022/11/18.
//

#include <iostream>
using namespace std;
int book[100000] = {0},a;

int main(void){
    cin >> a;
    for(int i = 0; i < a; i ++){
        int j;
        cin >> j;
        book[j] ++;
    }
    for(int i = 0; i < 100000; i ++){
        if(book[i] == 1) cout << i << " ";
        else if(book[i] > 1){
            for(int j = 0; j < book[i]; j ++) cout << i << " ";
        }
    }
    return 0;
}
