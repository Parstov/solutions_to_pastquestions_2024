#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits> // Required for numeric_limits
#include <functional> // Required for std::function

class Question {
public:
    void primeCheck();
    void arraySum();
    void bubbleSort();
    void sumAndAverage();
    void stringLength();
    int linearSearch(); // Modified return type
    void addUsingPointers();
    void palindromeCheck();
    void studentInfo();
    void numberClassification();
    void factorial();
    void personalInfo();
};

void Question::primeCheck() {
    int number;
    while (true) {
        std::cout << "Input a number: ";
        std::cin >> number;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    if (number < 2) {
        std::cout << number << " is not a prime number.\n";
        return;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            std::cout << number << " is not a prime number.\n";
            return;
        }
    }

    std::cout << number << " is a prime number.\n";
}

void Question::arraySum() {
    int n;
    while (true) {
        std::cout << "Input the number of elements to be stored in the array: ";
        std::cin >> n;
        if (std::cin.fail() || n <= 0) {
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        while (true) {
            std::cout << "Input element - " << i + 1 << ": ";
            std::cin >> arr[i];
            if (std::cin.fail()) {
                std::cout << "Invalid input. Please enter an integer.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    std::cout << "Sum of all elements stored in the array is: " << sum << "\n";
}

void Question::bubbleSort() {
    int n;
    while (true) {
        std::cout << "Input the number of elements to be stored in the array: ";
        std::cin >> n;
        if (std::cin.fail() || n <= 0) {
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        while (true) {
            std::cout << "Input element - " << i + 1 << ": ";
            std::cin >> arr[i];
            if (std::cin.fail()) {
                std::cout << "Invalid input. Please enter an integer.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    std::cout << "After sorting the array are:\n";
    for (const auto &elem : arr) {
        std::cout << elem << "\n";
    }
}

void Question::sumAndAverage() {
    const int totalNumbers = 10;
    int sum = 0;

    for (int i = 0; i < totalNumbers; ++i) {
        int number;
        while (true) {
            std::cout << "Input number - " << i + 1 << ": ";
            std::cin >> number;
            if (std::cin.fail()) {
                std::cout << "Invalid input. Please enter an integer.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }
        sum += number;
    }

    double average = static_cast<double>(sum) / totalNumbers;
    std::cout << "The sum of 10 numbers is: " << sum << "\n";
    std::cout << "The average is: " << average << "\n";
}

void Question::stringLength() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin >> std::ws, str);
    std::cout << "The length of the string '" << str << "' is " << str.length() << "\n";
}

int Question::linearSearch() {
    int arr[] = {2, 60, 90, 0, 20, 55, 100, 10};
    int key = 50;

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1; // Return -1 if the key is not found
}

void Question::addUsingPointers() {
    int a, b;
    while (true) {
        std::cout << "Input the first number: ";
        std::cin >> a;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    while (true) {
        std::cout << "Input the second number: ";
        std::cin >> b;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    int* ptrA = &a;
    int* ptrB = &b;
    int sum = *ptrA + *ptrB;

    std::cout << "The sum of the entered numbers is: " << sum << "\n";
}

void Question::palindromeCheck() {
    int number;
    while (true) {
        std::cout << "Input a number: ";
        std::cin >> number;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    int original = number, reversed = 0;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed) {
        std::cout << original << " is a palindrome number.\n";
    } else {
        std::cout << original << " is not a palindrome number.\n";
    }
}

struct Student {
    std::string name;
    int age;
    int totalMarks;
};

void Question::studentInfo() {
    int numStudents;

    while (true) {
        std::cout << "Input the number of students: ";
        std::cin >> numStudents;
        if (std::cin.fail() || numStudents <= 0) {
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::vector<Student> students(numStudents);
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> students[i].name;
        std::cout << "Age: ";
        std::cin >> students[i].age;
        std::cout << "Total Marks: ";
        std::cin >> students[i].totalMarks;
    }

    std::cout << "Student Information:\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age << ", Total Marks: " << student.totalMarks << "\n";
    }
}

// The remaining methods (numberClassification, factorial, personalInfo) are not implemented in the provided code.
[12/02, 12:42] Dante: #include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Question {
public:
    void primeCheck();
    void arraySum();
    void bubbleSort();
    void sumAndAverage();
    void stringLength();
    void linearSearch();
    void addUsingPointers();
    void palindromeCheck();
    void studentInfo();
    void numberClassification();
    void factorial();
    void personalInfo();
};

void Question::primeCheck() {
    int number;
    std::cout << "Input a number: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << number << " is not a prime number.\n";
        return;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            std::cout << number << " is not a prime number.\n";
            return;
        }
    }

    std::cout << number << " is a prime number.\n";
}

void Question::arraySum() {
    int n;
    std::cout << "Input the number of elements to be stored in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size.\n";
        return;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Input element - " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int num : arr) {
        sum += num;
    }

    std::cout << "Sum of all elements stored in the array is: " << sum << "\n";
}

void Question::bubbleSort() {
    int n;
    std::cout << "Input the number of elements to be stored in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size.\n";
        return;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Input element - " << i << ": ";
        std::cin >> arr[i];
    }

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    std::cout << "After sorting the array are:\n";
    for (const auto &elem : arr) {
        std::cout << elem << "\n";
    }
}

void Question::sumAndAverage() {
    const int totalNumbers = 10;
    int sum = 0;

    for (int i = 0; i < totalNumbers; ++i) {
        int number;
        std::cout << "Input number - " << i + 1 << ": ";
        std::cin >> number;
        sum += number;
    }

    double average = static_cast<double>(sum) / totalNumbers;
    std::cout << "The sum of 10 numbers is: " << sum << "\n";
    std::cout << "The average is: " << average << "\n";
}

void Question::stringLength() {
    std::string str = "LearnC++ Programming";
    std::cout << "The length of the string '" << str << "' is " << str.length() << "\n";
}

void Question::linearSearch() {
    int arr[] = {2, 60, 90, 0, 20, 55, 100, 10};
    int key = 50;
    int position = -1;

    // Linear Search Algorithm
    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    std::cout << "Position of key " << key << " is: " << (position >= 0 ? position : -1) << "\n";
}

void Question::addUsingPointers() {
    int a, b;
    std::cout << "Input the first number: ";
    std::cin >> a;
    std::cout << "Input the second number: ";
    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;
    int sum = *ptrA + *ptrB;

    std::cout << "The sum of the entered numbers is: " << sum << "\n";
}

void Question::palindromeCheck() {
    int number;
    std::cout << "Input a number: ";
    std::cin >> number;

    int original = number, reversed = 0;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed) {
        std::cout << original << " is a palindrome number.\n";
    } else {
        std::cout << original << " is not a palindrome number.\n";
    }
}

struct Student {
    std::string name;
    int age;
    int totalMarks;
};

void Question::studentInfo() {
    Student students[2];
    int totalMarks = 0;

    for (int i = 0; i < 2; ++i) {
        std::cout << "Input data for student " << (i + 1) << "\n";
        std::cout << "Name: ";
        std::cin >> students[i].name;
        std::cout << "Age: ";
        std::cin >> students[i].age;
        std::cout << "Total Marks: ";
        std::cin >> students[i].totalMarks;

        totalMarks += students[i].totalMarks;
    }

    std::cout << "Average of total marks: " << static_cast<double>(totalMarks) / 2 << "\n";
}

void Question::numberClassification() {
    int number;
    std::cout << "Input a number (integer): ";
    std::cin >> number;

    if (number == 0) {
        std::cout << "Zero\n";
    } else if (number > 0) {
        std::cout << "Number is positive ";
        std::cout << (number % 2 == 0 ? "even" : "odd") << "\n";
    } else {
        std::cout << "Number is negative ";
        std::cout << (number % 2 == 0 ? "even" : "odd") << "\n";
    }
}

void Question::factorial() {
    int n;
    std::cout << "Input the number: ";
    std::cin >> n;

    std::function<int(int)> fact = [&](int num) {
        return (num <= 1) ? 1 : num * fact(num - 1);
    };

    std::cout << "The factorial of " << n << " is: " << fact(n) << "\n";
}

void Question::personalInfo() {
    std::cout << "Name: Alexandra Abramov\n";
    std::cout << "DOB: July 14, 1975\n";
    std::cout << "Mobile: 99-9999999999\n";
}

int main() {
    Question q;
    
    // Uncomment any of the below lines to test a particular question
    // q.primeCheck();
    // q.arraySum();
    // q.bubbleSort();
    // q.sumAndAverage();
    // q.stringLength();
    // q.linearSearch();
    // q.addUsingPointers();
    // q.palindromeCheck();
    // q.studentInfo();
    // q.numberClassification();
    // q.factorial();
    // q.personalInfo();

    return 0;
}
