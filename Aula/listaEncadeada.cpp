#include <iostream>
using namespace std;

class No{
    public:
    No *proximo;
        int info;

        No(int i = 0, No *p = nullptr){
            this->info = i;
            this->proximo = p;
        }
};

class ListaEncadeada{
    public:
    No *head = nullptr;
    ListaEncadeada(){
        this->head = nullptr; 
    }
    void addInicio(int x){
        No *novo = new No(x);
        novo->proximo = head;
        head = novo;
    }
    void addFim(int x){
        No *novo = new No(x);
          if (head == nullptr) {
            head = novo;
            return;
        }
        No *p = head;
        while (p->proximo != nullptr)
        {
            p = p->proximo;
        }
        p->proximo = novo;
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
   void removeDuplicatas() {
        No* p = head;
        while (p != nullptr) {
            No* prev = p;
            No* q = p->proximo;
            while (q != nullptr) {
                if (q->info == p->info) {
                    prev->proximo = q->proximo;
                    delete q;
                    q = prev->proximo;
                } else {
                    prev = q;
                    q = q->proximo;
                }
            }
            p = p->proximo;
        }
    }
    void inverte(){
        No *prev = nullptr;
        No *atual = head;
        No *next = nullptr;
        while (atual != nullptr){
            next = atual->proximo;
            atual->proximo = prev;
            prev = atual;
            atual = next;
        }
         head = prev;
    }
     void print(){
        No *p = head;
        while(p){
            cout << p->info << " ";
            p = p->proximo;
        }
        cout << endl;
    }
     int contador(){
        int count = 0;
        No *p = head;
        while (p != nullptr){
            count++;
            p = p-> proximo;
        }
        return count;
    }
};
 
int main(){
    ListaEncadeada lista;
    lista.addInicio(1);
    lista.addInicio(2);
    lista.addInicio(3);
    lista.addFim(4);
    lista.addFim(3);
    lista.addFim(2);
    lista.addFim(1);
    lista.busca(2) ? cout << "Encontrado\n" : cout << "Nao encontrado\n";
    lista.print();
    cout << "Tamanho " << lista.contador() << endl;
    lista.removeDuplicatas();
    lista.print();
    cout << "Tamanho " << lista.contador() << endl;
    return 0;
}