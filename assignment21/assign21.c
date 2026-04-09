#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char *buffer;
    long fileSize;


    sourceFile = fopen("assign77.c", "rb"); // Open source file in read-binary mode
    destFile = fopen("assign21End.c", "wb"); //opens destination file in write binary mode, ie. edit mode
    
    
    if (sourceFile == NULL) {  //checks if source file is at all present
        perror("Error opening source file");
        return 1;
    }

    // Determine the file size of source file
    fseek(sourceFile, 0, SEEK_END); // reads thru entire file, pencil is now at the end of the paper
    fileSize = ftell(sourceFile);    // Get current position of the "pencil" (size in bytes)
    rewind(sourceFile);             // Move pencil back to start of the paper (analogy for file pointer)
    //this is imp because if we dont use ts, it will just print nulls for entire memory chunk made by calloc

    // 3. Allocate memory using calloc
    // We allocate (fileSize + 1) to accommodate a null terminator if needed
    buffer = (char *)calloc(fileSize + 1, sizeof(char)); 
    /*char* is the pointer  to the memory block made by calloc andd this address is stored in buffer */

    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
        fclose(sourceFile);
        return 1;
    }

    // 4. Read source file into the buffer
    fread(buffer, 1, fileSize, sourceFile); //simiar to how we write code in a file for github, but no commit made yet

    
    
    if (destFile == NULL) {
        perror("Error opening destination file");
        free(buffer);
        fclose(sourceFile);
        return 1;
    }

    // 6. Write buffer to destination file
    fwrite(buffer, 1, fileSize, destFile);  //similar to commiting changes to github, only that file is overwritten completely

    printf("File copied successfully! (%ld bytes)\n", fileSize);

    // 7. Clean up
    fclose(sourceFile);
    fclose(destFile);
    free(buffer);

    
}