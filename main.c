
#include "list.h"
#include <stdlib.h>

int main(){
    node* head = NULL;

    insertAtHead(&head, '1'); //works
    insertAtEnd(&head, '3'); //works
    insertAfterKey(&head, '2', 1); //works

    //printf("test: %c", head->next->next->color);
    printListReverse(&head);

    return 0;
}






