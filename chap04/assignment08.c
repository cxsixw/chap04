/* ���ϸ�: assignment08.c
 * ����: �������� �Է¹޾� ���� ���Ǹ� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // ��� ����
#define PI 3.141592

// �Լ� ����
void calcSphereVolume(void);

int main(void) {
    calcSphereVolume();  // ���� ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calcSphereVolume
   ���: �������� �Է¹ް� ���� ���Ǹ� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/

void calcSphereVolume(void) {
    int r;            // ������ (������)
    double volume;    // ���� ���� (�Ǽ���)

    // ������ �Է�
    printf("�������� ����? ");
    scanf("%d", &r);

    // ���� ���� ���: (4/3) * �� * r��
    volume = (4.0 / 3.0) * PI * r * r * r;

    // ���� ���
    printf("���� ����: %f\n", volume);
}