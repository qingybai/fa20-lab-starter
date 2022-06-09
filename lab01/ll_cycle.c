#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */

    if(head==NULL) 
    {return 0;}
    /*sanity check*/
    
    node *tortoise, *hare;
    tortoise = head;
    hare = head;
    while(hare->next!=NULL)
    {
        hare = hare->next;
        tortoise = tortoise->next;
        if (hare->next==NULL) return 0;
        else
        {
            hare = hare->next;
            if (hare==tortoise) return 1;
        }
    }
    return 0;
}
/* now I can run 32bits in wsl2 i try to change back */