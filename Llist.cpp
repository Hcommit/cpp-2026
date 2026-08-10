// implementation of linked list
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node n1(1);
    Node n2(2);

    n1.next = &n2;

    cout << n1.val<<" "<<n1.next << endl;
    cout << n1.next->val <<" "<<n2.next << endl;

    return 0;
}   