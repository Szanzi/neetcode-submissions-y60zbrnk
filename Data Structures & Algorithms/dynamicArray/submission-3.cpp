class DynamicArray {
private:
    int* myList;
    int capacity;
    int currEnd;
public:

    DynamicArray(int capacity) : capacity(capacity), currEnd(0) {
        myList = new int[capacity];
    }
    // Copy Constructor
    DynamicArray(const DynamicArray& other) {
        this->capacity = other.capacity;
        this->currEnd = other.currEnd;

        this->myList = new int[other.capacity];

        for (int i = 0; i < other.currEnd; i++) {
            this->myList[i] = other.myList[i];
        }
    }
    DynamicArray& operator=(const DynamicArray& other) {
        if (this == &other) {
            return *this; 
        }

        delete[] this->myList;

        this->capacity = other.capacity;
        this->currEnd = other.currEnd;
        this->myList = new int[other.capacity];

        for (int i = 0; i < other.currEnd; i++) {
            this->myList[i] = other.myList[i];
        }

        return *this;
    }
    int get(int i) {
        return myList[i];
    }

    void set(int i, int n) {
        myList[i] = n;
    }

    void pushback(int n) {
        if(currEnd == capacity) {
            resize();
        }
        myList[currEnd++] = n;
    }

    int popback() {
        currEnd--;
        return myList[currEnd];
    }

    void resize() {
        int* temp = new int[capacity * 2];
        for (int i = 0; i < currEnd; i++) {
            temp[i] = myList[i];
        }
        delete[] myList;
        this -> capacity = 2 * capacity;
        myList = temp;
    }

    int getSize() {
        return currEnd;
    }

    int getCapacity() {
        return capacity;
    }
    ~DynamicArray() {
        delete[] myList;
        this -> capacity = 0;
        this -> currEnd = 0;
    }
};
