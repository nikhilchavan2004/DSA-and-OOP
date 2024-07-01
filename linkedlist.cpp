#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = nullptr;
    }

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() {
        head = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << "Node inserted at head: " << val << endl;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Node inserted at end: " << val << endl;
    }

    void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            cout << "Node inserted at position " << pos << ": " << val << endl;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
            cout << "Node inserted at position " << pos << ": " << val << endl;
        }
    }

    void deleteNode(int val) {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        if (temp->data == val) {
            head = temp->next;
            delete temp;
            cout << "Node deleted: " << val << endl;
            return;
        }

        while (temp != nullptr && temp->data != val) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Node not found: " << val << endl;
        } else {
            prev->next = temp->next;
            delete temp;
            cout << "Node deleted: " << val << endl;
        }
    }

    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void updateNode(int oldVal, int newVal) {
        Node* temp = head;
        bool found = false;

        while (temp != nullptr) {
            if (temp->data == oldVal) {
                temp->data = newVal;
                found = true;
                break;
            }
            temp = temp->next;
        }

        if (found) {
            cout << "Node updated from " << oldVal << " to " << newVal << endl;
        } else {
            cout << "Node with value " << oldVal << " not found" << endl;
        }
    }

    void joinLists(Node* secondListHead) {
        if (head == nullptr) {
            head = secondListHead;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = secondListHead;
        }
        cout << "Second list joined to the first list." << endl;
    }
};

int main() {
    SinglyLinkedList sll;
    int choice, val, pos, oldVal, newVal;
    SinglyLinkedList secondList;

    do {
        cout << "\nSingly Linked List Operations:" << endl;
        cout << "1. Insert at Head" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Insert at Position" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Count Nodes" << endl;
        cout << "6. Display List" << endl;
        cout << "7. Join Lists" << endl;
        cout << "8. Update Node" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at head: ";
                cin >> val;
                sll.insertAtHead(val);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> val;
                sll.insertAtEnd(val);
                break;
            case 3:
                cout << "Enter value and position to insert: ";
                cin >> val >> pos;
                sll.insertAtPosition(val, pos);
                break;
            case 4:
                cout << "Enter value to delete: ";
                cin >> val;
                sll.deleteNode(val);
                break;
            case 5:
                cout << "Number of nodes: " << sll.countNodes() << endl;
                break;
            case 6:
                cout << "Linked List: ";
                sll.display();
                break;
            case 7:
                cout << "Joining the second list to the first list." << endl;
                secondList.insertAtEnd(10); // Insert some values in the second list
                secondList.insertAtEnd(20);
                sll.joinLists(secondList.head);
                break;
            case 8:
                cout << "Enter value of node to update: ";
                cin >> oldVal;
                cout << "Enter new value: ";
                cin >> newVal;
                sll.updateNode(oldVal, newVal);
                break;
            case 9:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 9);

    return 0;
}
