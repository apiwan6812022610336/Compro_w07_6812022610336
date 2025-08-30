#include <stdio.h>

int main() {
    float x, y; // ประกาศตัวแปร x y

    // รับค่าจำนวนจากผู้ใช้
    printf("กรอกค่า x: ");
    scanf("%f", &x); // รับค่า x
    printf("กรอกค่า y: ");
    scanf("%f", &y);  // รับค่า y

    // เปรียบเทียบค่า
    if (x > y) {
        printf("x มากกว่า y\n"); //  x>y
    } else if (x < y) {
        printf("x น้อยกว่า y\n"); // x<y
    } else {
        printf("x เท่ากับ y\n"); // x=y
    }

    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}
