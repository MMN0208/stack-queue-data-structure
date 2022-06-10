#include "stack_queue.h"

template <class T>
Stack<T>::Stack() {
    this->head = NULL;
    this->count = 0;
}

template <class T>
Stack<T>::~Stack() {
    while(!this->empty()) {
        this->pop();
    }
}

template <class T>
void Stack<T>::insert(T data) {
    Node *newNode = new Node(data, this->head);
    this->head = newNode;
    this->count++; 
}

template <class T>
T Stack<T>::top() {
    if(this->empty()) {
        T *blank = new T();
        return *blank;
    }
    return head->data;
}

template <class T>
T Stack<T>::pop() {
    if(this->empty()) {
        T *blank = new T();
        return *blank;
    }
    T temp = head->data;
    head = head->next;
    free(head);
    count--;
    return temp;
}

template <class T>
bool Stack<T>::empty() {
    if(!count) {
        return true;
    }
    return false;
}