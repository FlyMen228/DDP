#ifndef DDP_NODE_HPP
#define DDP_NODE_HPP

template <typename KeyType, typename DataType>

class Node {

private:

    KeyType key;
    DataType data;
    Node* left = nullptr;
    Node* right = nullptr;

public:

    Node(KeyType& key, DataType& data) : key(key), data(data) { }

    KeyType getKey() {
        return key;
    }

    DataType getData() {
        return data;
    }

    Node getLeft() {
        return left;
    }

    Node getRight() {
        return right;
    }

};

#endif
