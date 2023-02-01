/*
    Student(int the_id, std::string the_name);
    int get_id();
    std::string get_name();

    Course(int the_id, std::string the_name, unsigned char the_credits);
    int get_id();
    std::string get_name();
    int get_credits();

    Grade(int sid, int cid, char grd);
    int get_student_id();
    int get_course_id();
    char get_grade();
*/
#include "records.h"

Student::Student(int the_id, std::string the_name){
    name = the_name;
    id = the_id;
}
int Student::get_id(){
    return id;
}
std::string Student::get_name(){
    return name;
}
//------------------------------------------------
Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    name = the_name;
    id = the_id;
    credits = the_credits;
}
int Course::get_id(){
    return id;
}
std::string Course::get_name(){
    return name;
}
int Course::get_credits(){
    return credits;
}
//------------------------------------------------
Grade::Grade(int sid, int cid, char grd){
    student_id = sid;
    course_id = cid;
    grade = grd;
}
int Grade::get_student_id(){
    return student_id;
}
int Grade::get_course_id(){
    return course_id;
}
char Grade::get_grade(){
    return grade;
}


