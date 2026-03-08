#include <stdio.h> 
#include <stdlib.h>

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
}

void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 

/*
void DisplayData(struct Books CBook) คือ ฟังก์ชั่นรับตัวแปรที่เป็น struct แล้วทำการแสดงผล BookID และ BookTitle ออกทางหน้าจอ
พารามิเตอร์ที่รับเข้ามา คือ การส่งค่าแบบ pass by value นั่นคือการ copy ค่าจาก struct ที่ส่งมามาเก็บไว้ใน struct ที่ชื่อ CBook ซึ่งเป็น local variable
*/