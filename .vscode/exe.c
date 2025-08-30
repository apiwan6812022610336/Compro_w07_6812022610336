#include <stdio.h>

int main(void) {
    int age, VIP_level;
    double Purchase_amount;   // ใช้ double ให้คำนวณนิ่งกว่า

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 1;

    printf("Enter VIP level (1-5): ");
    if (scanf("%d", &VIP_level) != 1) return 1;

    printf("Enter purchase amount: ");
    if (scanf("%lf", &Purchase_amount) != 1) return 1;  // %lf สำหรับ double

    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP level: %d | Amount: %.2f\n\n", age, VIP_level, Purchase_amount);

    // เลือก "ส่วนลดสูงสุด" ที่เข้าเงื่อนไข
    double rate = 0.0;

    if (VIP_level == 5 || Purchase_amount > 50000.00) {
        rate = 0.25;
        printf("Discount received 25%%\n");
    } else if (age > 60 || VIP_level == 3 || VIP_level == 4) {
        rate = 0.20;
        printf("Discount received 20%%\n");
    } else if ((age >= 30 && age <= 40) && Purchase_amount > 2000.00) {
        rate = 0.15;
        printf("Discount received 15%%\n");
    } else if ((age >= 18 && age <= 25) && Purchase_amount > 1000.00) {
        rate = 0.10;
        printf("Discount received 10%%\n");
    } else {
        printf("No discount received\n");
    }

    // แสดงยอดหลังหักส่วนลด (เผื่ออาจารย์ให้คะแนนเพิ่ม)
   
    return 0;
}
