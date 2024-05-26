#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;

    public:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

int main(){
    vector<int> v = {1,5,3,2,8};
    Node y = Node(v[0],NULL); //y is just a variable of type Node
    cout << y.data << " " << y.next << endl;

    //difference
    Node* x = new Node(v[1]); // x is a pointer
    cout << x->data << " " << x->next << endl;
}