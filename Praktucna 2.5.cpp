#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double averageScore;
};

struct Node {
    Student data;
    Node* next;
};

void push(Node*& head, string name, double score) {
    Node* newNode = new Node;
    newNode->data.name = name;
    newNode->data.averageScore = score;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void sortList(Node* head) {
    if (head == nullptr) return;

    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data.averageScore < ptr1->next->data.averageScore) {
                swap(ptr1->data, ptr1->next->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "Name: " << temp->data.name
             << ", Score: " << temp->data.averageScore << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double score;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter average score: ";
        cin >> score;
        push(head, name, score);
    }

    sortList(head);

    cout << "\nStudents sorted by highest score:" << endl;
    printList(head);

    return 0;
}