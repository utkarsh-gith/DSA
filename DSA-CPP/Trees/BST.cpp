#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class binarySearchTree
{

public:
    Node *addNode(Node *root, int data)
    {

        if (root == NULL)
        {
            Node *newNode = new Node(data);
            root = newNode;
            return root;
        }

        if (root->data < data)
        {
            root->right = addNode(root->right, data);
        }
        else
        {
            root->left = addNode(root->left, data);
        }

        return root;
    }

    void insertNode(Node *&root)
    {
        cout << "Enter data (end with -1): ";
        int data;
        cin >> data;

        while (data != -1)
        {
            root = addNode(root, data);
            cin >> data;
        }
    }

    void display(Node *root)
    {

        if (root == NULL)
        {
            return;
        }

        queue<Node *> q;
        q.push(root);

        cout << endl;
        while (!q.empty())
        {

            int n = q.size();

            for (int i = 0; i < n; i++)
            {

                Node *temp = q.front();
                q.pop();

                cout << temp->data << "\t";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->left)
        {
            inorder(root->left);
        }
        cout << root->data << "\t";
        if (root->right)
        {
            inorder(root->right);
        }
    }

    void preorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        cout << root->data << "\t";
        if (root->left)
        {
            preorder(root->left);
        }
        if (root->right)
        {
            preorder(root->right);
        }
    }

    void postorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->left)
        {
            postorder(root->left);
        }
        if (root->right)
        {
            postorder(root->right);
        }
        cout << root->data << "\t";
    }

    Node *maxVal(Node *root)
    {
        while (root && root->right)
        {
            root = root->right;
        }
        return root;
    }
    Node *minVal(Node *root)
    {
        while (root && root->left)
        {
            root = root->left;
        }
        return root;
    }

    Node *deleteNode(Node *root, int val)
    {
        if (root == NULL)
        {
            return root;
        }

        if (root->data < val)
        {
            root->right = deleteNode(root->right, val);
        }
        else if (root->data > val)
        {
            root->left = deleteNode(root->left, val);
        }
        else
        {
            // 0 child
            if (root->left == NULL && root->right == NULL)
            {
                delete (root);
                return NULL;
            }

            // 1 child
            if (root->right == NULL)
            {
                Node *temp = root->left;
                delete (root);
                return temp;
            }
            if (root->left == NULL)
            {
                Node *temp = root->right;
                delete (root);
                return temp;
            }

            // 2 child
            Node *temp = minVal(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    void del(Node *&root)
    {

        cout << "Enter node to be deleted (end with -1): ";
        int val;
        cin >> val;

        while (val != -1)
        {
            root = deleteNode(root, val);
            cout << "Enter node to be deleted (end with -1): ";
            cin >> val;
        }
    }
};

int main()
{

    Node *root = NULL;
    binarySearchTree bst;

    bst.insertNode(root);
    cout << "Level Order: ";
    bst.display(root);
    cout << endl;
    cout << "Inorder: ";
    bst.inorder(root);
    cout << endl;
    cout << "Preorder: ";
    bst.preorder(root);
    cout << endl;
    cout << "PostOrder: ";
    bst.postorder(root);
    cout << endl;
    if (root)
    {
        Node *maxV = bst.maxVal(root);
        Node *minV = bst.minVal(root);
        cout << "Max Val: " << maxV->data << endl
             << "Min Val: " << minV->data << endl;
    }
    bst.del(root);
    cout << endl;
    cout << "Level Order: ";
    bst.display(root);

    return 0;
}