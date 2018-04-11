#include "head.h"

void createQueue(Queue &Q){
    Q.head = -1;
    Q.tail = -1;
}

bool isEmpty(Queue &Q){
    if(Q.head == 0 && Q.tail == 4){
        return true;
    }else{
        return false;
    }
}

bool isFull(Queue &Q){
    if(Q.tail == -1 && Q.head == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue(Queue &Q, int n ){
    if (isFull(Q) == false){
        Q.tail++;
        Q.info[Q.tail] = n;
    }else if (isFull(Q) == true){
        cout<<"Queue penuh!!"<<endl;
    }else if (isEmpty(Q) == true){
        Q.head = 0;
        Q.tail = 0;
        Q.info[Q.tail] = n;
    }
}

int dequeue(Queue &Q){
    int check;
    if(isEmpty(Q) == true){
        cout<<"Queue kosong!!"<<endl;
        return 0;
    }else if(Q.head == 0 && Q.tail == 0){
        check = Q.info[Q.head];
        Q.tail = -1;
        Q.tail = -1;
        return check;
    }else{
        check = Q.info[Q.head];
        for (int i = Q.head;i <= Q.tail-1;i++){
            Q.info[i] = Q.info[i+1];
        }Q.tail--;
        return check;
    }
}

void printInfo(Queue &Q) {
    for (int i = Q.head;i <= Q.tail;i++)
    {
        cout<<Q.info[i]<<" ";
    }
    cout<<endl;
}

int CountElmQueue(Queue &Q){
    int i = Q.head;
    while (i != Q.tail){
        i++;
    }
    return i;
}
