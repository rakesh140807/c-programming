#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fp;
    fp=fopen("example.txt","w");
    if(fp==NULL){
            printf("file opening failed!\n");
            return 1;
    }
    printf("file opened successfully using fopen().\n");
    fclose(fp);
    printf("file closed successfully using fclose().\n");
    return 0;
}
