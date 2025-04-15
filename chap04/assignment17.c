/* ���ϸ�: assignment17.c
 * ����: 7, 15, 23, 31�� ��Ʈ�� 1�� 32��Ʈ ���� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#include <stdio.h>

void printBitValues(void);

int main(void) {
    printBitValues();  // ��Ʈ ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: printBitValues
   ���: 7, 15, 23, 31��° ��Ʈ�� 1�� ���� 16���� �� 10������ ���
   �Է�: ����
   ��ȯ: ����
*/

void printBitValues(void) {
    unsigned int bit7 = 1u << 7;   // 7�� ��Ʈ�� 1
    unsigned int bit15 = 1u << 15;  // 15�� ��Ʈ�� 1
    unsigned int bit23 = 1u << 23;  // 23�� ��Ʈ�� 1
    unsigned int bit31 = 1u << 31;  // 31�� ��Ʈ�� 1

    printf("7�� ��Ʈ�� 1�� ��: %08X %u\n", bit7, bit7);
    printf("15�� ��Ʈ�� 1�� ��: %08X %u\n", bit15, bit15);
    printf("23�� ��Ʈ�� 1�� ��: %08X %u\n", bit23, bit23);
    printf("31�� ��Ʈ�� 1�� ��: %08X %d\n", bit31, (int)bit31);  // 10������ ��ȣ �ִ� ������ ���
}