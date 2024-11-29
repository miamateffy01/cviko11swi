#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void remove_digits(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}



void cased(){
    //remove_digits(pole);
    //printf("%s",pole);
    //printf("Hello World!");
    //fgets(pole,21,stdin); 
    //printf("Input: %s\n", pole);

}

void casep(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!ispunct(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
void caser(char param[],char pole[]){
    char x[100];
    for (int i= 0 ;i< strlen(pole);i++){
        
    }

}
void caser2(){}
void cases(){}


int main (int argc, char *argv[]){
    int dflag=0,pflag=0,rflag=0;
    char pole[1001];
    int opt,i=0;
    //printf("%s",pole);
    while ((opt=getopt(argc,argv,":dpsr:R:"))!=-1){
    switch (opt)
    {
    case 'd':
        i++;
        dflag=1;
        break;
    case 'p':
        i++;
        pflag=1;
        break;
    case 'r':
        i++;
        rflag=1;
        break;
    case 'R':
        i++;
        break;
    case 's':
        i++;
        break;
    case '?':
        //i++;
        fprintf(stderr,"E1");
        break;
    case ':':
        fprintf(stderr,"E2");
    default:
        
        break;
    }}
    //if (strlen(argv[i+1])>20){
        //fprintf(stderr,"E3");
    if ((strcmp(argv[i], "-r") == 0 || strcmp(argv[i], "-R") == 0) && (strlen(argv[i + 1]) < 0 || strlen(argv[i + 1]) > 20)) {
       fprintf(stderr, "E3\n");}

    fgets(pole, 1001, stdin);

    if (dflag){
        remove_digits(pole);
    }

    if (pflag){
        casep(pole);
    }
    if (rflag){
        char param[100];
        if (strcmp((argv[argc-2]),"-r")==0){
            strcpy(param,argv[argc-1]);// parameter
        }
        else{
            strcpy(param,argv[argc-2]);
        }
        printf("%s",param);
        caser(param,pole);
        }

    printf("%s",pole);
    return 0;
}
