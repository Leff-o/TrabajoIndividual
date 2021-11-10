//
// Created by ASUS on 10/11/2021.
//

#ifndef TRABAJOINDIVIDUAL_LINKEDLIST_H
#define TRABAJOINDIVIDUAL_LINKEDLIST_H

#include <vector>
#include "Node.h"
#include <string>
using namespace std;
template <class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void addNodeFirst( T );

    void addNodeLast( T );

    Node<T>* findNode(std::string);

    std::vector<T> getLinkedList();

    T* findInfo(std::string);

    void addNodeAfterTo(Node<T>*, T );

    void addNodeBeforeTo(Node<T>*, T );

    T* getObject(int);

    virtual ~LinkedList();

private:
    Node<T>* head;
};

#endif //TRABAJOINDIVIDUAL_LINKEDLIST_H





