/* ���ϸ�: assignment09.c
 * ����: �������� ����ð��� �� ������ �Է¹޾� �ð��� ����Ͽ� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 // �Լ� ����
void convertTime(void);

int main(void) {
    convertTime();  // ����ð� ��ȯ �Լ� ȣ��
    return 0;
}

/*
   �Լ���: convertTime
   ���: ����ð�(��)�� �Է¹޾� �ð�, ��, �ʷ� ��ȯ�Ͽ� ���
   �Է�: ����
   ��ȯ: ����
*/

void convertTime(void) {
    int totalSeconds;  // �� ����ð�(��)
    int hours, minutes, seconds;

    // �� ������ ����ð� �Է� �ޱ�
    printf("����ð�(��)? ");
    scanf("%d", &totalSeconds);

    // �ð� ���
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;  // ������(�ʷ� ���� �ð�)

    // �� ���
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;  // ������(�ʷ� ���� �ð�)

    // ��� ���
    printf("����ð��� %d�ð� %d�� %d���Դϴ�.\n", hours, minutes, seconds);
}