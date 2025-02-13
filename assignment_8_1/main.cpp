#include <iostream>

struct Node {
public:
    int val;
    Node* link;
};

class LinkedList {
private:
    size_t count{};
public:
    Node* h = nullptr;
    Node* t = nullptr;

    void push_back(const int value) {
        Node* newNode = new Node;
        newNode->val = value;
        newNode->link = nullptr;
        if (h == nullptr) {
            h = newNode;
            t = newNode;
        } else {
            Node* tmpNode = t;
            tmpNode->link = newNode;
            t = newNode;
        }
        count++;
    }

    size_t size() const {
        return count;
    }

    int& at(size_t index) const {
        Node* current = h;
        for (size_t i = 0; i < index; ++i)
            current = current->link;
        return current->val;
    }

    void remove(size_t index) {
        if (index == 0) {
            Node* tmpNode = h;
            h = h->link;
            delete tmpNode;
        } else {
            Node* tmpNode = h;
            for (size_t i = 0; i < index - 1; ++i) {
                tmpNode = tmpNode->link;
            }
            Node* tmpNode2 = tmpNode->link;
            tmpNode->link = tmpNode2->link;
            delete tmpNode2;
        }
        count--;
    }
};

int main() {
    LinkedList SLL;
    while (true) {
        int option;
        std::cin >> option;
        if (option == 1){
            int value;
            std::cin >> value;
            SLL.push_back(value);
        }
        else if (option == 2){
            size_t index;
            std::cin >> index;
            std::cout << "Integer at index " << index << ": " << SLL.at(index) << std::endl;
        }
        else if (option == 3){
            size_t index;
            std::cin >> index;
            SLL.remove(index);
        }
        else if (option == 4){
            if (SLL.size() == 0)
                std::cout << "List contains no integers" << std::endl;
            else {
                std::cout << "List contains " << SLL.size() << " integers:";
                for (size_t i = 0; i < SLL.size(); ++i)
                    std::cout << " " << SLL.at(i);
                std::cout << std::endl;
            }
        } else
            break;
    }
    return 0;
}