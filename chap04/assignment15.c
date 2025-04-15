/* ���ϸ�: assignment15.c
 * ����: ��-�޷� �Ÿű������� ȯ��������� �̿��� ȯ���� ����ϰ�,
 *       ������ �޷��� �ش��ϴ� ��ȭ �ݾ��� ����ϴ� ���α׷�
 * �ۼ���: ������
 * ��¥: 2025.04.15
 * ����: v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculateExchangeRate(void);

int main(void) {
    calculateExchangeRate();  // ȯ�� ��� �Լ� ȣ��
    return 0;
}

/*
   �Լ���: calculateExchangeRate
   ���: ��-�޷� �Ÿű�����, ȯ�������, ���� �޷� �Է��� �޾�
   ȯ���� ����ϰ� ��ȭ �ݾ��� ���
   �Է�: ����
   ��ȯ: ����
*/

void calculateExchangeRate(void) {
    double baseRate, discountRate, exchangeRate, dollarsToBuy, wonAmount;
    const double transactionFee = 1.75 / 100.0;  // ȯ�� �������� 1.75%

    // 1. ��/�޷� �Ÿű������� ȯ������� �Է� �ޱ�
    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &baseRate);
    printf("ȯ�������(0~100%)? ");
    scanf("%lf", &discountRate);

    // 2. ȯ�������Ḧ ������ ���� ȯ�� ���
    exchangeRate = baseRate * (1 + transactionFee) * (1 - discountRate / 100.0);

    // 3. ���� ȯ�� ���
    printf("�޷� �� �� ȯ���� %.8f�Դϴ�.\n", exchangeRate);

    // 4. ������ �޷� �Է� �ޱ�
    printf("������ �޷�(USD)? ");
    scanf("%lf", &dollarsToBuy);

    // 5. ��ȭ�� ȯ��
    wonAmount = dollarsToBuy * exchangeRate;

    // 6. ��ȭ �ݾ� ���
    printf("USD %.2f �� �� ==> KRW %.2f\n", dollarsToBuy, wonAmount);
}
