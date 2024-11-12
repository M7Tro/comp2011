#include <iostream>

using namespace std; 

enum Dept {CSE, ECE, MATH};

struct Date {
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

struct Student_Record {
    char name[32];
    unsigned int id;
    char gender;
    Dept dept;
    Date entry; 
};

const char dept_name[][30] =
    {"Computer Science", "Electrical Engineering", "Mathematics"};

void swap_SR(Student_Record* x, Student_Record* y)
{
    Student_Record temp = *x;
    *x = *y;
    *y = temp;
}

void sort_3SR_by_id(Student_Record sr[]){
    if(sr[0].id > sr[1].id) swap_SR(&sr[0], &sr[1]);
    if(sr[0].id > sr[2].id) swap_SR(&sr[0], &sr[2]);
    if(sr[1].id > sr[2].id) swap_SR(&sr[1], &sr[2]);
}

void print_date(const Date* date){//It expects a pointer, not the date itself. Why? 
    cout << date -> year << '/' 
         << date -> month << '/'
         << date -> day << endl;
}

void print_student_record(const Student_Record* x){
    cout << endl;
    cout.width(12); cout << "name: " << x -> name << endl;
    cout.width(12); cout << "id: " << x -> id << endl;
    cout.width(12); cout << "gender: " << x -> gender << endl;
    cout.width(12); cout << "dept: " << dept_name[x -> dept] << endl; 
    cout.width(12); cout << "entry date: "; print_date(& x -> entry); 
}

void set_date(Date* x, unsigned int year, unsigned int month, unsigned int day){
    x -> year = year;
    x -> month = month;
    x -> day = day;
}

void set_student_record(Student_Record* a, const char name[], unsigned int id, char gender, Dept dept, const Date* date){
    strcpy(a -> name, name);
    a -> id = id;
    a -> gender = gender;
    a -> dept = dept;
    a -> entry = *date;
}

int main() {
    Student_Record sr[] = {
        {"Adam", 12000, 'M', CSE, {2006, 1, 10}},
        {"Bob", 11000, 'M', MATH, {2005, 9, 1}},
        {"Cathy", 10000, 'F', ECE, {2006, 8, 20}}
    };

    Date d; 
    set_date(&d, 1980, 1, 25);
    set_student_record(&sr[2], "Jane", 18000, 'F', CSE, &d);

    sort_3SR_by_id(sr);
    for(int j = 0; j < sizeof(sr)/sizeof(Student_Record); j++)
        print_student_record(&sr[j]);
    return 0;
}