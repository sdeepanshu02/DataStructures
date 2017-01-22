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
    int r_no,flag=0;
    FILE *stu_detail;
    stu_detail = fopen("stu_detail.txt", "r");
    printf("Enter the Roll no. of Student: ");
    scanf("%d",&r_no);
    while(!feof(stu_detail))
    {
        fscanf(stu_detail,"%d %s %f", &st.roll_no, st.name, &st.cgpa);
        if(st.roll_no==r_no)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n=======Student Detail=======\n");
        printf("Roll No.: %d\n",st.roll_no);
        printf("Name: %s\n",st.name);
        printf("CGPA: %f\n",st.cgpa);
        printf("=========================\n\n");
    }
    else
    {
        printf("\nStudent roll no does not exist in the record!!!\n\n");
    }
    fclose(stu_detail);
}
