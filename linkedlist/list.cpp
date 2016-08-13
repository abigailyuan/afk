#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class List {
    struct Node {
        int x;
        Node *next;
    };

public:
    List() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void prepend(int val) {
        Node *n = new Node();
        n->x = val;
        n->next = head;
        head = n;
        if (tail == NULL) {
            tail = n;
        }
        size++;
    }

    void append(int val) {
        Node *n = new Node();
        n->x = val;
        n->next = NULL;
        if (tail == NULL) {
    		head = tail = n;
    	} else {
    		tail->next = n;
    		tail = n;
    	}
        size++;
    }

    int pop() {
        Node *n = head;
        int ret = n->x;
        head = head->next;
        delete n;
        size--;
        return ret;
    }

    void print() {
        Node *n = head;
        int count = 0;
        while (count < size) {
            cout << n->x;
            if (count == 0) {
                cout << "(HEAD)";
            }
            if (count == size - 1) {
                cout << "(TAIL)";
            }
            cout << " -> ";
            n++;
            count++;
        }
        cout << "NULL" << endl;
    }

private:
    Node *head;
    Node *tail;
    int size;
};


int main() {
    List list;

    list.append(5);
    list.append(10);
    list.append(20);

    list.print();

    cout << list.pop() << endl;
    cout << list.pop() << endl;
    cout << list.pop() << endl;
    // because there is no error checking in popValue(), the following
    // is undefined behavior. Probably the program will crash, because
    // there are no more values in the list.
    // cout << list.popValue() << endl;

    return 0;
}
