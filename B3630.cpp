#include<iostream>
#include<malloc.h>
using namespace std;
struct a{
    int id;
    struct a *next;
};
int N;
int main(){
    cin >> N;
    struct a b[1000001];
    for(int i = 1; i <= N; i++){
        int temp;
        cin >> temp;
        b[i].id = i;
        if(temp == 0){
            b[i].next= &b[0];
            continue;
        }
        b[i].next=&b[temp];
    }
    int first;
    cin >> first;
    //cout << head->id << " " << head->next;
    struct a *head = &b[first];

    for(int i = 1; i < N; i++){
        cout << head->id << " ";
        head = head->next;
    }
    cout << head->id;
    return 0;
}