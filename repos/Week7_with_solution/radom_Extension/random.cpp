#include <iostream>
#include <format>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <vector>
#include <numeric>
#include <functional>
#include <queue>

using namespace std;
int sum(int[],int);
double average(int[],int);
int fact(int n);
void showMetrix(int(*arr)[12],int);
int get_max_number(int[], int);
int get_prod(int[], int);
int main() {
	srand(time(NULL));
	vector <int> v2;
	queue <int> sum_buffer;
	queue <int> Fact_buffer;
	queue <double> Avg;
	queue <int> Prod_buffer;
	int buffer = 0;
	int range;
	while (true)
	{
		cout << format("num(3-11)사이 입력:");
		cin >> range;
		if (range < 3 || range>11) {
			cout << format("3-11사이를 입력해주세여") << endl;
			cout << format("프로그램을 종료합니다") << endl;
			exit;
		}
		else if (range % 2 == 0) {
			cout << format("짝수값을 입력하셨습니다 재입력 요청") << endl;
			continue;

		}
		else
		{
			break;
		}
	}
	int arr[12][12] = { 0 };
	for (int i = 0; i < range; i++) {
		for (int j = 0; j < range; j++) {
			arr[i][j] = rand() % range + 1;
		}
	}
	for (int i = 1; i < range+1; i++) {
		cout << format("{} ",i);
	}
	cout << format("Sum Prod Fact Avg")<<endl;
	showMetrix(arr,range);
	for (int i = 0; i < range; i++) {
		int max, fact, sum, average;
		int prod = 1;
		v2.clear();
		for (int j = 0; j < range; j++) {
			buffer=arr[j][i];
			v2.push_back(buffer);
		}
		max = *max_element(v2.begin(), v2.end());
		sum = accumulate(v2.begin(), v2.end(), 0);
		average = sum / range;
		fact = tgamma(max + 1);
		sum_buffer.push(sum);
		Avg.push(average);
		Fact_buffer.push(fact);
		for (int i = 0; i < v2.size(); i++) {
			prod *= v2[i];

		}
		Prod_buffer.push(prod);
	

	}
	cout << format("\n\n");
	cout << format("Sum ");
	for (int i = 0; i < range; i++) {
		cout << format("{} ", sum_buffer.front());
		sum_buffer.pop();
	}
	cout << endl;
	cout << format("Prod ");
	for (int i = 0; i< range; i++) {
		cout << format("{} ", Prod_buffer.front());
		Prod_buffer.pop();
	}

	cout << endl;
	cout << format("Fact ");
	for (int i = 0; i < range; i++) {
		cout << format("{} ", Fact_buffer.front());
		Fact_buffer.pop();
	}
	cout << endl;
	cout << format("AVG ");
	for (int i = 0; i < range; i++) {
		cout << format("{} ", Avg.front());
		Avg.pop();
	}

}
void showMetrix(int(*arr)[12],int count) {
	int max = 0;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			cout << format("{} ",arr[i][j]);
		}
		max = get_max_number(arr[i], count);
		cout << format("{} {} {} {:.1f} ", sum(arr[i],count),get_prod(arr[i],count), fact(max), average(arr[i], count));
		cout << endl;
	}

}
double average(int data[],int count)
{	
	int total = 0;
	for (int i = 0; i < count; i++) {
		total += data[i];
	}
	double average;
	average = (double)total / count;

	return average;
}
int fact(int n) {
	return tgamma(n + 1);
}
int sum(int data[],int count) {
	int total = 0;
	for (int i = 0; i < count; i++) {
		total += data[i];
	}
	return total;

}
int get_max_number(int data[], int count) {
	int max = 0;
	for (int i = 0; i < count; i++) {
		if (data[i] > max) {
			max = data[i];
		}
	}

	return max;

}
int get_prod(int data[], int count) {
	int total = 0;
	for (int i = 0; i < count; i++) {
		total *= data[i];
	}

	return total;
}
