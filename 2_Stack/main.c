#include "./includes/linkedstack.h"
// #include "./includes/arraystack.h"
#include <stdio.h>
#include <string.h>

void testSpace_LinkedStack(char *argv) {
    LinkedStack *ls = createLinkedStack(3);

    for (size_t i = 0; i < strlen(argv); i++) {
        StackNode *nptr = createLinkedStackNode(argv[i]);
        pushLS(ls, *nptr);
        free(nptr);
    }
    displayLinkedStack(ls);
    deleteLinkedStack(ls);
    system("leaks test");
}

int main(int argc, char **argv) {
    if (argc != 2) return 0;
    printf("inserted input : [%s] :)\n", argv[1]);
    testSpace_LinkedStack(argv[1]);
    return 0;
}