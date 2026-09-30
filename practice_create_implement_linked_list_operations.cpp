// #include <iostream>
// using namespace std;

// struct Node
// {
//     /* data */
//     int data; // saman ke store kare 10 20
//     Node *next; //rassi
// };

// int main()
// {

//     Node *newNode = new Node();
//     newNode->data = 10;   // print 10
//     newNode->next = NULL; // think next is null now no value

//     cout << newNode->data << " -> ";

//     Node *secondNode = new Node();
//     secondNode->data = 20;
//     secondNode->next = NULL;

//     newNode->next = secondNode;

//     cout << secondNode ->data << " -> ";

//     Node *thirdNode = new Node();
//     thirdNode->data = 30;
//     thirdNode->next = NULL;

//     secondNode->next = thirdNode;

//     cout<< thirdNode->data << " -> ";

//     Node* fourNode = new Node();
//     fourNode->data = 40;
//     fourNode->next = NULL;

//     thirdNode->next = fourNode;

//     cout << fourNode->data << " -> ";

//     Node* fiveNode = new Node();
//     fiveNode->data = 50;
//     fiveNode->next = NULL;

//     fourNode->next = fiveNode;

//     cout<< fiveNode->data << " -> NULL";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Node
// {
//     /* data */
//     int data;   // saman 10 20 30
//     Node *next; // rassi
// };

// void insertAtEnd(Node *&head, int value)
// {
//     Node *newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != NULL)
//         temp = temp->next;
//     temp->next = newNode;
// }

// void insertAtBegining(Node *&head, int value)
// {
//     Node *newNode = new Node();
//     newNode->data = value;
//     newNode->next = head; // new rassi purane engine se jodi

//     head = newNode; // new dabba becomes engine
// }

// void display(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         /* code */
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *head = NULL; // shuru mein train khali
//     insertAtEnd(head, 10);
//     insertAtEnd(head, 20);
//     insertAtEnd(head, 30);
//     insertAtEnd(head, 40);
//     insertAtBegining(head, 5);
//     display(head);
//     return 0;
// }

#include<iostream>
using namespace std;

    struct Node
    {
        /* data */
        int data; //saman rakha 10 20 30
        Node *next; //rassi
    };

    void insertAtBeginning(Node* &head, int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;

        head = newNode;
    }

    void insertAtEnd(Node* &head, int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            /* code */
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
        {
            /* code */
            temp = temp->next;
        }
            temp->next = newNode;

        
        
    }
    void display(Node* head){
        Node* temp = head;
        while (temp != NULL)
        {
            /* code */
            cout<< temp->data << " -> ";
            temp = temp->next;
        }
        cout<< "NULL" << endl;
        
    }
    

int main(){
    Node* head = NULL;
    insertAtEnd(head,20);
    insertAtBeginning(head,10);
    display(head);


}