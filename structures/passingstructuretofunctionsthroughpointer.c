#include <stdio.h>
typedef struct student{
    char grade;
}student;
void change(student* p)
{
    (*p).grade='A';  //  (*x).something === x->something
}
int main()
{
    student a;
    a.grade='B';
    change(&a);
    printf("%c",a.grade);
    return 0;
}