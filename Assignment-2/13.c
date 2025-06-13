//13.	Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[] = "Hello, this is a file handling test!";
    char ch;

    // Step 1: Create and write to the file
    fp = fopen("example.txt", "w");  // Open in write mode
    if (fp == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    fputs(str, fp);  // Write string to file
    fclose(fp);      // Close the file

    // Step 2: Reopen and read the file
    fp = fopen("second.txt","r");  
    if(fp==NULL)//condition
    {
        printf("\nFile doesn't exist");
    }
    else
    {
        while(fgets(str,sizeof(str),fp))  
        {
            printf("%s",str);
        }       
    }
    return 0;
}
