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
void Stack<T>::push(T data) {
    typename iSLL<T>::Node *newNode = new typename iSLL<T>::Node(data, this->head);
    this->head = newNode;
    this->count++; 
}

template <class T>
T Stack<T>::top() {
    if(this->empty()) {
        T *blank = new T();
        return *blank;
    }
    return this->head->data;
}

template <class T>
T Stack<T>::pop() {
    if(this->empty()) {
        T *blank = new T();
        return *blank;
    }
    T temp = this->head->data;
    this->head = this->head->next;
    free(this->head);
    this->count--;
    return temp;
}

template <class T>
bool Stack<T>::empty() {
    if(!this->count) {
        return true;
    }
    return false;
}