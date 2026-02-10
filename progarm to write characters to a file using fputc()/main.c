#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp=fopen("charfile.txt","w");
    if(fp==NULL){
            printf("unable to open the file!\n");
            return 1;
    }
    fputc('A',fp);
    fputc('\n',fp);
    fputc('B',fp);
    fclose(fp);
    printf("characters written sucessfully.\n");
    return 0;
}
