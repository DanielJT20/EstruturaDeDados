#include <iostream>
using namespace std;

class No{
    public:
        int dado;
        No *proximo;
        No(int dado, No *p = nullptr){
            this->dado = dado;
            this->proximo = p;
        }
};

class ListaEncadeada{
    public:
    No *head;
    ListaEncadeada(){
        this->head= nullptr;
    }
    void add(int info){
        No *novo = new No(info);
        if(head->proximo == nullptr){
            head->proximo = novo;
        } else {
            No *p = head;
            while(p->proximo != nullptr){
                p = p->proximo;
            }
            p->proximo = novo;
        }
    }
    void remove(int info){
        

    }
};

int main(){

}