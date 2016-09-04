//
//  main.c
//  Queue
//
//  Created by Christos Karolemeas on 04/09/16.
//  Copyright © 2016 Christos Karolemeas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, const char * argv[]) {
    
    int choice,elem,i;
    QUEUE q;
    
    QU_init(&q);
    
    while(1)
    {
        system("cls");
        printf("Menu: ");
        printf("\n--------------");
        printf("\n1-Insert");
        printf("\n2-Remove");
        printf("\n3-Print");
        printf("\n4-Exit");
        printf("\nChoice? ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("\nGive an element: ");
                scanf("%d",&elem);
                if (QU_enqueue(&q,elem))
                    printf("Successful Insert!");
                else
                    printf("Failure! The queue was full");
                break;
            case 2:
                if (QU_dequeue(&q,&elem))
                    printf("%d was removed.", elem);
                else
                    printf("Failure! The queue was empty");
                break;
            case 3:
                //MONO GIA EKPAIDEYTIKOUS LOGOUS!!!
                //Apagorevetai na akoumpame ti domi!!
                printf("\n\nThe queue has %d elements: \n", q.finish+1);
                for (i=0; i<=q.finish; i++)
                {
                    printf("|%3d",q.array[i]);
                }
                break;
            case 4:
                printf("Bye Bye!!");
                exit(0);
            default:
                printf("Wrong Input!");
        }
        printf("\n\n");
        system("pause");
    }
    
    return 0;
}
