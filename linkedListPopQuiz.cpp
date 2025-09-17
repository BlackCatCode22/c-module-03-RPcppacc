// created by Roman Pena 9/17/25

#include <string>
#include <iostream>
using namespace std;

// this program will create a linked list using a struct that will contain a struct
//it will also contain a char and a pointer

// create a struct
struct node {
    char data;
    node* next;
};

int main() {

    cout << " \nWelcome to my Linked List Pop Quiz Submission\n ";

//create a string named myStr

    string myStr = "abcDefg";

//test the struct
    // create a pointer name head
node* pHead = nullptr;
    //create a new node named node
    node* pNew = new node();
    pNew->data = myStr[0];
    pNew->next = nullptr;
//outputting whats in our node
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    //crate a linked list
    pHead = pNew;

    //verify this with output

    cout << pHead->data << endl;
    cout << pHead->next << endl;

    // add a node to our linked list using our four steps

    pNew = new node();
    pNew->data = myStr[1];

    //output our linked list:
    cout << pNew->data << endl;
    cout << pNew->next << endl;



    return 0;

}
