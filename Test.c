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
    strcpy(Johan.Name, "Johan");
    strcpy(Johan.Last_Name, "Salazar");
    strcpy(Johan.Alive, "Y");

    void Kill(char Subject[1]){
        strcpy(Subject, "N");
        printf("%s", Subject);
    };
    Kill(Johan.Alive);
}