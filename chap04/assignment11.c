/* ���ϸ�: assignment11.c
 * ����: ��ǰ�� ���ݰ� �������� �Է¹޾� ���ΰ��� ���� �ݾ��� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calculateDiscount(void);

int main(void) {
    calculateDiscount();  // ���� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calculateDiscount
   ���: ���ݰ� �������� �Է¹޾� ���ΰ��� ���� �ݾ��� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/
void calculateDiscount(void) {
    int price, discountRate;   // ���ݰ� ������
    int discountAmount, finalPrice;

    // ��ǰ ���ݰ� ������ �Է� �ޱ�
    printf("��ǰ�� ����? ");
    scanf("%d", &price);
    printf("������(%%)? ");
    scanf("%d", &discountRate);

    // ���� �ݾ� ���
    discountAmount = price * discountRate / 100;

    // ���ΰ� ���
    finalPrice = price - discountAmount;

    // ��� ���
    printf("���ΰ�: %d�� (%d�� ����)\n", finalPrice, discountAmount);
}
