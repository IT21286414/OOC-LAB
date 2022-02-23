#include <iostream>
#include <iomanip>
using namespace std;

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

int main()
{
	float CA1[5], CA2[5];
	int mark1[5], mark2[5];
	int t;

	for (t = 0; t < 5; t++)
	{
		cout << "*****Student " << t + 1 << "*****" << endl;
		cout << "Mark 1 : ";
		cin >> mark1[t];

		cout << "Mark 2 : ";
		cin >> mark2[t];

		findMarks(mark1[t], mark2[t], CA1[t], CA2[t]);

		cout << endl;
	}

	cout << setw(10) << "Student" << setw(10) << "mark1" << setw(10) << "mark2" << setw(15) <<setiosflags(ios::fixed) << setprecision(2) << "CA_1" << setw(15) << setiosflags(ios::fixed) << setprecision(2) << "CA_2" << endl;
	for (t = 0; t < 5; t++)
	{
		cout << setw(10) << t + 1 << setw(10) << mark1[t] << setw(10) << mark2[t] << setw(15) << CA1[t] << setw(15) << CA2[t] << endl;
	}

	return 0;
}

void findMarks(int t_marks1, int t_marks2, float &t_CA1, float &t_CA2)
{
	t_CA1 = t_marks1 * (20 / 100.0);
	t_CA2 = t_marks2 * (30 / 100.0);
}
