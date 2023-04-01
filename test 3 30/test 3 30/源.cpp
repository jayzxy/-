
#include <graphics.h>

int main() {
    initwindow(640, 480, "Piggy Hero"); // 创建窗口

    // 绘制猪猪侠的身体
    setfillstyle(SOLID_FILL, RED);
    circle(320, 240, 100);
    floodfill(320, 240, WHITE);

    // 绘制猪猪侠的眼睛
    setfillstyle(SOLID_FILL, WHITE);
    circle(280, 200, 20);
    circle(360, 200, 20);
    setfillstyle(SOLID_FILL, BLACK);
    circle(280, 200, 8);
    circle(360, 200, 8);

    // 绘制猪猪侠的耳朵
    setfillstyle(SOLID_FILL, RED);
    circle(240, 160, 30);
    circle(400, 160, 30);

    // 绘制猪猪侠的口罩和眉毛
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(260, 220, 340, 260);
    line(260, 220, 280, 200);
    line(340, 220, 320, 200);
    line(280, 200, 320, 200);

    // 绘制猪猪侠的鼻子
    setfillstyle(SOLID_FILL, PINK);
    circle(320, 240, 15);

    // 关闭窗口
    getch();
    closegraph();

    return 0;
}