#include "BinaryTree.h"
#include <limits>

void menu() {
    BinaryTree tree;
    int value;
    Node* node;
    string choice;

    do {
        cout << "\n--- Binary Tree Operations Menu ---" << endl;
        cout << "1. Insert a value into the tree" << endl;
        cout << "2. Search for a value in the tree" << endl;
        cout << "3. Check if a node has ancestors" << endl;
        cout << "4. Check if a node has children" << endl;
        cout << "5. Check if a node has siblings" << endl;
        cout << "6. Display ancestors of a node" << endl;
        cout << "7. Display children of a node" << endl;
        cout << "8. Display siblings of a node" << endl;
        cout << "9. In-order traversal" << endl;
        cout << "10. Pre-order traversal" << endl;
        cout << "11. Post-order traversal" << endl;
        cout << "12. Exit" << endl;

        cout << "-----------------------------------" << endl;
        cout << "Please enter your choice (1-12): ";

        // Input validation
        while (true) {
            cin >> choice;
           
            if (choice == "1" || choice == "2" || choice == "3" || choice == "4" || choice == "5" || choice == "6" ||
                choice == "7" || choice == "8" || choice == "9" || choice == "10" || choice == "11" || choice == "12") {
                break; 
            }
            else {
                cout << "Invalid choice! Please enter a number between 1 and 12: ";
            }
        }

        
        int numChoice = stoi(choice);  

        switch (numChoice) {
        case 1:
            cout << "Enter the value to insert into the tree: ";
            cin >> value;
            tree.insert(value);
            cout << "Value " << value << " successfully inserted into the tree." << endl;
            break;

        case 2:
            cout << "Enter the value to search for in the tree: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                cout << "Value " << value << " found in the tree." << endl;
                cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
            }
            else {
                cout << "Value " << value << " not found in the tree." << endl;
            }
            break;

        case 3:
            cout << "Enter the value to check if it has ancestors: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasAncestors(node)) {
                    cout << "Node " << value << " has ancestors." << endl;
                    cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
                }
                else {
                    cout << "Node " << value << " does not have ancestors (it might be the root)." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 4:
            cout << "Enter the value to check if it has children: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasChildren(node)) {
                    cout << "Node " << value << " has children." << endl;
                    cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
                }
                else {
                    cout << "Node " << value << " does not have children." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 5:
            cout << "Enter the value to check if it has siblings: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                if (tree.hasSiblings(node)) {
                    cout << "Node " << value << " has siblings." << endl;
                    cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
                }
                else {
                    cout << "Node " << value << " does not have siblings." << endl;
                }
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 6:
            cout << "Enter the value to display its ancestors: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printAncestors(node);
                cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 7:
            cout << "Enter the value to display its children: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printChildren(node);
                cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 8:
            cout << "Enter the value to display its siblings: ";
            cin >> value;
            node = tree.search(value);
            if (node) {
                tree.printSiblings(node);
                cout << "This node is the " << tree.getNodePosition(node) << "." << endl;
            }
            else {
                cout << "Node with value " << value << " not found." << endl;
            }
            break;

        case 9:
            cout << "In-order traversal: ";
            tree.inorder();
            break;

        case 10:
            cout << "Pre-order traversal: ";
            tree.preorder();
            break;

        case 11:
            cout << "Post-order traversal: ";
            tree.postorder();
            break;

        case 12:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 12." << endl;
            break;
        }

    } while (choice != "12");
}

int main() {
    menu();
    return 0;
}
