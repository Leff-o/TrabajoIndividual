//
// Created by ASUS on 10/11/2021.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL ? true : false;
}

template<class T>
void LinkedList<T>::addNodeFirst(T info) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        nodeNew->next = head;
        head = nodeNew;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    Node<T> *aux = head;
    std::vector<T> out;

    while (aux != NULL) {
        out.push_back(aux->info);
        aux = aux->next;
    }

    return out;
}


template<class T>
void LinkedList<T>::addNodeLast( T info ) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpty()) {
        head = nodeNew;
    } else {
        Node<T>* aux = head;
        while( aux->next != NULL ){
            aux = aux->next;
        }
        aux->next = nodeNew;
    }
}

template<class T>
LinkedList<T>::~LinkedList() {
    Node<T>* aux;
    while( head != NULL ){
        aux = head;
        head = head->next;
        delete(aux);
    }
}

template<class T>
Node<T> *LinkedList<T>::findNode(std::string ID) {
    Node<T>* aux = head;
    while( aux != NULL ){
        if( ID.compare( aux->info.getId( ) ) == 0 ){
            return aux;
        }
        aux = aux->next;
    }

    return NULL;
}

template<class T>
T *LinkedList<T>::findInfo(std::string ID) {
    Node<T>* aux = head;
    while (aux != NULL)
    {
        if (ID.compare(aux->info.getId()) == 0)
        {
            return &aux->info;
        }
        aux = aux->next;
    }

    return NULL;
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *node, T mouse) {
    if (isEmpty()){
        head = new Node<T>(mouse);
    }else{
        if (node == head){
            addNodeFirst(mouse);
        }else{
            Node<T>* aux = head;
            while (aux->next != node){
                aux = aux->next;
            }
            Node<T>* newNode = new Node<T>(mouse);
            newNode->next = aux->next;
            aux->next=newNode;
        }
    }
}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *node, T mouse) {
    Node<T>* newNode = new Node<T>(mouse);
    if (isEmpty()){
        head = newNode;
    }else{
        newNode->next=node->next;
        node->next=newNode;
    }
}

template<class T>
T *LinkedList<T>::getObject(int num) {
    if (isEmpty()){
        return NULL;
    }else{
        Node<T>* aux = head;
        int counter=0;
        while (aux!=NULL){
            if (counter==num){
                return &aux->info;
            }
            aux = aux->next;
            counter++;
        }
    }
    return nullptr;
}

