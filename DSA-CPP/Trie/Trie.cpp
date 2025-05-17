#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        { // present
            child = root->children[index];
        }
        else
        { // not present
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] == NULL)
        {
            return false;
        }

        child = root->children[index];
        return searchUtil(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    void printAllWordsUtil(TrieNode *root, string path)
    {
        // If the current node is terminal, print the word formed so far
        if (root->isTerminal)
        {
            cout << path << endl;
        }

        // Recur for all the children
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i] != NULL)
            {
                // Append the current character to the path and recurse
                printAllWordsUtil(root->children[i], path + root->children[i]->data);
            }
        }
    }
    void printAllWords()
    {
        printAllWordsUtil(root, "");
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("CAT");
    t->insertWord("CATFISH");
    t->insertWord("ABC");

    cout << t->searchWord("CAT") << endl;
    cout << t->searchWord("CATFISH") << endl;
    cout << t->searchWord("ABC") << endl;
    cout << t->searchWord("ABCD") << endl;
    cout << t->searchWord("CATFI") << endl;

    t->printAllWords();

    return 0;
}
