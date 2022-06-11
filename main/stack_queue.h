#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class iSLL {
protected:
    class Node;
    Node *head;
    int count;
    class Node {
        T data;
        Node *next;
        friend class SLL;
    public:
        Node() : next(NULL) {}
        Node(T data) : data(data), next(NULL) {}
        Node(T data, Node *next) : data(data), next(next) {}
    };
public:
    iSLL();
    ~iSLL();
    virtual void push(T data) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual bool empty() = 0;
};

template <class T>
class Stack : public iSLL<T>{
public:
    Stack();
    ~Stack();
    void push(T data);
    T pop();
    T top();
    bool empty();
};

template <class T>
class Queue : public iSLL<T>{
public:
    Queue();
    ~Queue();
    void push(T data);
    T pop();
    T top();
    bool empty();
};

#endif