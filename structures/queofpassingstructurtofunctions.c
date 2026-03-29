//checck if two two students have the same department or not
#include <stdio.h>
#include <string.h>
typedef struct student{
    char department[20];
}student;
void check(student p,student q)
{
    if(p.department==q.department)
    {
        printf("both have same department");
    }
    else{
        printf("not");
    }
    return;
}
int main()
{
    student a,b;
    strcpy(a.department,"cse");
    strcpy(b.department,"ece");
    check(a,b);
    return 0;
}