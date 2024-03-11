#include <stdio.h>
#include <stdlib.h>

int main()
{
    char
    printf("Hello world!\n");
    return 0;
}
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *toLower(char *str, size_t len)
{
    char *str_l = calloc(len+1, sizeof(char));

    for (size_t i = 0; i < len; ++i) {
        str_l[i] = tolower((unsigned char)str[i]);
    }
    return str_l;
}

int main(){
    char *str = "THIS STRING LITERAL IS ARBITRARY";

    printf("%s\n", str);
    size_t len = strlen(str);

    char *lower = toLower(str, len);
    printf("%s", lower);
    free(lower);

    exit(EXIT_SUCCESS);
}*/
