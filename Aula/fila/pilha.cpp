#include <iostream>
using namespace std;

// Stack implementation
class Stack {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() { top = -1; }
    
    bool push(int value) {
        if (top >= MAX_SIZE - 1) return false;
        arr[++top] = value;
        return true;
    }
    
    bool pop() {
        if (isEmpty()) return false;
        top--;
        return true;
    }
    
    int peek() {
        if (!isEmpty()) return arr[top];
        return -1;
    }
    
    bool isEmpty() {
        return top < 0;
    }
};

// Queue implementation
class Queue {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int front, rear;
    int itemCount;

public:
    Queue() {
        front = 0;
        rear = -1;
        itemCount = 0;
    }
    
    bool enqueue(int value) {
        if (itemCount >= MAX_SIZE) return false;
        rear = (rear + 1) % MAX_SIZE;
        arr[rear] = value;
        itemCount++;
        return true;
    }
    
    bool dequeue() {
        if (isEmpty()) return false;
        front = (front + 1) % MAX_SIZE;
        itemCount--;
        return true;
    }
    
    int getFront() {
        if (!isEmpty()) return arr[front];
        return -1;
    }
    
    bool isEmpty() {
        return itemCount == 0;
    }
};

// Main function to test the implementations
int main() {
    Stack stack;
    Queue queue;
    
    // Test stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Stack top: " << stack.peek() << endl;
    stack.pop();
    cout << "Stack top after pop: " << stack.peek() << endl;
    
    // Test queue
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    cout << "Queue front: " << queue.getFront() << endl;
    queue.dequeue();
    cout << "Queue front after dequeue: " << queue.getFront() << endl;
    
    return 0;
}