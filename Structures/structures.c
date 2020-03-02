#include <stdio.h>
#include <string.h>

struct books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){
    struct books book1;
    struct books book2;

    strcpy(book1.title,"Qwerty");
    strcpy(book1.author,"asdf");
    strcpy(book1.subject,"afasf");
    book1.book_id = 234567;

    strcpy(book2.title,"erufhie");
    strcpy(book2.author,"suifgis");
    strcpy(book2.subject,"esgre");
    book2.book_id = 435938;
   
    printf("Book title:%s\n", book1.title);
}

