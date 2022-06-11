#include "stack_queue.h"
#include <iostream>
using namespace std;

template <class T>
Stack<T>::Stack() {
    this->head = NULL;
    this->count = 0;
}

template <class T>
Stack<T>::~Stack() {
    this->clear();
}

template <class T>
void Stack<T>::push(T data) {
    Node<T> *newNode = new Node<T>(data, this->head);
    this->head = newNode;
    this->count++; 
}

template <class T>
T Stack<T>::top() {
    if(this->empty()) {
        cout << "Stack empty!";
        return -1;
    }
    return this->head->data;
}

template <class T>
T Stack<T>::pop() {
    if(this->empty()) {
        cout << "Stack empty!";
        return -1;
    }
    Node<T> *current = this->head;
    T temp = current->data;
    this->head = this->head->next;
    free(current);
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

template <class T>
void Stack<T>::clear() {
    while(!this->empty()) {
        this->pop();
    }
    return;
}

template class Stack<int>;