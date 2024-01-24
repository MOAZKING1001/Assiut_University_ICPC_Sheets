#include <iostream>
#include <vector>
using namespace std;
int algorithm() {
	int students, subjects;
	string temp;
	getline(cin, temp);
	students = temp[0] - '0';
	subjects = temp[2] - '0';
	vector<int> marks;
	vector<int> max_marks;
	string marks_per_student_holder;
	int students_passed = 0;
	for (int i = 1; i <= students; i++) {
		cout << "Enter Subjects Mark's For Student " << i << "\n";
		cin >> marks_per_student_holder;
		for (int j = 0; j < subjects; j++) {
			marks.push_back(marks_per_student_holder[j] - '0');
		}
	}
	for (int i = 0; i < subjects; i++) {
		int max_temp = 0;
		for (int j = i, k = 0; k < students; j += subjects, k++) {
			if (marks.at(j) > max_temp) max_temp = marks.at(j);
		}
		max_marks.push_back(max_temp);
	}
	for (int i = 0, j = 0; i < students; i++, j += subjects) {
		int passed_temp = 0;
		for (int k = 0, l = j; k < subjects; k++, l++) {
			if (marks.at(l) == max_marks.at(k)) passed_temp++;
		}
		if (passed_temp) students_passed++;
	}
	return students_passed;
}
int main() {
	cout << algorithm();
}
