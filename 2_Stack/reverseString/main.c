#include "./includes/farraystack.h"
#include <stdio.h>
#include <string.h>

char *strrev(const char *str, size_t len) {
    if (len <= 0 || !str) return NULL;
    char *ret = (char *)calloc(sizeof(char), len + 1);
    if (!ret) return NULL;
    ret[len] = '\0';

    FixedArrayStack *pStack = createFixedArrayStack(len);
    if (!pStack) {
        free(ret);
        return NULL;
    }

    for (size_t i = 0; i<len; i++) {
        FASNode *tmp = createFASNode(str[i]);
        pushFAS(pStack, *tmp);
        free(tmp);
    }
    for (size_t i = 0; i<len; i++) {
        FASNode *tmp = popFAS(pStack);
        ret[i] = tmp->data;
        free(tmp);
    }
    deleteFixedArrayStack(pStack);
    return ret;
}

int main(int argc, char **argv) {
    if (argc != 2) return 0;
    else {
        printf("inserted input : [%s] :)\n", argv[1]);
        char *reversed = strrev((const char *)argv[1], strlen(argv[1]));
        printf("reversed input : [%s] :D\n", reversed);
        free(reversed);
    }
    system("leaks reverseString");
    return 0;
}