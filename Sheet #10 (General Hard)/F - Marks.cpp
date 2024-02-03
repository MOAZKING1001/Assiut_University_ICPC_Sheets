#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	long long students, subjects;
	cin >> students >> subjects;
	vector<long long> marks;
	vector<long long> max_marks;
	string marks_per_student_holder;
	long long students_passed = 0;
	for (long long i = 1; i <= students; i++) {
		cin >> marks_per_student_holder;
		for (long long j = 0; j < subjects; j++) {
			marks.push_back(marks_per_student_holder[j] - '0');
		}
	}
	for (long long i = 0; i < subjects; i++) {
		int temp_max = 0;
		for (long long j = i, k = 0; k < students; j += subjects, k++) {
			if (marks.at(j) > temp_max) temp_max = marks.at(j);
		}
		max_marks.push_back(temp_max);
	}
	for (long long i = 0, j = 0; i < students; i++, j += subjects) {
		int passed_temp = 0;
		for (long long k = 0, l = j; k < subjects; k++, l++) {
			if (marks.at(l) == max_marks.at(k)) passed_temp++;
		}
		if (passed_temp) students_passed++;
	}
	cout << students_passed;
}
