#include <bits/stdc++.h>
using namespace std;

/* ================= NODE STRUCTURE ================= */

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

/* ================= INSERT INTO BST ================= */

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

/* ================= SEARCH ================= */

bool search(Node* root, int key) {
    if (!root) return false;

    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

/* ================= FIND MIN ================= */

Node* findMin(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

/* ================= FIND MAX ================= */

Node* findMax(Node* root) {
    while (root && root->right)
        root = root->right;
    return root;
}

/* ================= HEIGHT ================= */

int height(Node* root) {
    if (!root) return -1;   // 0 if counting nodes
    return 1 + max(height(root->left), height(root->right));
}

/* ================= DFS TRAVERSALS ================= */

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

/* ================= LEVEL ORDER (BFS) ================= */

void levelOrder(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

/* ================= CHECK IF BST ================= */

bool isBST(Node* root, long long minVal, long long maxVal) {
    if (!root) return true;

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}

/* ================= DELETE NODE ================= */

Node* deleteNode(Node* root, int key) {
    if (!root) return NULL;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // 0 or 1 child
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // 2 children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

/* ================= INORDER SUCCESSOR ================= */

Node* inorderSuccessor(Node* root, Node* target) {
    if (target->right)
        return findMin(target->right);

    Node* successor = NULL;

    while (root) {
        if (target->data < root->data) {
            successor = root;
            root = root->left;
        }
        else if (target->data > root->data)
            root = root->right;
        else
            break;
    }

    return successor;
}

/* ================= MAIN (Example Usage) ================= */

int main() {
    Node* root = NULL;

    // Example insert
    vector<int> values = {20, 10, 30, 5, 15, 40};
    for (int x : values)
        root = insert(root, x);

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Height: " << height(root) << endl;

    cout << "Min: " << findMin(root)->data << endl;
    cout << "Max: " << findMax(root)->data << endl;

    return 0;
}




