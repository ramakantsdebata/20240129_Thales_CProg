#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char fileName[] = "TextFile.txt";
    char buffer[100];

    file = fopen(fileName, "w");

    if (file == NULL)
    {
        perror("Error opening file for writing.");
        return 1;
    }

    fprintf(file, "Hello, File IO\n"));
    fprintf(file, "Some entry into the text file.\n");
    fclose(file);

    file = fopen(fileName, "r");

    if (file == NULL)
    {
        perror("Error opening file for writing.");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}