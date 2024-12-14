#include "misc.h"
#include "optimal.h"

int main(){

    LinkedList ll;

    for (int i = 0; i < 20; i+=2){
        ll.insertAtEnd(i);
    }

    ll.printList();
    ll.reverse();
    ll.printList();

    return 0;
}