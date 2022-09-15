#include <iostream>
#include "list.h"

List::List()
{
    list = NULL;
    total = 0;
}

List::List(Item *newNode, int num)
{
    total = num;
    for (int i = 0; i < total; i++) {
        Node *temp = new Node;
        temp->value = newNode[i];
        if (i == 0) {
            list = temp;
            list->next = temp;
            list->pre = temp;
            temp = NULL;
            list = list->next;
            continue;
        }
        list->next->pre =temp;
        temp->next = list->next;
        temp->pre = list;
        list->next = temp;
        list = list->next;
        temp = NULL;        
    }
    list = list->next;
}
bool List::add(Item newNode)
{
    Node *temp = new Node;
    temp->value = newNode;
    if (list == NULL) {
        list = temp;
        list->next = temp;
        list->pre = temp;
        total += 1;
        temp = NULL;
        return true;
    }
    list = list->pre;
    temp->next = list->next;
    temp->pre = list;
    list->next = temp;
    list->next->pre = temp;
    list = temp->next;
    total += 1;
    return true;
}

void List::visit(void (*pf)(Item &))
{
    Node *temp = list;
    for (int i = 0; i < total; i++) {
        pf(temp->value);
        temp = temp->next;
    }
}
List::~List()
{
    Node *temp = list->pre;
    if (total == 1){
        delete list;
    }
    for (int i = 0; i < total; i++) {
        temp->pre->next = list;
        temp->next->pre = temp->pre;
        temp->next = temp->pre = NULL;
        delete temp;
        temp = list->pre;
    }    
}
