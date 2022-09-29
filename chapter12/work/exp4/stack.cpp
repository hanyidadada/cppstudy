#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
    size = MAX;
    pitems = new Item[size];
    top = -1;
}

Stack::Stack(const Stack &st)
{
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for (int i = 0; i < size; i++) {
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == -1;
}

bool Stack::isfull() const
{
    return top == size - 1 ;
}

bool Stack::push(const Item &item)
{
    if (top == size - 1) {
        return false;
    }
    top++;
    pitems[top] = item;
    return true;
}

bool Stack::pop(Item &item)
{
    if (top == -1) {
        return false;
    }
    item = pitems[top--];
    return true;
}

Stack & Stack::operator=(const Stack &st)
{
    if (this == &st) {
        return *this;
    }
    delete []pitems;
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for (int i = 0; i < size; i++) {
        pitems[i] = st.pitems[i];
    }
    return *this;
}

