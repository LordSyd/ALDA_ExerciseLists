//
//  list.c
//  ALDA_ExerciseLists
//
//  Created by Michael Strommer on 26.04.21.
//

#include <stdlib.h>
#include "list.h"


void insertAtEnd(node** head, char color) {

	node* current = *head;
	while (current->next != NULL) {
		current = current->next;
	}

	node* newNode = (node*)malloc(sizeof(node));
	newNode->color = color;
	current->next = newNode;

	newNode->next = NULL;


}

void insertAtHead(node** head, char color) {
	node* newNode;
	newNode = (node*)malloc(sizeof(node));

	newNode->color = color;
	newNode->next = *head;
	//newNode->prev = NULL;
	*head = newNode;

}

void insertAfterKey(node** head, char color, int key) {

	node* current = *head;
	int counter = 1;

	while (counter != key) {
		current = current->next;
		counter++;
	}

	node* newNode = (node*)malloc(sizeof(node));

	//current->next->prev = current;

	newNode->next = current->next;
	current->next = newNode;
	newNode->color = color;
	//current->next->prev = current;

}
