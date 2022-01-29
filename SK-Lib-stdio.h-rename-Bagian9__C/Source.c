#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    int  result;
    char old[] = "CRT_RENAMER.OBJ", new[] = "CRT_RENAMER.JBO";

    /* Attempt to rename file: */
    result = rename(old, new);

    if (result != 0) {
        printf("Could not rename '%s'\n", old);
    } else {
        printf("File '%s' renamed to '%s'\n", old, new);
    }
      
    _getch();
    return 0;
}