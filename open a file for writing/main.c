#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("data 4.txt","w");
    if(fp==NULL){
            printf("file cant be opened!\n");
            return 1;
    }
    fprintf(fp,"welcome to c programming\n");
    fprintf(fp,"this txt is written into the file.\n");
    fclose(fp);
    printf("the data is written succesfuly.\n");
    return 0;
}
