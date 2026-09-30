// Program to create and implement all the operations of a linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;   // dabbe ke anadar ka saman
    Node *next; // agle dabbe ka pata
};
// first operation train ko dikhana
void display(Node *head)
{
    Node *temp = head; // ek aur ungli banayi
    cout << "Meri train: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // agle dabbe par jao
    }
    cout << "NULL" << endl;
}

// Dusra Operation - Aakhir mein jodna
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        /* code */
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) // akhri dabbe tak jao
    {
        /* code */
        temp = temp->next;
    }
    temp->next = newNode; // akhri ko naye se jod diya
}

// Teesra operation - shuru me jodna
void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head; // naye ki rassi purane head se jodi
    head = newNode;       // head ab naya ban gaya
}

void deleteFromBeginning(Node *&head)
{
    if (head == NULL)
    {
        /* code */
        cout << "Train khali hai" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    cout << "Shuru wala dabba delete ho gaya" << endl;
}

void deleteFromEnd(Node *&head)
{
    if (head == NULL)
    {
        /* code */
        cout << "Train khali hai" << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
        /* code */
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}
int main()
{
    Node *head = NULL; // shuruat khali train se
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    display(head);

    insertAtBeginning(head, 5);
    cout << "5 shuru me joda: ";
    display(head);

    insertAtEnd(head, 40);
    cout << "40 aakhir mein joda: " << endl;
    display(head);

    deleteFromBeginning(head);
    display(head);

    deleteFromEnd(head);
    display(head);

    return 0;
}
