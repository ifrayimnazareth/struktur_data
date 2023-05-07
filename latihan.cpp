#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Node{
    char nama[100];
    char asal[100];
    Node *next, *prev;
};
Node *head=NULL, *tail=NULL, *baru, *bantu, *hapus;

void inputDepan(){
    baru = new Node;
    baru->next = NULL;
    baru->prev = NULL;
    cout<<"Nama\t: ";
    cin>>baru->nama;
    cout<<"Asal\t: ";
    cin>>baru->asal;
    if(head == NULL){
        head = tail = baru;
    }
    else{
        baru->next = head;
        head->prev = baru;
        head = baru;    
    }
    system("cls");
}

void inputBelakang(){
    baru = new Node;
    baru->next = NULL;
    baru->prev = NULL;
    cout<<"Nama\t: ";
    cin>>baru->nama;
    cout<<"Asal\t: ";
    cin>>baru->asal;
    if(head == NULL){
        head = tail = baru;
    }
    else{
        baru->prev = tail;
        tail->next = baru;
        tail = baru;
    }
    system("cls");
}

void hapusDepan(){
    if(head->next == NULL){
        head = tail = NULL;
        cout<<"\nEmpety.........!";
    }
    else{
        hapus = head;
        head = head->next;
        head->prev = NULL;
        delete hapus;
    }
}

void hapusBelakang(){
    if(tail->prev == NULL){
        tail = head = NULL;
        cout<<"\nEmpety.........!";
    }
    else{
        hapus = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete hapus;
    }
}

void Output(){
    bantu = head;
    while(bantu != NULL){
        cout<<"\n+----------------------------+"
            <<"\n|Nama\t: "<<bantu->nama
            <<"\n|Asal\t: "<<bantu->asal;
        bantu = bantu->next;
    }
    cout<<"\n+----------------------------+\n\n";
}

void singleLinked(){
    system("cls");
    int cho1;
    do{
        cout<<"\n+------------------------------+"
            <<"\n|      SINGLE LINKED LIST      |"
            <<"\n+------------------------------+"
            <<"\n| 1.Input Data                 |"
            <<"\n| 2.Hapus Data                 |"
            <<"\n| 3.Output                     |"
            <<"\n| Lainnya >> Keluar            |"
            <<"\n+------------------------------+"
            <<"\nPilih -> ";
        cin>>cho1;
        switch (cho1){
            case 1:
                inputDepan();
                break;
            case 2:
                hapusDepan();
                break;
            case 3:
                if(baru == NULL){
                    cout<<"\nData Is Empty.........!\n";
                }
                else{
                    Output();
                }
                break;
            default:
                break;
        }
    }while(cho1 <=  3);
}

void DoubleLinked(){
    system("cls");
    int cho2;
    do{
        cout<<"\n+------------------------------+"
            <<"\n|      DOUBLE LINKED LIST      |"
            <<"\n+------------------------------+"
            <<"\n| 1.Input Data Depan           |"
            <<"\n| 2.Input Data Belakang        |"
            <<"\n| 3.Hapus Data Depan           |"
            <<"\n| 4.Hapus Data Belakang        |"
            <<"\n| 5.Output                     |"
            <<"\n| Lainnya >> Keluar            |"
            <<"\n+------------------------------+"
            <<"\nPilih -> ";
        cin>>cho2;
        switch (cho2){
            case 1:
                inputDepan();
                break;
            case 2:
                inputBelakang();
                break;
            case 3:
                hapusDepan();
                break;
            case 4:
                hapusBelakang();
                break;
            case 5:
                if(baru == NULL){
                    cout<<"\nData Is Empty.........!\n";
                }
                else{
                    Output();
                }
                break;
            default:
                break;
        }
    }while(cho2 <= 5);
}

int main(){
    system("cls");
    int cho3;
    do{
        cout<<"\n+------------------------------+"
            <<"\n|     TUGAS STRUKTUR DATA      |"
            <<"\n|      created by : alef       |"
            <<"\n+------------------------------+"
            <<"\n| 1.Single Linked List         |"
            <<"\n| 2.Double Linked List         |"
            <<"\n| Lainnya >> Keluar            |"
            <<"\n+------------------------------+"
            <<"\nPilih -> ";
        cin>>cho3;
        switch (cho3){
            case 1:
                singleLinked();
                break;
            case 2:
                DoubleLinked();
                break;
            default:
                cout<<"\nAnda Keluar.........!\n\n";
                break;
        }
    }while(cho3 <= 2);
    getch();
    return 0;
}
