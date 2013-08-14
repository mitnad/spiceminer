#include "SpiceUsr.h"
#include <stdlib.h>

/* constants */
#define ERROR_LEN 26


/* Every function MUST return the error message */

#define CHECK_EXCEPTION {\
    if(failed_c()) {\
        char* message = malloc(sizeof(char) * ERROR_LEN);\
        getmsg_c("short", ERROR_LEN, message);\
        reset_c();\
        return message;\
    }\
}

#define FINALIZE {\
    return NULL;\
}