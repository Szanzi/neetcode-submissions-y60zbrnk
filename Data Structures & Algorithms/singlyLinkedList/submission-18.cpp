class Node {
private:
    int val;
    Node* next;
public:
    Node(int val, Node* next = nullptr) : val(val), next(next) {}
    Node* getNext() {
        return next;
    }
    void setNext(Node* next) {
        this -> next = next;
    }
    int getVal() {
        return val;
    }
};

class LinkedList {
private:
    Node* head;
    int size;
public:

    LinkedList() : head(nullptr), size(0) {}

    int get(int index) {
        if (index >= size) {
            return -1;
        }
        Node* curr = this -> head;
        if (!curr) {
            return -1;
        }
        while(curr && index > 0) {
            curr = curr -> getNext();
            index--;
        }
        if(index > 0) { 
            return -1;
        }
        return curr -> getVal();

    }

    void insertHead(int val) {
        Node* newHead = new Node(val, this -> head);
        head = newHead;
        size++;
    }
    
    void insertTail(int val) {
        Node* tail = new Node(val);
        Node* curr = head;
        if (!curr) {
            head = tail;
            size++;
            return;
        }
        while(curr -> getNext() != nullptr) {
            curr = curr -> getNext();
        }
        curr -> setNext(tail);
        size++;
    }

    bool remove(int index) {
        if(index >= size || !size) {
            return false;
        }
        if(index == 0) {
            Node* toDelete = head;
            head = head -> getNext();
            delete toDelete;
            size--;
            return true;
        }
        Node* curr = this -> head;
        while(curr && index > 1) {
            curr = curr -> getNext();
            index--;
        }
        if(index > 1) { 
            return false;
        }
        if (curr -> getNext()) {
            Node* toDelete = curr -> getNext();
            curr -> setNext(curr -> getNext() -> getNext());
            delete toDelete;
        } else {
            return false;
        }
        size--;
        return true;

    }

    vector<int> getValues() {
        vector<int> ans;
        Node* curr = this -> head;
        while (curr) {
            ans.push_back(curr -> getVal());
            curr = curr -> getNext();
        }
        return ans;
    }
};
