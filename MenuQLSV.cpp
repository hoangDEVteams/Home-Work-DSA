#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct sv{
    string maSo;
    string hoTen;
    float dtb;
    string tenLop;
};

struct node{
    sv sinhVien;
    node *next;
};

struct list{
    node *head;
    node *tail;
};

node *getNode(sv data){
    node *p = new node;
    if( p == NULL){
        cout<< "Tran bo nho" << endl;
    }
    p-> sinhVien = data;
    p-> next = NULL;
    return p;
};
void Init(list& l){
    l.head = l.tail = NULL;
}

void chenSinhVien(list& l , node *p){

    if(l.head == NULL){
        l.head = l.tail = p;
    }
    else{
        l.tail->next = p;
        l.tail = p;
    }
    p->next = NULL;
}

void duyetGiamDan(list l){
    node* p;
    p = l.head;
    vector<float> a(p->sinhVien.dtb);
    while (p != NULL) {
        a.push_back(p->sinhVien.dtb);
        p = p->next;
    }
    sort(a.end(),a.begin(),greater<float>());
    for(float x : a) cout<< x << " ";
}

void danhHieu(list& l){
    node* p ;
    p = l.head;
    sv sinhVien = p->sinhVien;
    float dtb = p->sinhVien.dtb;
    while (p != NULL) {
        if (p->sinhVien.dtb >= 8.0) {
            cout << "Học sinh giỏi: " << p->sinhVien.hoTen << endl;
        }
        p = p->next;
    }
    cout << "khong co hoc sinh gioi nao " << endl;
}

void listSV(list& l) {
    node* p = l.head;
    while (p != NULL) {
        cout << "ho ten: " << p->sinhVien.hoTen << endl;
        p = p->next;
    }
}
void DSLop(list& l) {
    string s;
    cout << "nhap ten lop: ";
    cin >> s;
    node* p = l.head;
    while (p != NULL) {
        if(p->sinhVien.tenLop == s)
        cout << "ho ten: " << p->sinhVien.hoTen << " "<<p->sinhVien.tenLop << endl;
        p = p->next;
    }
}

node* timSinhVienTheoMa(list& l) {
    string s;
    cout << "Nhap ten sinh vien theo ma: ";
    cin.ignore();  
    getline(cin, s);

    node* p = l.head;
    while (p != NULL) {
        if (p->sinhVien.maSo == s)
        return p;
        p = p->next;
    }
    return NULL;
}
node* timSVTheoDTB(list& l) {
    float dtb;
    cout << "Nhap dtb: ";
    cin >> dtb;

    node* p = l.head;
    while (p != NULL) {
        if (p->sinhVien.dtb == dtb)
        return p;
        p = p->next;
    }
    return NULL;
}

void sapXepTheoTen(list& l){
    node* p = l.head;
    for(node* i = l.head; i->next != NULL; i=i->next ){
        for(node* j = i->next; j != NULL; j = j->next ){
            if(i->sinhVien.hoTen > j->sinhVien.hoTen){
                swap(i->sinhVien, j->sinhVien);
            }
        }
    }
}
void Delete(list& l){
    node* p = l.head,*prev=NULL;
    while (p != NULL) {
        if (p->sinhVien.dtb < 5.0)
        {
            if(p == l.head){
                l.head = p->next;
                delete p;
                p=l.head;
            }
            else{
                prev->next = p->next;
                delete p;
                p = prev ->next;
            }
        }
        else{
            prev = p;
            p=p->next;
        }
    }
}



int main() {
    list l;
    Init(l);

    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        sv s;
        cout << "Nhap ma so sinh vien: ";
        getline(cin, s.maSo);
        cout << "Nhap ho ten sinh vien: ";
        getline(cin, s.hoTen);
        cout << "Nhap diem trung binh: ";
        cin >> s.dtb;
        cin.ignore();
        cout << "Nhap ten lop: ";
        getline(cin, s.tenLop);
    }

    int choice;
    do {
        cout << "\n==== MENU ====" << endl;
        cout << "1. Hien thi danh sach sinh vien" << endl;
        cout << "2. Tim sinh vien theo ma so" << endl;
        cout << "3. Tim sinh vien theo DTB" << endl;
        cout << "4. Sap xep sinh vien theo ten" << endl;
        cout << "5. Xoa sinh vien co DTB < 5.0" << endl;
        cout << "6. Hien thi danh sach sinh vien gioi" << endl;
        cout << "7. hien thi danh sach sinh vien theo lop" << endl;
        cout << "8. chen them sinh vien" << endl;
        cout << "0. Thoat" << endl;
        cout << "Chon: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                listSV(l);
                break;
            case 2: {
                node* found = timSinhVienTheoMa(l);
                if (found) {
                    cout << "Tim thay: " << found->sinhVien.hoTen 
                         << " - DTB: " << found->sinhVien.dtb << endl;
                } else {
                    cout << "Khong tim thay sinh vien" << endl;
                }
                break;
            }
            case 3: {
                node* found = timSVTheoDTB(l);
                if (found) {
                    cout << "Tim thay: " << found->sinhVien.hoTen 
                         << " - DTB: " << found->sinhVien.dtb << endl;
                } else {
                    cout << "Khong tim thay sinh vien voi DTB do" << endl;
                }
                break;
            }
            case 4:
                sapXepTheoTen(l);
                cout << "Da sap xep danh sach sinh vien theo ten." << endl;
                break;
            case 5:
                Delete(l);
                cout << "Da xoa sinh vien co DTB < 5.0." << endl;
                break;
            case 6:
                danhHieu(l);
                break;
            case 7:
                DSLop(l);
                break;
            case 8:
                int n;
                cin >> n;
                for (int i = 0; i < n; i++) {
                    sv s;
                    cout << "Nhap ma so sinh vien: ";
                    getline(cin, s.maSo);
                    cout << "Nhap ho ten sinh vien: ";
                    getline(cin, s.hoTen);
                    cout << "Nhap diem trung binh: ";
                    cin >> s.dtb;
                    cin.ignore();
                    cout << "Nhap ten lop: ";
                    getline(cin, s.tenLop);
                    node* p = getNode(s);
                    chenSinhVien(l, p);
                }
                break;
            case 0:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);

    return 0;
}