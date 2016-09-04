//
//  queue.c
//  Queue
//
//  Created by rs06085 on 04/09/16.
//
//

#include "queue.h"

void QU_init(QUEUE *q) {
    q->finish = -1;
}

int QU_empty(QUEUE q) {
    return q.finish == -1;
}

int QU_full(QUEUE q) {
    return q.finish == QUEUE_SIZE - 1;
}

int QU_enqueue(QUEUE *q, elem x) {
    if (QU_full(*q)) {
        return FALSE;
    }
    else {
        q->finish++;
        q->array[q->finish] = x;
        return TRUE;
    }
}

int QU_dequeue(QUEUE *q, elem *x) {
    int i;
    
    if (QU_empty(*q)) {
        return FALSE;
    }
    else {
        *x = q->array[0]; // save the element that is dequeued
        
        /* Move the elements of the array one position */
        for (i = 0; i < q->finish; i++) {
            q->array[i] = q->array[i+1];
        }
        
        /* Decrease finish by one */
        q->finish--;
        return TRUE;
    }
}