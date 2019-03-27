//
// Created by hengfeng zhuo on 2019-03-27.
//

#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {

public:
    string name;
    int score;

public:

    // 重载操作符
    bool operator>(const Student& otherStudent){
        return this->score > otherStudent.score;
    }

    bool operator<(const Student& otherStudent){
        return this->score < otherStudent.score;
    }

    // 重载输出运算符<<, 类似java中的toString
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }
};

#endif //ALGORITHM_STUDENT_H
