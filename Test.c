#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[50];
    struct form{
        int ID;
        char Name[50];
        char Last_Name[50];
        char Alive[1];  
    };
    struct form Johan;
    Johan.ID = 28607006;
    printf("Tell me ur name\n");
    scanf("%s", input);
    strcpy(Johan.Name, input);
    printf("Tu nombre es %s", Johan.Name);
    return 0;
}