/* ���ϸ�: assignment04.c
 * ����: ��ſ� ������ ������ �Է¹޾� �ۼ�Ʈ �󵵸� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calcPercent(void);

int main(void) {
    calcPercent();  // �ۼ�Ʈ �� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calcPercent
   ���: ���, ������ ������ �Է¹ް� �ۼ�Ʈ �󵵸� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/

void calcPercent(void) {
    int solvent, solute;         // ��ſ� ������ ���� (g)
    double percent;              // �ۼ�Ʈ �� (%)

    // ���� �Է�
    printf("���(g)? ");
    scanf("%d", &solvent);
    printf("����(g)? ");
    scanf("%d", &solute);

    // �� ��� �� ���
    percent = (double)solute / (solvent + solute) * 100;
    printf("��: %.2f %%\n", percent);
}
