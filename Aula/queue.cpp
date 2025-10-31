#include <iostream>
using namespace std;

class No{
    public:
    No *prox;
    int dado;
    No(int d=0, No *p = nullptr): dado(d), prox(p){;
    
    }
};

class Queue{ 
    public:
    No *inicio;
    No *fim;

    Queue(): inicio(nullptr), fim(nullptr){;
    }
    void Queue::enqueue(int x){
        No *novo = new No(x);
        if(inicio == nullptr){
            inicio = novo;
            fim = novo;
        }
        fim -> prox = novo;
        fim = novo;
    }
    void Queue::dequeue(){
        No *novo = inicio;
        if(No != nullptr){
            inicio = No -> prox;
            delete novo;
        }
    }

int Queue::front(){
  if(inicio != nullptr){
    return inicio -> dado;
}
}
int Queue::back(){
if(fim != nullptr){
    return fim -> dado;
}
}
    bool Queue::isEmpty(){
        return inicio == nullptr;
}
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.front(); // 10
    q.back();  // 20
    return 0;
}