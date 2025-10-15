#include <iostream>
using namespace std;

class LinkedList {
private:
    struct Node {
        int info;
        Node* next;
        Node(int value) : info(value), next(nullptr) {}
    };

    Node* start;

public:
    LinkedList() : start(nullptr) {}

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = start;
        start = newNode;
    }

    void deleteFromBeginning() {
        if (start == nullptr) {
            cout << "Danh sách rỗng, không thể xóa!" << endl;
            return;
        }
        Node* temp = start;
        start = start->next;
        delete temp;
    }

    void displayList() const {
        if (start == nullptr) {
            cout << "Danh sách rỗng!" << endl;
            return;
        }
        cout << "Danh sách: ";
        Node* temp = start;
        while (temp != nullptr) {
            cout << temp->info << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        while (start != nullptr) {
            deleteFromBeginning();
        }
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    cout << "Sau khi chèn 3 phần tử:" << endl;
    list.displayList();

    list.deleteFromBeginning();
    cout << "Sau khi xóa 1 phần tử ở đầu:" << endl;
    list.displayList();

    cout << "Sau khi giải phóng toàn bộ (tự động khi hủy đối tượng):" << endl;

    return 0;
}