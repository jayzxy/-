
#include <graphics.h>

int main() {
    initwindow(640, 480, "Piggy Hero"); // ��������

    // ����������������
    setfillstyle(SOLID_FILL, RED);
    circle(320, 240, 100);
    floodfill(320, 240, WHITE);

    // �������������۾�
    setfillstyle(SOLID_FILL, WHITE);
    circle(280, 200, 20);
    circle(360, 200, 20);
    setfillstyle(SOLID_FILL, BLACK);
    circle(280, 200, 8);
    circle(360, 200, 8);

    // �����������Ķ���
    setfillstyle(SOLID_FILL, RED);
    circle(240, 160, 30);
    circle(400, 160, 30);

    // �����������Ŀ��ֺ�üë
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(260, 220, 340, 260);
    line(260, 220, 280, 200);
    line(340, 220, 320, 200);
    line(280, 200, 320, 200);

    // �����������ı���
    setfillstyle(SOLID_FILL, PINK);
    circle(320, 240, 15);

    // �رմ���
    getch();
    closegraph();

    return 0;
}