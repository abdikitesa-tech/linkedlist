#include <iostream>
using namespace std;

/*
    int x; //4byte to store address of next element
    int a[3];
    int b[50];
*/

//only forward traversal is possible
int main()
{

        struct node
            {
                int a;
                struct node* next;
            };

        struct node* head;
        head = 0 ;

        int* p = new struct node;
        int* t = new struct node; 
        int* r = new struct node;  

       p -> a = 1;
       t = p;
       r = p;

        p = new struct node;
        p -> a = 2;
        t -> next = p;
        t = t-> next;
// delete p; // deletes what p is pointing to

// p = new int (10);
cout << "enter data";
cin >>



}


