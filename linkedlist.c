#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    struct Node * next;
} Node;

void insert(Node** head, Node* toIns)
{
    toIns->next = *head;
    *head = toIns;
}

void print_list(node* current) {
	printf("HEAD: ");
	while(current) {
		printf("%s %d", current->name, current->age);
		printf(" -> ");
		current = current->next ;
	}
	printf("\b\b\b\b :TAIL\n");
}

int main() {
    struct s_student *ece_class = NULL;
    struct s_student *next_student;
    char choice;
    while (1) {
        next_student = malloc(sizeof(struct s_student));
        if (ece_class == NULL)
            ece_class = next_student;
        else {
            addNodeToEnd(ece_class, next_student);
        }
    }

    next_student = ece_class;
    while (next_student != NULL) {
        printf("\nName: %s Age: %d\n", next_student->name, next_student->age);
        next_student = next_student->next;
    }

    system("PAUSE");
    return 0;
}