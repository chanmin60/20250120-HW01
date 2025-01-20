#include <iostream>
using namespace std;

int calculateSum(int numbers[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
	}
	return sum;
}

double calculateAverage(int numbers[], int size)
{
	double sum = calculateSum(numbers, size);
	double average = sum / size;
	return sum;
}

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	
	cout << "다섯 숫자를 입력하세요\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i+1 << "번째 숫자 : ";
		cin >> numbers[i];
	}
	int total = calculateSum(numbers, SIZE);
	int average = calculateAverage(numbers, SIZE);
	cout << "다섯 숫자의 합계는 : " << total<<"\n";
	cout << "다섯 숫자의 평균은 : " << average << "\n";
	return 0;
}