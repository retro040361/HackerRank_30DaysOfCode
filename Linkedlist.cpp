#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
    Node *insert(Node *head, int data)
    {
        //Complete this method
        if (head == NULL)
        {
            head = new Node(data);
            return head;
        }

        Node *tmp = head;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new Node(data);

        return head;
        /*
            Node** pp = &head;          // pp is the pointer to the pointer head
            while(*pp)                  // While head is not null (the content of pp is not null)
                pp = &((*pp)->next);    // pp receive the address of the pointer to the next node
            *pp = new Node(data);       // In this moment the content of pp is the address to the last node
            return head;
        */
    }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}
/*



*/