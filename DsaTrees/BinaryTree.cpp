#include "BinaryTree.h"
void menu() {
    BinaryTree tree;
    char choice;
    int value;
    Node* node;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert a value into the tree" << endl;
        cout << "2. Search for a value in the tree" << endl;
        cout << "3. Check if a node has ancestors" << endl;
        cout << "4. Check if a node has children" << endl;
        cout << "5. Check if a node has siblings" << endl;
        cout << "6. Print ancestors of a node" << endl;
        cout << "7. Print children of a node" << endl;
        cout << "8. Print siblings of a node" << endl;
        cout << "9. Exit" << endl;

        cout << "Enter your choice (1-9): ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "Enter value to insert: ";
            cin >> value;
            tree.insert(value);
            cout << "Value " << value << " inserted into the tree." << endl;
            break;

        case '2':
            cout << "Enter value to search for: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                cout << "Value " << value << " found in the tree." << endl;
            }
            else {
                cout << "Value " << value << " not found in the tree." << endl;
            }
            break;

        case '3':
            cout << "Enter value to check for ancestors: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasAncestors(node)) {
                    cout << "Node " << value << " has ancestors." << endl;
                }
                else {
                    cout << "Node " << value << " does not have ancestors." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '4':
            cout << "Enter value to check for children: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasChildren(node)) {
                    cout << "Node " << value << " has children." << endl;
                }
                else {
                    cout << "Node " << value << " does not have children." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '5':
            cout << "Enter value to check for siblings: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasSiblings(node)) {
                    cout << "Node " << value << " has siblings." << endl;
                }
                else {
                    cout << "Node " << value << " does not have siblings." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '6':
            cout << "Enter value to print ancestors: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printAncestors(node);
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '7':
            cout << "Enter value to print children: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printChildren(node);
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '8':
            cout << "Enter value to print siblings: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printSiblings(node);
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case '9':
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a character between '1' and '9'." << endl;
            break;
        }

    } while (choice != '9'); 
}


int main() {
    menu();
    return 0;
}