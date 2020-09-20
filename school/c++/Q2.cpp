#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &num)
{
    cout << "입력한 정수 : ";
    for(int a : num)
    {
        cout << a << " ";
    }
    cout << "\n";
}

int sum(vector<int> &num)
{
    int result = 0;

    for(int a : num)
    {
        result += a;
    }
    return result;
}

float average(vector<int> &num, int n)
{
    float result = 0;

    for(int a : num)
    {
        result += a;
    }
    return (result/n);
}

int main() 
{
    int n = 0;

    cout << "벡터의 크기를 입력하세요 : ";
    cin >> n; //벡터의 크기 입력

    vector<int> num(n);
    cout << n << "개의 정수를 입력하세요. : ";
    for(int i = 0; i < n; i++)
    {
        cin >> num[i]; //벡터의 값 입력
    }
    print(num); //벡터 출력
    cout << "정수의 합 : " << sum(num) << "\n"; //벡터의 합
    cout << "정수의 평균 : " << average(num, n) << "\n"; //벡터의 평균값
}