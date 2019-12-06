#include "StrTok.h"

int main()
{
    char spaces[4] = {", \t"};

    char string[60] = "Greetings,, ,,my,, ,,dear,, ,,Intel,, ,,Users!";

    printf("%s\n", StrTok(string, spaces));
    printf("%s\n", StrTok(string, spaces));
    printf("%s\n", StrTok(string, spaces));
    printf("%s\n", StrTok(NULL, spaces));
    printf("%s\n", StrTok(NULL, spaces));
    printf("%s\n", StrTok(NULL, spaces));
    printf("%s\n", StrTok(NULL, spaces));

    for(int counter = 0; counter < 46; counter ++)
        printf("[%d]: '%c'<->'%d'\n", counter, string[counter], string[counter]);
}
