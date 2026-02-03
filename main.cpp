#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int calculateSum(const int scores[], int size0)
{
	int sum = 0;
	for (int i = 0; i < size0; i++)//switches though the elements
	{
		sum += scores[i];//adds each value as the elements are switched
	}
	return sum;
}

double calculateAverage(double sum, int size)//^the sum was already calculated^
{					//all you need to add is the size
	return sum/size;//divides them^
}

void addBonus(int scores[], int size, int bonus)
{
	for (int i = 0; i < size; i++)//switches though the elements
	{
		scores[i] += bonus;//adds the bonus to each score
		cout << scores[i] << "  ";
	}
	cout << endl;
}

int findMinimum(const int* scores, int size)
{
	int min = scores[0];//the frist element is set as the min
	for (int i = 0; i < size; i++)//switches though the elements
	{
		if (scores[i] < min)//checks is the element is lower then the min
		{
			min = scores[i];//if the element is lower then the min it becomes the new min 
		}//and repeat
	}
	return min;
}

int countHighPerformers(const int scores[], int size)
{
	int highProformers = 0;//this is the counter starting at 0
	for (int i = 0; i < size; i++)//switches though the elements
	{
		if (scores[i] >= 80)//checks if the score is 80 or better
		{
			highProformers += 1;//if the score is 80 or better it adds 1 to the counter
		}
	}
	return highProformers;
}

int main()
{
	int ary[10] = { 75, 88, 62, 95, 50, 82, 70, 91, 45, 78 };

	cout << "Original Scores: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << ary[i] << "  ";
	}
	cout << endl;

	double sum = calculateSum(ary, 10);
	cout << "Sum: " << sum << endl;

	double average = calculateAverage(sum, 10);
	cout << "Average: " << fixed << setprecision(2) << average << endl;

	addBonus(ary, 10, 10);

	int min = findMinimum(ary, 10);
	cout << "Minimum score: " << min << endl;

	int highScores = countHighPerformers(ary, 10);
	cout << "High Preformers (>=80): " << highScores << endl;
	
	return 0;
}