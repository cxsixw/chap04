/* ���ϸ�: assignment16.c
 * ����: red, green, blue ���� �Է¹޾� RGB Ʈ���÷�(24��Ʈ ����)�� 16������ ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeRGB(void);

int main(void) {
    makeRGB();  // RGB ���� ���� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: makeRGB
   ���: red, green, blue ���� �Է¹޾� RGB Ʈ���÷��� �����ϰ� 16������ ���
   �Է�: ����
   ��ȯ: ����
*/

void makeRGB(void) {
    int red, green, blue;
    unsigned int color = 0;

    // 1. red, green, blue �� �Է� �ޱ�
    printf("red? ");
    scanf("%d", &red);
    printf("green? ");
    scanf("%d", &green);
    printf("blue? ");
    scanf("%d", &blue);

    // 2. ��Ʈ �̵��� OR �������� RGB ���� ���� (24��Ʈ)
    color = (blue << 16) | (green << 8) | red;

    // 3. 16������ ��� (�빮��, 6�ڸ� ����)
    printf("RGB Ʈ���÷�: %06X\n", color);
}