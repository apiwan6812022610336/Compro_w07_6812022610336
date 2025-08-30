/*
#include<stdio.h>

int main(){
    int level;
    printf("Enter your level (1-4): ");
    scanf("%d", &level);

    switch (level) {
        case 1: printf("Beginner\n");
        case 2: printf("Intermediate\n");
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        default: printf("Invalid level\n");
    
    }

    return 0;
}


--เมื่อใส่ level เป็น 1 จะได้ผลลัพธ์: Beginner Intermediate Advanced
--เมื่อใส่ level เป็น 2 จะได้ผลลัพธ์: Intermediate Advanced
--เมื่อใส่ level เป็น 3 จะได้ผลลัพธ์: Advanced
--เมื่อใส่ level เป็น 4 จะได้ผลลัพธ์: Expert
--เมื่อใส่ level เป็นค่าอื่น นอกเหนือจาก 1-4 จะได้ผลลัพธ์: Invalid level
--เมื่อไม่ใส่ break; ใน case 1 และ 2 จะทำให้โปรแกรมทำงานต่อเนื่องไปยัง case ถัดไปจนกว่าจะเจอ break; หรือจบ switch
--เมื่อใส่ค่าอื่นนอกจาก 1-4 จะเข้าสู่ default case และแสดงข้อความ "Invalid level"

*/

#include <stdio.h>

int main() {
    int level;

    printf("Enter level: ");
    scanf("%d", &level);

    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    } 
    else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } 
    else {
        

        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
        }
    }

    return 0;
}

/*  

เมื่อใส่ level เป็น -4,0 จะได้ผลลัพธ์: The level below 1 is not allowed
เมื่อใส่ level เป็น 100 จะได้ผลลัพธ์: The level above 4 is not allowed
เมื่อใส่ level เป็น 1 จะได้ผลลัพธ์: Beginner
เมื่อใส่ level เป็น 2 จะได้ผลลัพธ์: Intermediate
เมื่อใส่ level เป็น 3 จะได้ผลลัพธ์: Advanced
เมื่อใส่ level เป็น 4 จะได้ผลลัพธ์: Expert

*/
