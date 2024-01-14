//an application that inputs a line of text, and tokenizes it. It uses space characters as delimiters.
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){

    char phrase[] = "i can so, i shouldOr,shouldI really?";

    char *token = strtok(phrase, " ");

    while(token != NULL){

        printf("%s\n", token);
        token = strtok(NULL, " ");

    }

    return 0;
}
