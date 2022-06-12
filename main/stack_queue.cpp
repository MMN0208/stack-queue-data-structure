#include "stack_queue.h"
#include <iostream>
using namespace std;

template <class T>
Stack<T>::Stack() {
    this->head = NULL;
    this->tail = NULL;
    this->count = 0;
}

template <class T>
Stack<T>::~Stack() {
    this->clear();
}

template <class T>
void Stack<T>::push(T data) {
    this->head = new Node<T>(data, this->head);
    if(!this->head->next) {
        this->tail = this->head;
    }
    this->count++; 
}

template <class T>
T Stack<T>::top() {
    if(this->empty()) {
        throw string("Stack is empty!\n");
    }
    return this->head->data;
}

template <class T>
T Stack<T>::pop() {
    if(this->empty()) {
        throw string("Stack is empty!\n");
    }
    Node<T> *current = this->head;
    T temp = current->data;
    this->head = this->head->next;
    free(current);
    this->count--;
    return temp;
}

template <class T>
int Stack<T>::size() {
    return this->count;
}

template <class T>
bool Stack<T>::empty() {
    if(!this->size()) {
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

template <class T>
Queue<T>::Queue() {
    this->head = NULL;
    this->tail = NULL;
    this->count = 0;
}

template <class T>
Queue<T>::~Queue() {
    this->clear();
}

template <class T>
void Queue<T>::push(T data) {
    if(!this->head) {
        this->head = new Node<T>(data);
        this->tail = this->head;
    }
    else {
        this->tail->next = new Node<T>(data);
        this->tail = this->tail->next;
    }
    this->count++;
}

template <class T>
T Queue<T>::top() {
    if(this->empty()) {
        throw string("Queue is empty!\n");
    }
    return this->head->data;
}

template <class T>
T Queue<T>::pop() {
    if(this->empty()) {
        throw string("Queue is empty!\n");
    }
    Node<T> *current = this->head;
    T temp = current->data;
    this->head = this->head->next;
    free(current);
    this->count--;
    return temp;
}

template <class T>
bool Queue<T>::empty() {
    if(!this->size()) {
        return true;
    }
    return false;
}

template <class T>
int Queue<T>::size() {
    return this->count;
}

template <class T>
void Queue<T>::clear() {
    while(!this->empty()) {
        this->pop();
    }
    return;
}

template class Stack<int>;
template class Stack<float>;
template class Stack<double>;
template class Queue<int>;
template class Queue<float>;
template class Queue<double>;