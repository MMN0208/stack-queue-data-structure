#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class SLL {
    class Node;
    Node *head;
    int count;
    class Node {
        T data;
        Node *next;
    public:
        Node() : next(NULL) {}
        Node(T data) : data(data), next(NULL) {}
        Node(T data, Node const (*next)) : data(data), next(next) {}
    };
public:
    virtual void push(T data) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual bool empty() = 0;
};

template <class T>
class Stack : public SLL{
public:
    Stack();
    ~Stack();
    void insert(T data);
    T pop();
    T top();
    bool empty();
};

template <class T>
class Queue : public SLL{
public:
    Queue();
    ~Queue();
    void insert(T data);
    T pop();
    T top();
    bool empty();
};

#endif