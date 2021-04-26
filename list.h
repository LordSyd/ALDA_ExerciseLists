//
//  list.h
//  ALDA_ExerciseLists
//
//  Created by Michael Strommer on 26.04.21.
//

#ifndef list_h
#define list_h

#include <stdio.h>

struct _node
{
	char color;
	//int key;
	struct _node* next;
	//node* prev;
};

typedef struct _node node;

void insertAtEnd(node* head, char color);

void insertAtHead(node** head, char color);

void insertAfterKey(node* head, char color, int key);

#endif /* list_h */
