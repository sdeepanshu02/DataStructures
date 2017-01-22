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
    int r_no, flag=0, res1, res2;

    FILE *stu_detail, *stu_detail_new;
    stu_detail_new = fopen("stu_detail_new.txt", "w");
    stu_detail = fopen("stu_detail.txt", "r");

    printf("Enter the Roll no. of Student to be deleted: ");
    scanf("%d",&r_no);

    while(!feof(stu_detail))
    {
        fscanf(stu_detail,"%d %s %f", &st.roll_no, st.name, &st.cgpa);
        if(st.roll_no==r_no)
        {
            flag = 1;
        }
        else
        {
            fprintf(stu_detail_new,"\n%d %s %f", st.roll_no, st.name, st.cgpa);
        }
    }

    fclose(stu_detail);
    fclose(stu_detail_new);

    res1 = remove("stu_detail.txt");
    res2 = rename("stu_detail_new.txt", "stu_detail.txt");

    if(flag == 1 && res1 == 0 && res2 == 0)
    {
        printf("Record deleted sucessfully\n\n");
    }
    else
    {
        printf("\nStudent roll no does not exist in the record!!!\n\n");
    }
}
