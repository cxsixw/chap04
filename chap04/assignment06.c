/* ���ϸ�: assignment06.c
 * ����: �� ���� ��ǥ�� �Է¹޾� ������ ���⸦ ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calcSlope(void);

int main(void) {
    calcSlope();  // ������ ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calcSlope
   ���: �� ���� ��ǥ�� �Է¹޾� ������ ���⸦ ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/
void calcSlope(void) {
    int x1, y1, x2, y2;    // �� ���� ��ǥ
    double slope;          // ����

    // ��ǥ �Է�
    printf("�� ���� ��ǥ (x1, y1)? ");
    scanf("%d %d", &x1, &y1);
    printf("�� �ٸ� ���� ��ǥ (x2, y2)? ");
    scanf("%d %d", &x2, &y2);

    // ���� ���
    slope = (double)(y2 - y1) / (x2 - x1);

    // ��� ���
    printf("������ ���� : %f\n", slope);
}
