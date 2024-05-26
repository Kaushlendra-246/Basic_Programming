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
    Node y = Node(v[0],NULL);
    cout << y.data << " " << y.next << endl;

    //difference
    Node* x = new Node(v[1]);
    cout << y.data << " " << y.next << endl;
}