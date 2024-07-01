#include <iostream>
#define SPACE 10
using namespace std;

class tn {
public:
    int value;
    tn* left;
    tn* right;

    tn() {
        value = 0;
        left = NULL;
        right = NULL;
    }

    tn(int v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class bst {
public:
    tn* root;
    bst() {
        root = NULL;
    }

    bool isempty() {
        return root == NULL;
    }

    void insert(tn* nn) {
        if (root == NULL) {
            root = nn;
        } else {
            tn* temp = root;
            while (temp != NULL) {
                if (nn->value == temp->value) {
                    return;
                } else if (nn->value < temp->value && temp->left == NULL) {
                    temp->left = nn;
                    break;
                } else if (nn->value > temp->value && temp->right == NULL) {
                    temp->right = nn;
                    break;
                } else if (nn->value < temp->value) {
                    temp = temp->left;
                } else {
                    temp = temp->right;
                }
            }
        }
    }

    void print(tn* r, int space) {
        if (r == NULL)
            return;
        space += SPACE;
        print(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
            cout << " ";
        cout << r->value << "\n";
        print(r->left, space);
    }
    void pp(tn* r){
        if (root == NULL){
            return;
        }
        cout<<r->value;
        pp(r->left);
        pp(r->right);
    }
};

int main() {
    int op, val;
    bst o;
    tn* nn;

    do {
        cout << "1.insert 2.search 3.delete 4.print 5.clear 6.exit" << endl;
        cin >> op;
        switch (op) {
        case 0:
            break;
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            nn = new tn(val);
            o.insert(nn);
            break;
        case 2:
            // Implement search
            break;
        case 3:
            break;
        case 4:
            cout << "Binary Search Tree:" << endl;
            o.print(o.root, 0);
            break;
        case 5:
            // Implement clear
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (op != 6);
    return 0;
}
