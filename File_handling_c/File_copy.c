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
    FILE *stu_detail, *stu_detail_new;
    stu_detail_new = fopen("stu_detail_new.txt", "w");
    stu_detail = fopen("stu_detail.txt", "r");

    while(!feof(stu_detail))
    {
        fscanf(stu_detail,"%d %s %f", &st.roll_no, st.name, &st.cgpa);
        fprintf(stu_detail_new,"\n%d %s %f", st.roll_no, st.name, st.cgpa);
    }
    printf("Content of file is copied Sucessfully.");
    fclose(stu_detail);
    fclose(stu_detail_new);
}
