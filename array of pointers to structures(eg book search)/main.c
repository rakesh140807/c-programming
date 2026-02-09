#include <stdio.h>
#include <string.h>
struct book{
    int id;
    char title[50];
    char author[50];
};
int main(){
    struct book b1={101,"C PROGRAMMING","Dennis ritchie"};
    struct book b2={102,"data structures","mark weiss"};
    struct book b3={103,"operating system","tonay"};
struct book *books[3]={&b1,&b2,&b3};
int searchID,i,found=0;
printf("enter book id to search:");
scanf("%d",&searchID);
for(i=0;i<3;i++){
        if(books[i]->id==searchID){
                printf("\nbook found\n");
        printf("ID:%d\n",books[i]->id);
        printf("title:%s\n",books[i]->title);
        printf("author:%s\n",books[i]->author);
        found=1;
        break;
        }
}
if(!found)
printf("\nbook not found\n");
return 0;
}
