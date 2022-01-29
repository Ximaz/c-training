#include <stdio.h>

void modifyValueFromPointer(int *ptr);

int main()
{
    int intVariable = 10;
    int *intVariablePtr = &intVariable;

    /**
     * @brief Pointer instructions
     * NO_PREFIX : The pointed value's memory location.
     * '&'       : The pointer's memory location.
     * '*'       : The pointed value's content.
     */
    char* separator = "=========================================================================";

    printf("%s\n", separator);

    printf("intVariable's value is %d.\n", intVariable);
    printf("intVariable's address is %p.\n", (void *)&intVariable);
    printf("intVariablePtr's pointed value is %d.\n", *intVariablePtr);
    printf("intVariablePtr's pointed address is %p.\n", (void *) intVariablePtr);
    printf("intVariablePtr's address is %p.\n", (void *) &intVariablePtr);

    modifyValueFromPointer(intVariablePtr);
    printf("%s\n", separator);

    printf("intVariable's value is %d.\n", intVariable);
    printf("intVariable's address is %p.\n", (void *)&intVariable);
    printf("intVariablePtr's pointed value is %d.\n", *intVariablePtr);
    printf("intVariablePtr's pointed address is %p.\n", (void *) intVariablePtr);
    printf("intVariablePtr's address is %p.\n", (void *) &intVariablePtr);
    printf("%s\n", separator);

    return 0;
}

void modifyValueFromPointer(int *ptr)
{
    *ptr = 20;
}
