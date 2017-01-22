#include<stdio.h>
#include<conio.h>
struct student
{
    int roll_no;
    char name[20];
    float cgpa;
};

int main()
{
    struct student st;
    char flag;
    FILE *stu_detail;
    stu_detail = fopen("stu_detail.txt", "a");
    do
    {
        printf("Enter Roll No. of student:");
        scanf("%d",&st.roll_no);
        printf("Enter Name of student:");
        gets(st.name);
        gets(st.name);
        printf("Enter CGPA of student:");
        scanf("%f",&st.cgpa);
        fprintf(stu_detail,"\n%d %s %f", st.roll_no, st.name, st.cgpa);
        printf("Want to enter more details? (Y/n) :");
        flag = getchar();
        flag = getchar();
    }
    while(flag=='Y'||flag=='y');
        fclose(stu_detail);
}
