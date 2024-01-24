#include <iostream>
#include <vector>
using namespace std;
int algorithm(int students, int subjects) {
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
		int temp_max = 0;
		for (int j = i, k = 0; k < students; j += subjects, k++) {
			if (marks.at(j) > temp_max) temp_max = marks.at(j);
		}
		max_marks.push_back(temp_max);
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
	cout << "The Number of Succesful Students is: " << algorithm(3, 3);
}
