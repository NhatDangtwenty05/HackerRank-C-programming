#include <stdio.h>
#include <string.h>

int main()
{
    FILE * f;

    f = fopen("1_file code.txt", "a");
    if(f == NULL)
    {
        printf("file is not avaliable");
        return 0;
    }

    fputc('C', f);
    fputs("am ba tu kam", f);
    int abc = 1000;
    fprintf(f, "\nfprintf %d", abc);

    fclose(f);

    //----------------------------------------------

    f = fopen("1_file code.txt", "r");
    if(f == NULL)
    {
        printf("file is not avaliable");
        return 0;
    }

    char character = fgetc(f); // >>>>>> end = EOF
    while(character != EOF)
    {
        printf("%c", character);
        character = fgetc(f);
    }

    char c[100];
    fscanf(f, "%s", c);
    printf("%s", c);

    fgets(c, 100, f); // >>>>> end = NULL
    printf("%s", c);

    fclose(f);

    f = fopen("1_file code.c", "a");
    fseek(f, 0, SEEK_END); // SEEK_CUR SEEK_SET
    printf("\n\nbyte: %d", ftell(f)); // firt -> poin_currant (byte)

    return 0;
}