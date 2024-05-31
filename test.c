#include "priority_queue.h"

// Helper function to display the current state of the priority queue
void printPriorityQueue(PriorityQueue *pq) {
    if (pq == NULL || pq->size == 0) {
        printf("Priority Queue is empty.\n");
        return;
    }
    printf("Priority Queue contains %d elements:\n", (*pq).size);
    for (int i=0; i<(*pq).size; i++) {
        printf("Element: %d with Priority: %d\n", (*pq).data[i], (*pq).priorities[i]);
    }
    printf("\n");
}

int main() {
    int initialCapacity = 5;
    printf("Creating a Priority Queue with initial capacity of %d...\n", initialCapacity);
    PriorityQueue *pq = createPriorityQueue(initialCapacity);

    if (pq == NULL) {
        fprintf(stderr, "Failed to create priority queue.\n");
        return 1;
    }

    // Test enqueue
    printf("Enqueuing elements...\n");
    enqueue(pq, 10, 1);
    enqueue(pq, 20, 3);
    enqueue(pq, 30, 2);
    enqueue(pq, 40, 0);
    printPriorityQueue(pq);

    // Test peek
    printf("The top element is: %d\n", peek(pq));

    // Test dequeue
    printf("Dequeuing...\n");
    printf("Dequeued element: %d\n", dequeue(pq));
    printPriorityQueue(pq);

    // Test queue full
    enqueue(pq, 50, 5);
    enqueue(pq, 60, 4);
    printPriorityQueue(pq);

    printf("Attempting to enqueue beyond capacity...\n");
    enqueue(pq, 70, 6);

    // Test isEmpty function
    printf("Emptying the queue...\n");
    while (!isEmpty(pq)) {
        printf("Dequeued element: %d\n", dequeue(pq));
    }
    printPriorityQueue(pq);

    // Clean up
    printf("Destroying the priority queue...\n");
    destroyPriorityQueue(pq);
    printPriorityQueue(pq);

    return 0;
}
