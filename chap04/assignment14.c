/* ���ϸ�: assignment14.c
 * ����: �⺻ ��ݰ� �� ��뷮�� �Է¹޾� ���� ����� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calculateElectricBill(void);

int main(void) {
    calculateElectricBill();  // ���� ��� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calculateElectricBill
   ���: �⺻ ��ݰ� �� ��뷮�� �Է¹޾� ���� ����� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/

void calculateElectricBill(void) {
    int baseFee, usage;       // �⺻ ��ݰ� �� ��뷮
    int totalBill;            // ���� ���

    // �⺻ ��ݰ� �� ��뷮 �Է� �ޱ�
    printf("�⺻ ���? ");
    scanf("%d", &baseFee);
    printf("�� ��뷮(kWh)? ");
    scanf("%d", &usage);

    // ���� ��� ��� (�⺻ ��� + ��뷮 * 190)
    totalBill = baseFee + usage * 190;

    // ��� ���
    printf("���� ���: %d��\n", totalBill);
}