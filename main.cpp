#include "./main/stack_queue.h"
#include <iostream>
using namespace std;

int main() {
    Stack<int> *s = new Stack<int>();
    Queue<int> *q = new Queue<int>();
    for(int i = 0; i < 5; i++) {
        s->push(i * i);
        q->push(i * i);
    }
    for(int i = 0; i < 5; i++) {
        cout << s->pop() << " ";
    }
    int top = 0;
    try {
        top = s->pop();
        cout << top << endl;
    }
    catch(string errString) {
        cout << endl << errString;
    }
    for(int i = 0; i < 5; i++) {
        cout << q->pop() << " ";
    }
    try {
        top = q->pop();
        cout << top << endl;
    }
    catch(string errString) {
        cout << endl << errString;
    }
    return 0;
}