/*
 * File: 1.cpp for LinkedList Problem
 * ----------------------------------------------
 * This program judges whether the list can be cut into
 * three segments with equal sums of internal elements.
 */

#include "console.h"
#include "vector.h"
using namespace std;

struct ListNode
{
    int data;
    ListNode * next;
};

bool separable(ListNode* list)
{
    (void) list;  // you may delete this line
    // TODO

    // your task is to implement this function

    // fill your code here

    return false; // you may delete this line
}

ListNode* createLinkedList(const Vector<int>& source)
{
    ListNode *head = nullptr, *current = nullptr;
    for (int num : source)
    {
        ListNode* p = new ListNode;
        p->data = num;
        p->next = nullptr;

        if(current)
        {
            current->next = p;
            current = p;
        }
        else
        {
            head = current = p;
        }
    }
    return head;
}

void printLinkedList(ListNode *list)
{
    cout << "{";
    if(list)
    {
        cout << list->data;
        list = list->next;
        while(list)
        {
            cout << " -> " << list->data;
            list = list->next;
        }
    }
    cout << "}";
}

void freeLinkedList(ListNode *list)
{
    while(list)
    {
        ListNode *tmp = list;
        list = list->next;
        delete tmp;
    }
}

int main()
{
    cout << "Problem 1 - LinkedList Test" << endl <<endl;

    Vector<Vector<int>> source_vectors = {
            {1,2,3,4,2,1,5},
            {1,2,3,4,2,6},
            {1,2,3,4,2,1,2}
        };

    for(Vector<int>& source : source_vectors)
    {
        ListNode* list = createLinkedList(source);
        printLinkedList(list);
        cout << " is " << (separable(list) ? "separable" : "non-separable") << endl;
        freeLinkedList(list);
    }

    return 0;
}

