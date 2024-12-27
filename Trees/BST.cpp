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

class binarySreachTree
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
        cout << endl
             << "Enter data: ";
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
};

int main()
{

    Node *root = NULL;
    binarySreachTree bst;

    bst.insertNode(root);
    bst.display(root);
    cout << endl;
    bst.inorder(root);
    cout << endl;
    bst.preorder(root);
    cout << endl;
    bst.postorder(root);

    return 0;
}