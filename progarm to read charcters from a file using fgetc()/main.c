#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("charfile.txt","w");
    if(fp==NULL){
            printf("file not found!\n");
            return 1;
    }
    printf("file contents:\n");
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
