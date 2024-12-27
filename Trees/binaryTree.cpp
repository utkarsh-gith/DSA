#include<iostream>
using namespace std;

class NewNode{

    int data;
    NewNode* left;
    NewNode* right;

    NewNode(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }

};

