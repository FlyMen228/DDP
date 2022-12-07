#ifndef DDP_BST_HPP
#define DDP_BST_HPP

#include "Node.hpp"

template <typename KeyType, typename DataType>

class BST {

private:

    Node <KeyType, DataType> *root = nullptr;

public:

    BST() = default;

    ~BST() = default;

    void insert(const KeyType& key, const DataType& data) {
        if (root == nullptr) {
            root = new Node(key, data);
            return;
        }

        Node <KeyType, DataType>* marker = &root;

        while(marker) {
            if (key < marker->getKey()) {
                marker = marker->getLeft();
            } else if (key > marker->getKey()) {
                marker = marker->getRight();
            } else {
                break;
            }
        }

        *marker = new Node <KeyType, DataType> (key, data);
    }

    DataType find(const KeyType& key) {
        Node <KeyType, DataType>* marker = &root;

        while(marker) {
            if (marker->getKey() == key) {
                return marker->getData();
            } else if (marker->getKey() > key) {
                marker = marker->getLeft();
            } else {
                marker = marker->getRight();
            }
        }

        return NULL;
    }

};

#endif
