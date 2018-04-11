#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<iostream>
#include<stdlib.h>

using namespace std;

typedef int infotype;

typedef struct Queue
{
    infotype info[5];
    int head;
    int tail;
};

void createQueue(Queue &Q);
bool isEmpty(Queue &Q);
bool isFull(Queue &Q);
void enqueue(Queue &Q, int n);
int dequeue(Queue &Q);
int CountElmQueue(Queue &Q);
void printInfo(Queue &Q);
#endif // HEAD_H_INCLUDED
