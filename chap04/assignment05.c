/* ���ϸ�: assignment05.c
 * ����: �������� ���̸� �Է¹޾� ������� ���Ǹ� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // ��� ����
#define PI 3.141592

// �Լ� ����
void calcCylinderVolume(void);

int main(void) {
    calcCylinderVolume();  // ����� ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calcCylinderVolume
   ���: �������� ���̸� �Է¹ް� ������� ���Ǹ� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/
void calcCylinderVolume(void) {
    int r, h;            // ������, ���� (����)
    double volume;       // ���� (�Ǽ�)

    // �Է�
    printf("�������� ����? ");
    scanf("%d", &r);
    printf("���� ");
    scanf("%d", &h);

    // ���� ���: �� �� r�� �� h
    volume = PI * r * r * h;

    // ���
    printf("������� ����: %f\n", volume);
}
