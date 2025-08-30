/*

#include<stdio.h>

int Membership_level;

int main() {

printf("Enter membership level: ");

scanf("%d", & Membership_level);

if(Membership_level == 1){ printf("Silver Member: 5%% discount\n");}

else if(Membership_level == 2){ printf("Gold Memmber:10%% discount + Reward points\n");}

else if(Membership_level == 3){ printf("Platinum Member:15%% discount + Reward points + Birthday gift\n");}

else if(Membership_level == 4){ printf("Dimond Member: ได้ทุกอย่าง + VIP events\n");}

else {printf("Invalid membership level\n");}


return 0;

}  

*/

#include <stdio.h>

int membership_level;

int main(){

printf("Enter membership level: ");
scanf("%d", &membership_level);

switch (membership_level){

    case 1: printf("Silver Member: 5%% discount\n"); break;

    case 2: printf("Gold Member: 10%% discount + Reward points\n"); break;

    case 3: printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n"); break;

    case 4: printf("Dimond Member: ได้ทุกอย่าง + VIP events\n"); break;

    default: printf("Invalid membership level\n"); break;

}

return 0;

}

/*  

การใช้ if else : ข้อดี-สามารถเพิ่มตัวเเปรใหม่ได้ง่าย , ข้อเสีย-ถ้ามีหลายเงื่อนไขจะทำให้โค้ดยาวและอ่านยาก //ยืดหยุ่นกว่าในการเพิ่มหรือลดเงื่อนไข-ตัวแปร
การใช้ switch case : ข้อดี-โค้ดสั้นและอ่านง่าย , ข้อเสีย-เพิ่มตัวเเปรใหม่ได้ยาก //โค้ดสั้นกระชับอ่านง่าย-ค่าคงที่
ในโค้ดนี้เหมาะกับการใช้ switch case เพราะมีตัวเลือกที่ชัดเจนและไม่ซับซ้อนเเละมีตัวเเปรเพียงชนิดเดียว

*/

