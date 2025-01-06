#include <iostream>

using namespace std;

int solution(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i; // 짝수인 i를 sum에 더함
    }
    return sum; // 최종 합계 반환
}

int main() {
    int n;
    cout << "정수를 입력하세요: ";
    cin >> n; // 사용자로부터 정수 입력 받기
    int result = solution(n);
    cout << n << " 이하의 짝수의 합은: " << result << endl;
    return 0;
}
