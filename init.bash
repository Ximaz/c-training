#!/bin/bash -e

MAKEFILE_BODY=$(echo "MODULES=
EXEC=main
CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic

all: \$(EXEC)

\$(EXEC).o: \$(EXEC).c
	\$(CC) -c \$(EXEC).c \$(CFLAGS)

\$(EXEC): \$(EXEC).o
	\$(CC) -o \$(EXEC) \$(EXEC).o \$(MODULES) \$(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf \$(EXEC)

re: fclean all

run: re clean
	./\$(EXEC)

.PHONY: all clean fclean re
")

MAIN_C_BODY=$(echo "#include <stdio.h>

int main()
{
    /* CODE */
    return 0;
}
")

function main {
    local project="${1}"

    # Create the folder of the project :
    mkdir -p "${project}"

    # Push Makefile in the project :
    echo "${MAKEFILE_BODY}" > "${project}/Makefile"

    # Push main.c in the project :
    echo "${MAIN_C_BODY}" > "${project}/main.c"
}

main "${@}"