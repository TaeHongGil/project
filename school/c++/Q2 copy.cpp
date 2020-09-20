#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n = 0;
    int sum = 0;
    float average = 0;

    cout << "벡터의 크기를 입력하세요 : ";
    cin >> n; //벡터의 크기 입력

    vector<int> num(n);
    cout << n << "개의 정수를 입력하세요. : ";
    for(int i = 0; i < n; i++)
    {
        cin >> num[i]; //벡터의 값 입력
    }

    cout << "입력한 정수 : ";
    for(int a : num)
    {
        cout << a << " "; //벡터 출력
    }
    cout << "\n";

    for(int a : num)
    {
        sum += a;
    }

    for(int a : num)
    {
        average += a;
    }

    cout << "정수의 합 : " << sum << "\n"; //벡터의 합
    cout << "정수의 평균 : " << average/n << "\n"; //벡터의 평균값
}