/* ���ϸ�: assignment07.c
 * ����: �����ﰢ������ �غ��� ���̸� �Է¹޾� ������ ���̸� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>  // sqrt �Լ� ����� ���� ����

 // �Լ� ����
void calcHypotenuse(void);

int main(void) {
    calcHypotenuse();  // ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calcHypotenuse
   ���: �غ��� ���̸� �Է¹޾� ��Ÿ��� ������ ���� ��� �� ���
   �Է�: ����
   ��ȯ: ����
*/

void calcHypotenuse(void) {
    int a, b;           // �غ��� ���� (������)
    double c;           // ���� (�Ǽ���)

    // �Է�
    printf("�غ�? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &b);

    // ��Ÿ��� ����: c = ��(a�� + b��)
    c = sqrt((double)(a * a + b * b));

    // ���
    printf("���� ���� %f\n", c);
}