#include <iostream>

using namespace std;

int solution(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i; // ¦���� i�� sum�� ����
    }
    return sum; // ���� �հ� ��ȯ
}

int main() {
    int n;
    cout << "������ �Է��ϼ���: ";
    cin >> n; // ����ڷκ��� ���� �Է� �ޱ�
    int result = solution(n);
    cout << n << " ������ ¦���� ����: " << result << endl;
    return 0;
}
