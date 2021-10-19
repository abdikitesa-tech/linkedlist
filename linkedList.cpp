/*
    int x; //4byte to store address of next element
    int a[3];
    int b[50];
*/

//only forward traversal is possible

struct node
{
    int a;
    struct node* next;
};

struct node* head;
head = 0 ;

int* p = new struct node; 

*p = 5;
// delete p; // deletes what p is pointing to

// p = new int (10);

