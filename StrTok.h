#include <stdio.h>

const int MAX_NUMBER_OF_WORDS = 100;
const int MAX_WORD_LENGTH = 50;

const int EQUAL = 1;
const int DIFFER = 0;

int CharCompare(char viewedCharacter, char * spaces);

char * StrTok(char * string, char * spaces)
{
    int position = 0;
    static char * viewedString = 0;

    if(string != NULL)
        viewedString = string;
    
    else //if(string == NULL)
    {
        if(viewedString == 0)
        {
            printf("StrTok: Error, NULL without valuable strings before\n");
            return NULL;
        }
    
        viewedString += position;
    }

    while(CharCompare(*(viewedString + position++), spaces))
        ;
    *(viewedString + position - 1) = '\0';
    while(!CharCompare(*(viewedString + position++), spaces))
        *(viewedString + position - 1) = '\0';
    position--;

    viewedString += position;
    return (viewedString - position);
}

int CharCompare(char viewedCharacter, char * spaces)
{

    while(viewedCharacter != *(spaces++))
    {
        if(*(spaces - 1) == '\0')
            break;
    }

    if(*(spaces - 1) == '\0' && viewedCharacter != '\0')
        return 1;
    else
        return 0;
}











 
