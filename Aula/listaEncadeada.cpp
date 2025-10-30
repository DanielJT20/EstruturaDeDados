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
    lista.print();
    cout << "Tamanho " << lista.contador() << endl;
    lista.remove(2);
    lista.print();
    cout << "Tamanho " << lista.contador() << endl;
    return 0;
}