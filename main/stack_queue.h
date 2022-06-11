#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

template <class T>
class Node;

template <class T>
class iSLL {
public:
    virtual void push(T data) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual bool empty() = 0;
    virtual void clear() = 0;
protected:
    Node<T> *head;
    int count;
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
    void clear();
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
    void clear();
};

template <class T>
class Node {
    T data;
    Node *next;
    friend class iSLL<T>;
    friend class Stack<T>;
    friend class Queue<T>;
public:
    Node() : next(0) {}
    Node(T data) : data(data), next(0) {}
    Node(T data, Node *next) : data(data), next(next) {}
};

#endif