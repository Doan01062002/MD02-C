#include <stdio.h>
#include <stdlib.h>
struct Book {
    int id;
    char title[100];
    char author[100];
    double price;
    char genre[100];
};
int numBooks = 0;
struct Book books[100];
void displayMenu() {
    printf("MENU\n");
    printf("1. Nhap so luong va thong tin sach\n");
    printf("2. Luu thong tin sach vao file\n");
    printf("3. Hien thi thong tin sach tu file\n");
    printf("4. Thoat\n");
}
void addBook() {
    if (numBooks == 100) {
        printf("Khong the them sach mang sach da day.\n");
        return;
    }
    struct Book newBook;
    printf("Nhap ma sach: ");
    scanf("%d", &newBook.id);
    getchar();
    printf("Nhap ten sach: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    printf("Nhap tac gia: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    printf("Nhap gia tien: ");
    scanf("%lf", &newBook.price);
    getchar();
    printf("Nhap the loai: ");
    fgets(newBook.genre, sizeof(newBook.genre), stdin);
    books[numBooks] = newBook;
    numBooks++;
    printf("Them sach thanh cong!\n");
}
void saveToFile() {
    FILE *file = fopen("C:\\Users\\Admin\\Desktop\\book.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file!\n");
        return;
    }
    for (int i = 0; i < numBooks; i++) {
        fprintf(file, "%d,%s,%s,%.2lf,%s\n", books[i].id, books[i].title,
                books[i].author, books[i].price, books[i].genre);
    }
    fclose(file);
    printf("Luu thong tin sach vao file thanh cong!\n");
}
void displayFromFile() {
    FILE *file = fopen("C:\\Users\\Admin\\Desktop\\book.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file!\n");
        return;
    }
    char line[500];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}
int main() {
    int choice;
    do {
        displayMenu();
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                saveToFile();
                break;
            case 3:
                displayFromFile();
                break;
            case 4:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le vui long chon lai!\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
