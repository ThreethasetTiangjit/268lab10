#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(&ComputerBook);    // ส่งตำแหน่งที่อยู่ข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 

void DisplayData(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
} 

/*
(*CBook).BookID คือ ใส่ * นำหน้า CBook ซึ่งเป็น pointer เพื่อ dereference ไปยัง struct ที่ส่งเข้ามานั่นคือ ComputerBook
CBook->BookTitle คือ อีกรูปย่อของ (*CBook).BookTitle
*/