#include <stdio.h>

typedef enum {
    front_axle_left_wheel_speed, // перднее левое
    front_axle_righ_wheel_speed, // перднее правое
    rear_axle_left_wheel_speed, // заднее левое
    rear_axle_righ_wheel_speed, // заднее правое
    wheel_counts, // просто кол-во колес
} wheel_pos;

float CalculateWheelSpeed(int wheel_speed[]) {
    float avg_speed = (wheel_speed[front_axle_left_wheel_speed] 
        + wheel_speed[front_axle_righ_wheel_speed] 
        + wheel_speed[rear_axle_left_wheel_speed] 
        + wheel_speed[rear_axle_righ_wheel_speed])
        / 4.0;
        printf("скорость ВАТС = %.1f \n", avg_speed);
        return avg_speed;
}


int main(void) {
    int wheel_speed[wheel_counts] = {};
    char *promts[wheel_counts] = {
         "Введите скорость переднего левого колеса: ",
         "Введите скорость переднего правого колеса: ",
         "Введите скорость заднего левого колеса: ",
         "Введите скорость заднего правого колеса: ",
    };

    for (int i = 0; i < wheel_counts; i++) {
        printf("%s\n", promts[i]);
        scanf("%d", &wheel_speed[i]);
    }
    float avg_speed = CalculateWheelSpeed(wheel_speed);
    int abs_enable = 0;
    for (int i = 0; i < wheel_counts && abs_enable == 0; i++) {
        if (wheel_speed[i] < 0.85 * avg_speed) {
            printf("Активировать ABS \n");
            abs_enable = 1;
        } 
    }
    
    return 0;
}