/* ���ϸ�: assignment03.c
 * ����: Chap04-03 ���� - ������ ���Ǹ� �Է¹޾� �е��� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.4.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcDensity(double m, double v);  // �Լ� ����

int assignment0403(void);

int main(void) {
    assignment0403();
    return 0;
}

int assignment0403(void) {
    double m = 0.0, v = 0.0;
    printf("����(g)? ");
    scanf("%lf", &m);
    printf("����(��������Ƽ����)? ");
    scanf("%lf", &v);

    printf("�е�: %lf\n", calcDensity(m, v));
    return 0;
}

double calcDensity(double m, double v) {
    return m / v;
}
