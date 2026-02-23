#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* head = NULL;

/* ================= BASIC OPERATIONS ================= */

void insert_front(int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void insert_back(int x) {
    Node* newNode = new Node(x);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void insert_at(int pos, int x) {
    if (pos == 1) {
        insert_front(x);
        return;
    }
    Node* temp = head;
    for (int i = 1; temp && i < pos - 1; i++)
        temp = temp->next;
    if (!temp) return;
    Node* newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_at(int pos) {
    if (!head) return;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for (int i = 1; temp->next && i < pos - 1; i++)
        temp = temp->next;
    if (!temp->next) return;
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

/* ================= IMPORTANT CP FUNCTIONS ================= */

void reverse_iterative() {
    Node* prev = NULL;
    Node* curr = head;
    Node* nxt;
    while (curr) {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

Node* reverse_rec_util(Node* node) {
    if (!node || !node->next)
        return node;
    Node* newHead = reverse_rec_util(node->next);
    node->next->next = node;
    node->next = NULL;
    return newHead;
}

void reverse_recursive() {
    head = reverse_rec_util(head);
}

Node* find_middle() {
    if (!head) return NULL;
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool detect_cycle() {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int length() {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool search_value(int x) {
    Node* temp = head;
    while (temp) {
        if (temp->data == x) return true;
        temp = temp->next;
    }
    return false;
}

void remove_duplicates_sorted() {
    Node* temp = head;
    while (temp && temp->next) {
        if (temp->data == temp->next->data) {
            Node* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        } else {
            temp = temp->next;
        }
    }
}

void clear_list() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void print_list() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

/* ================= MAIN FUNCTION ================= */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Example usage
    insert_back(10);
    insert_back(20);
    insert_back(30);
    insert_front(5);
    print_list();        // 5 10 20 30

    insert_at(3, 15);    // Insert 15 at position 3
    print_list();        // 5 10 15 20 30

    delete_at(4);        // Delete node at position 4
    print_list();        // 5 10 15 30

    cout << "Length: " << length() << "\n"; // 4

    cout << "Middle: " << (find_middle() ? find_middle()->data : -1) << "\n"; // 15

    cout << "Search 15: " << (search_value(15) ? "Yes" : "No") << "\n"; // Yes

    reverse_iterative();
    print_list();        // 30 15 10 5

    reverse_recursive();
    print_list();        // 5 10 15 30

    clear_list();
    print_list();        // (empty)

    return 0;
}