#include "./main/stack_queue.cpp"

int main() {
    Stack<int> *s = new Stack<int>();
    for(int i = 0; i < 5; i++) {
        s->push(i);
    }
    cout << s->top();
    delete s;
    return 0;
}