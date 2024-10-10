#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "Practical.h"

void DieWithUserMessage(const char *msg, const char *detail) {
    fprintf(stderr, "%s: %s\n", msg, detail);  // Print user message and detail to stderr
    exit(EXIT_FAILURE);  // Exit the program with a failure status
}

void DieWithSystemMessage(const char *msg) {
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));  // Print msg and system error message
    exit(EXIT_FAILURE);  // Exit the program with a failure status
}
