#include <iostream>
using namespace std;

class No{
    public:
    No *proximo;
    No *anterior;
        int info;

        No(int i = 0, No *p = nullptr, No *a = nullptr){
            this->info = i;
            this->proximo = p;
            this->anterior = a;
        }
};

class ListaDuplamenteEncadeada{
    public:
    No *head = nullptr;
    ListaDuplamenteEncadeada(){
        this->head = nullptr;
    }
    void addInicio(int x){
        No *novo = new No(x);
        novo->proximo = head;
        if (head) head->anterior = novo;
        head = novo;
    }
    void addFim(int x){
        No *novo = new No(x);
        No *p = head;
        while (p->proximo != nullptr)
        {
            p = p->proximo;
        }
        p->proximo = novo;
        novo->anterior = p;
    }
    bool busca(int x){
        No *p = head;
        while (p != nullptr)
        {
            if (p->info == x)
            {
                return true;
            }
            p = p->proximo;
        }
        return false;
    }
    void remove(int x){
        if (head == nullptr) return;
        if (head->info == x){
            No *aux = head;
            head = head->proximo;
            if(head) head->anterior = nullptr;
            delete aux;
            return;
        }
        No *prev = head;
        No *p = head->proximo;
        while (p != nullptr && p->info != x){
            prev = p;
            p = p->proximo;
        }
        if (p == nullptr) return;
        prev->proximo = p->proximo;
        delete p;
    }
     void print(){
        No *p = head;
        while(p){
            cout << p->info << " ";
            p = p->proximo;
        }
        cout << endl;
    }
};
 
int main(){
    ListaDuplamenteEncadeada lista;
    lista.addInicio(1);
    lista.addInicio(2);
    lista.addInicio(3);
    lista.print(); // saída: 3 2 1
    lista.remove(2);
    lista.print(); // saída: 3 1
    return 0;
}