#include <stdio.h>
#include <string.h>

int main()
{
    //printf("Input the content: ");
    int length = 0;
    while (getchar() != '\n')
    {
        length ++;
        if (getchar() == ' ')
        {
            length = 0;
        }
    }
    
    //printf("The last word is %s\n", word);
    printf("Length: %i\n", length);
    return 0;
}
