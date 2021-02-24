#include "revert_string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void RevertString(char *str)
{
	char* temp_str = (char*)malloc(strlen(str) + 1);
    strcpy(temp_str, str);

    int length = strlen(str);

    for(int i = 0; i < length; i++){
        str[i] = temp_str[length - i - 1];
    }

    free(temp_str);
}