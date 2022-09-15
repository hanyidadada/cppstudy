#ifndef LIST_H_
#define LIST_H_

typedef unsigned long Item;

struct Node
{
    Item value;
    Node *pre;
    Node *next;
};

class List
{
private:
    static const int MAX = 20;
    Node *list;
    int total;    
public:
    List();
    List(Item *newNode, int num);
    bool add(Item newNode);
    bool isEmpty(){ return total == 0;}
    bool isFull(){ return total == MAX;}
    void visit(void (*pf)(Item &));
    ~List();
};

#endif
