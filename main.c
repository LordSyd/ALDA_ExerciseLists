
#include "list.h"
#include <stdlib.h>

int main(){
    node* head = NULL;

    insertAtHead(&head, 't');
    insertAtEnd(&head, 'c');
    insertAfterKey(&head, 's', 1);

    printf("test: %c", head->next->next->color);

    return 0;
}






