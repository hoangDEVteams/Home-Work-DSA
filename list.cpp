#include <iostream>
using namespace std;

// khai báo nút
struct node
{
    int data;
    node *next;
};
// khai báo danh sách
struct list
{
    node *head;
    node *tail;
};
// tạo danh sách rỗng
void Init(list &l)
{
    l.head = l.tail = NULL;
}

// tọa node số nguyên
node *getNode(int x) // x == data phần struct node
{
    node *p = new node; // cấp phát vùng nhớ cho node p
    if (p == NULL)
    {
        cout << "Khong du bo nho";
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}
void InsertTail(list &l, node *p)
{
    if (l.head == NULL) // kiểm tra xem danh sách có rỗng không
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p;
        l.tail = p;
    }
}

// duyêt danh sách
void Traverser(list l)
{
    node *p = l.head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// sap xep bang doi cho
void SLL_interchangeSort(list &l)
{
    for (node *p = l.head; p != l.tail; p = p->next)
    {
        for (node *q = p->next; q != NULL; q = q->next)
        {
            if (p->data > q->data)
            {
                int x = p->data;
                p->data = q->data;
                q->data = x;
            }
        }
    }
}

// list sectionsort
void listSelectionSort(list& l) {
    for (node* p = l.head; p != NULL; p = p->next) {
        node* min = p;
        for (node* q = p->next; q != NULL; q = q->next) {
            if (min->data > q->data) {
                min = q;
            }
        }
        swap(min->data, p->data);
    }
}

//buble sort
void buble_Sort(list& l){
    node* t = l.tail;
    for (node* p = l.head; p != NULL; p = p->next) {
        node* t1;
        for (node* q = p->next; q != NULL; q = q->next) {
            if (q->data > q->next->data) {
                swap(q->data, p->next->data);
            }
            t1=q;
        }
        t=t1;
    }
}

void listAppend(list& l, list& l2) {
    if (l2.head == NULL) return;

    if (l.head == NULL) {
        l = l2;
    } else {
        l.tail->next = l2.head;
        l.tail = l2.tail;
    }
    l2.head = l2.tail = NULL;
}

void SlistQSort(list& l){
    node* x,*p;
    list l1,l2;
    if(l.head == l.tail) return;
    Init(l1);Init(l2);
    x=l.head;l.head=x->next;
    while (l.head != NULL)
    {
        /* code */
        p = l.head;
        if(p->data <= x ->data) AddHead(l1,p);
        else AddHead((l2,p));
    }
    SlistQSort(l1);
    SlistAppend(l,l1);
    addfirst(l,X);
    SlistAppend(l,l2);
    
}
int main()
{
    int n, x;
    list l;  // khai báo 1 biến l kiểu list
    Init(l); // khởi tạo danh sách rỗng
    cout << "nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << "nhap x: ";
        cin >> x;
        node *p = getNode(x);
        InsertTail(l, p); //  == InsertTail(&l,getNode(x))
    }
    listSelectionSort(l);
    Traverser(l);
}