#include "./main/stack_queue.h"
#include <iostream>
using namespace std;

int main() {
    Stack<int> *s = new Stack<int>();
    for(int i = 0; i < 5; i++) {
        s->push(rand() % 100);
    }
    for(int i = 0; i < 5; i++) {
        cout << s->pop() << " ";
    }
    return 0;
}