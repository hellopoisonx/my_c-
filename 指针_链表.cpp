#include<iostream>
#include<cstring>
using namespace std;
struct pri
{
    std::string name;
    int number;
    struct pri *next;  
};

int main(){
    using namespace std;
    struct pri  a,b,c,d;
    a.name="夏泽羽";
    a.number=38;
    b.name="xx";
    b.number=1;
    c.name="33";
    c.number=2;
    d.name="44";
    d.number=3;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&a;
    struct pri *head = &a; 
    while(head){
        cout << head->name << " " << head->number << " " << head->next << endl;
        head = head -> next;
    }
    return 0;
}
