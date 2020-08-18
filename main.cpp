#include <cmath>
#include <iostream>
#include <vector>
#include <string>

double grade_to_gpa(std::string grade);

int main() {
	std::vector<std::pair<int, int>> classes;
	std::string class_name = "";
	while (class_name != "done") {
		std::cout << "Enter class name or \' done \' to quit.\n";
		std::getline(std::cin, class_name);
		if (class_name == "done") break;
		std::cout << "How many credit hours?\n";
		double credits = 0;
		std::cin >> credits;
		std::cout << "What grade did you get?\nFormat: A+, B, C-";
		std::string grade;
		std::cin >> grade;
		classes.push_back(std::make_pair(credits, grade_to_gpa(grade)));
	}

	

	return 0;
}

double grade_to_gpa(std::string grade) {
	if (grade == "A+") {
		return 4.0;
	}
	if (grade == "A") {
		return 4.0;
	}
	if (grade == "A-") {
		return 3.7;
	}
	if (grade == "B+") {
		return 3.3;
	}
	if (grade == "B") {
		return 3.0;
	}
	if (grade == "B-") {
		return 2.7;
	}
	if (grade == "C+") {
		return 2.3;
	}
	if (grade == "C") {
		return 2.0;
	}
	if (grade == "C-") {
		return 1.7;
	}
	if (grade == "D+") {
		return 1.3;
	}
	if (grade == "D") {
		return 1.0;
	}
	if (grade == "D-") {
		return 0.7;
	}
}