/* ���ϸ�: assignment10.c
 * ����: ���� �ҿ�ð��� �Ǽ��� �Է¹޾� ��, �ð�, ������ ��ȯ�ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void convertFlightTime(void);

int main(void) {
    convertFlightTime();  // �ҿ�ð� ��ȯ �Լ� ȣ��
    return 0;
}

/*
   �Լ���: convertFlightTime
   ���: �ҿ�ð�(�ð�)�� �Ǽ��� �Է¹޾� ��, �ð�, ������ ��ȯ�Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/
void convertFlightTime(void) {
    float totalHours;  // �� �ҿ�ð�(�ð�)
    int days, hours, minutes;

    // �ҿ�ð� �Է� �ޱ�
    printf("���� �ҿ�ð�(�ð�)? ");
    scanf("%f", &totalHours);

    // �� ���
    days = (int)totalHours / 24;
    totalHours = totalHours - (days * 24);  // ���� �ð�

    // �ð� ���
    hours = (int)totalHours;

    // �� ���
    minutes = (int)((totalHours - hours) * 60);  // �Ҽ� �κ��� ������ ��ȯ

    // ��� ���
    printf("���� �ҿ�ð��� %d�� %d�ð� %d���Դϴ�.\n", days, hours, minutes);
}