#include <iostream>
using namespace std;

class No{
    public:
    No *E;
    No *D;
    int dado;
    No(int x): E(nullptr), D(nullptr), dado(x){ }
};

class Tree{
    public:
    No *raiz;
    Tree(): raiz(nullptr) { }
    void add(int x){
        No *novo = new No(x);
        if(raiz == nullptr){
            raiz = novo;
            return;
        }
        No *atual = raiz;
        No *anterior = nullptr;
        while(atual != nullptr){
            anterior = atual;
            if(x < atual->dado){
                atual = atual->E;
            } else {
                atual = atual->D;
            }
        }
        if(x < anterior->dado){
            anterior->E = novo;
        } else {
            anterior->D = novo;
        }
    }

    // percurso preorder (raiz, esq, dir)
    void preorder(No* n){
        if(!n) return;
        cout << n->dado << " ";
        preorder(n->E);
        preorder(n->D);
    }
    void preorder(){ preorder(raiz); cout << endl; }

    void inorder(No* n){
        if(!n) return;
        inorder(n->E);
        cout << n->dado << " ";
        inorder(n->D);
    }
    void inorder(){ inorder(raiz); cout << endl; }

    // percurso postorder (esq, dir, raiz)
    void posorder(No* n){
        if(!n) return;
        posorder(n->E);
        posorder(n->D);
        cout << n->dado << " ";
    }
    void posorder(){ posorder(raiz); cout << endl; }
};

int main(){
    Tree t;
    t.add(2);
    t.add(1);
    t.add(3);

    cout << "Pre-order: ";
    t.preorder();
    cout << "In-order: ";
    t.inorder(); // imprime: 1 2 3
    cout << "Pos-order: ";
    t.posorder();

    return 0;
}