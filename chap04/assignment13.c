/* ���ϸ�: assignment13.c
 * ����: �� ���� ��ǥ�� �Է¹޾� ������ ���̸� ���ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt() �Լ��� ����ϱ� ���� math.h ����

 // �Լ� ����
void calculateLineLength(void);

int main(void) {
    calculateLineLength();  // ������ ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calculateLineLength
   ���: ������ �������� ���� ��ǥ�� �Է¹޾� ������ ���̸� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/
void calculateLineLength(void) {
    int x1, y1, x2, y2;  // ������ ������(x1, y1)�� ����(x2, y2) ��ǥ
    double length;        // ������ ����

    // �������� ���� ��ǥ �Է� �ޱ�
    printf("������ ������ (X1, y1)? ");
    scanf("%d %d", &x1, &y1);
    printf("������ ���� (x2, Y2)? ");
    scanf("%d %d", &x2, &y2);

    // ��Ÿ��� ���� �����Ͽ� ������ ���� ���
    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // ��� ���
    printf("������ ����: %f\n", length);
}