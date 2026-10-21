// Program for linked list operations
#include <iostream>
using namespace std;

// Node class definition 
class Node {
public:
    int data;
    Node* next;

   //constructor for Node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked list operations
class LinkedList {
private:
    Node* head;

public:
    //constructor for list
    LinkedList() {
        head = NULL;
    }

    // Insert a node at the end
    void insert(int val) {
        Node* p = new Node(val); // p is used for new node
        if (head == NULL) {
            head = p;
        } else {
            Node* q = head; // q is used for traversal
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
    }

    // Delete a node by value
    void remove(int val) {
        Node* p = NULL;
        Node* q = head;

        // If head node itself holds the value
        if (q!=NULL && q->data == val) {
            p = head;
            head = head->next;
            delete p;
            return;
        }

        // Traverse to find the node
        while (q->next != NULL) {
            if (q->next->data == val) {
                p = q->next;
                q->next = p->next;
                delete p;
                return;
            }
            q = q->next;
        }

        cout <<endl<< "Value " << val << " not found in the list.\n";
    }

    // Display the list
    void display() {
        cout<<endl<<"Linked List ";
        Node* q = head;
        while (q != NULL) {
            cout << q->data << " -> ";
            q = q->next;
        }
        //cout << "NULL\n";
    }
};

// Main function to test the linked list 1
int main() {
    LinkedList list;

    list.insert(3);
    list.insert(6);
    list.insert(9);
    list.display(); 
    
    list.insert(0);
    list.insert(33);
    list.insert(66);
    list.insert(99);
    list.insert(04);
     list.insert(8);
    list.display();
    
    list.remove(0);
    list.display(); 

    list.remove(04); 
    list.display();

    list.remove(8); 
    list.display();

    return 0;
}