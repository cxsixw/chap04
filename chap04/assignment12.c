/* ���ϸ�: assignment12.c
 * ����: �̵� �Ÿ��� ���� �ӷ����� ���� ���� �ҿ� �ð��� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void calculateArrivalTime(void);

int main(void) {
    calculateArrivalTime();  // ���� ���� �ҿ�ð� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calculateArrivalTime
   ���: �̵� �Ÿ��� ���� �ӷ��� �Է¹޾� ���� ���� �ҿ� �ð��� ����Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/

void calculateArrivalTime(void) {
    float distance, speed;  // �̵� �Ÿ�(km), ���� �ӷ�(km/h)
    int timeInMinutes;      // ���� �ҿ� �ð�(��)

    // �̵� �Ÿ��� ���� �ӷ� �Է� �ޱ�
    printf("�̵� �Ÿ�(km)? ");
    scanf("%f", &distance);
    printf("���� �ӷ�(km/h)? ");
    scanf("%f", &speed);

    // �ҿ� �ð� ��� (�ð� = �Ÿ� / �ӷ�, ������ ��ȯ)
    timeInMinutes = (int)((distance / speed) * 60);

    // ��� ���
    printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.\n", timeInMinutes);
}