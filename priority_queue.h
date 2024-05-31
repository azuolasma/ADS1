#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Priority_queue {
    int *data;          // Array to store the data elements
    int *priorities;    // Array to store the corresponding priorities of the elements
    int size;           // Number of elements in the queue
    int capacity;       // Total capacity of the queue
} PriorityQueue;

// Create an empty priority queue
PriorityQueue* createPriorityQueue(int initialCapacity);

// Check if the priority queue is empty
int isEmpty(PriorityQueue *pq);

// Check if the priority queue is full
int isFull(PriorityQueue *pq);

// Insert a new element with its priority into the queue
void enqueue(PriorityQueue *pq, int element, int priority);

// Remove and return the element with the highest priority
int dequeue(PriorityQueue *pq);

// Return the element with the highest priority without removing it
int peek(PriorityQueue *pq);

// Destroy priority queue
void destroyPriorityQueue(PriorityQueue *pq);
#endif

#define MAX_CAPACITY 10000
