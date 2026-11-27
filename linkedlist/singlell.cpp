// implementation of linked 
#include<iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};


class Linkedlinst{
    private:
    Node* head;
    int size = 0;

    public:
    Linkedlinst() {
        head = NULL;
    }

    // insert at the first
    void insertAtHead(int val) {
        Node* newnode = new Node(val);

        if(head == NULL){
            head = newnode;
            size++;
            return;
        }
        size++;
        newnode->next = head;
        head = newnode;
    }
    void insertAtEnd(int val) {
        Node* newnode = new Node(val);

        if(head == NULL) {
            size++;
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        
        size++;
        temp->next = newnode;

     }

    
     //  delete the linkedlist by position
     void deleteNthNode(int n) {
        if(size < n && n < 0) {
            cout << "Invalid position";
            return;
        }
        if(head == NULL) {
            cout << "Empty linkedlist";
            return;
        }
        if(n == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }


       int i = 0;
       Node* curNode = head;
       while(i < n -1) {
        if(curNode->next == NULL) {
            cout << "Position out of range";
            return;
        }
        curNode=curNode-> next;
       }
       if(curNode->next == NULL) {
        cout << "Position out of range";
        return;
       }
       Node* nodeToDelete = curNode->next;
       curNode->next = nodeToDelete->next;
       delete nodeToDelete;
       return;
     }

    //  checking if the next node exist or not;
    

    
    void deleteElement(int n) {
        if(head == NULL) {
            cout << "There is no element in node";
            return;
        }

        Node* temp = head;
        while(temp->next != NULL && temp->next->data != n) {
            temp = temp->next;
        }
        if(temp->next == NULL) {
            cout << "No element found" << endl;
            return;
        }
        Node* todeleteNode = temp->next;
        temp->next = todeleteNode->next;
        delete todeleteNode;
        return;
    }
    
     void display() {
        if(head == NULL) {
             cout << "There is no element in linkedlist";
             return;
        }
        Node* currentNode= head;
        while(currentNode != NULL) {
            cout << currentNode->data << "-->";
            currentNode = currentNode->next;
        } 
        cout << "end" << endl;
    }
};

int main() {
    Linkedlinst ll;
    ll.insertAtHead(10);
    ll.insertAtHead(11);
    ll.insertAtHead(12);
    ll.insertAtEnd(13);
    ll.display();

    ll.deleteNthNode(10);
    ll.display();
    return 0;
}