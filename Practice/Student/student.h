
class Student
{
private:
    int RN;
    char name[10];
    char course[20];

public:
    Student();
    Student(int RN, char *name, char *course);
    void accept();
    void display();
    int getId();
    void findRecord(int n, int size, Student *s);
};