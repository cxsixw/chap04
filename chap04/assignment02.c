/* ���ϸ�: assignment01.c
 * ����: Chap04-02 ���� - wlffidrh
 * �ۼ���: ������
 * ��¥: 2025.4.15
 * ����: v0.1
 */

 /* ���ϸ�: assignment02.c
  * ����: Chap04-02 ���� - ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷�
  * �ۼ���: ������
  * ��¥: 2025.4.15
  * ����: v0.1
  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // �Լ� ���� ����
double convertFtoC(double fahrenheit);
int assignment0402(void);

int main(void)
{
    assignment0402();  // ���� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: assignment0402()
   ���(å��): ȭ�� �µ��� �Է¹ް�, ���� �µ��� ��ȯ�� �� ���
   �Է�: ����
   ��ȯ: ����. 0�̸� ���� ����
*/
int assignment0402(void)
{
    double f = 0.0;  // ȭ�� �µ�
    double c = 0.0;  // ���� �µ�

    // �Է�
    printf("ȭ���µ�? ");
    scanf("%lf", &f);

    // ��ȯ
    c = convertFtoC(f);

    // ���
    printf("%.2lf F = %.2lf C\n", f, c);

    return 0;
}

/*
   �Լ���: convertFtoC()
   ���(å��): ȭ�� �µ��� ���� �µ��� ��ȯ�Ͽ� ��ȯ
   �Է�: ȭ�� �µ� (double)
   ��ȯ: ���� �µ� (double)
*/

double convertFtoC(double fahrenheit)
{
    double celsius = 0.0;

    // ���� �µ� = (ȭ�� - 32) * (5.0 / 9.0)
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    return celsius;
}
