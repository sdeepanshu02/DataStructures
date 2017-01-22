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
    FILE *stu_detail;
    stu_detail = fopen("stu_detail.txt", "r");
    printf("=======Student Details=======\n");
    while(!feof(stu_detail))
    {
        fscanf(stu_detail,"%d %s %f", &st.roll_no, st.name, &st.cgpa);
        printf("Roll No.: %d\n",st.roll_no);
        printf("Name: %s\n",st.name);
        printf("CGPA: %f\n",st.cgpa);
        printf("=========================\n");
    }
    fclose(stu_detail);
}
