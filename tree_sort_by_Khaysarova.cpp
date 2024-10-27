#include <vector>

using namespace std;

struct Tree
{
    int data;
    Tree* left;
    Tree* right;
};

Tree* newTreeNode(int key)
{
    Tree* temp = new Tree;
    temp->data = key;
    temp->left = nullptr;
    temp->right = nullptr;
    return temp;
}

Tree* insert(Tree* tree, int key)
{
    if (tree == nullptr)
        return newTreeNode(key);

    if (key < tree->data)
        tree->left = insert(tree->left, key);
    else
        tree->right = insert(tree->right, key);

    return tree;
}

void storeInOrder(Tree* root, vector<int>& arr, int& i)
{
    if (root != nullptr) {
        storeInOrder(root->left, arr, i);
        arr[i++] = root->data;
        storeInOrder(root->right, arr, i);
    }
}

void TreeSort(vector<int>& arr)
{
    Tree* root = nullptr;

    if (!arr.empty()) {
        root = insert(root, arr[0]);

        for (int i = 1; i < arr.size(); i++)
            insert(root, arr[i]);

        int index = 0;
        storeInOrder(root, arr, index);
    }
}

vector<int> tree_sort_by_Khaysarova(vector<int> data) {
    TreeSort(data);
    return data;
}
