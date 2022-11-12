#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


template<class T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template<class T>
QueueTp<T>::~QueueTp()
{
    Node *temp;
    while (front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<class T>
bool QueueTp<T>::enqueue(const T &item)
{
    if (isfull()) {
        return false;
    }
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL) {
        front = add;
    } else {
        rear->next = add;
    }
    rear = add;
    return true;
    
}

template<class T>
bool QueueTp<T>::dequeue(T &item)
{
    if (front == NULL) {
        return false;
    }
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0) {
        rear == NULL;
    }
    return false;
}


Worker::~Worker() { }

void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter work's ID: ";
    cin >> id;
    while (cin.get() != '\n') {
        continue;
    }
}

void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n') {
        continue;
    }
}

void Waiter::Set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "Category: waiter\n";
    Waiter::Data();
    Data();
}

char *Singer::pv[] = {"other", "alto", "contralto",
                      "soprano", "bass", "baritone", "tenor"};

void Singer::Data() const
{
    cout << "Vocal range: " << pv[voice] << endl;
}
void Singer::Get()
{
    cout << "Enter number for singer's vocal range: ";
    int i;
    for (i = 0; i < Vtypes; i++) {
        cout << i << ": " << pv[i] << "    ";
        if (i % 4 == 3) {
            cout << endl;
        }
    }
    if (i % 4 == 0) {
        cout << endl;
    }
    while (cin >> voice && (voice < 0 || voice >= Vtypes)) {
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    }
    while (cin.get() != '\n') {
        continue;
    }
}

void Singer::Set()
{
    cout << "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set()
{
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}
