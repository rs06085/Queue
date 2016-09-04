//
//  queue.h
//  Queue
//
//  Created by rs06085 on 04/09/16.
// 
//

#ifndef queue_h
#define queue_h

#include <stdio.h>

#define QUEUE_SIZE 10
#define TRUE 1
#define FALSE 0

typedef int elem;

struct queue {
    elem array[QUEUE_SIZE];
    int finish;
};

typedef struct queue QUEUE;

void QU_init(QUEUE *q);
int QU_empty(QUEUE q);
int QU_full(QUEUE q);
int QU_enqueue(QUEUE *q, elem x);
int QU_dequeue(QUEUE *q, elem *x);


#endif /* queue_h */
