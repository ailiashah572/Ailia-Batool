#include<stdio.h>
int main (){
char name[20];
char id [15];
int CompletedLabs;
int TotalLabs;
float quizmarks;
float assignmentmarks;
float projectmarks;
float LabCompletionPerc;
float totalscore;

printf("Please input student name ");
scanf("%s", name);

printf("Please input student id ");
scanf("%s", id);

printf("enter Number of completed labs  ");
scanf("%d", &CompletedLabs);

printf("enter total number of labs ");
scanf("%d", &TotalLabs);

printf("enter quiz marks ");
scanf("%f", &quizmarks);

printf("enter assignment marks ");
scanf("%f", &assignmentmarks);

printf("enter project marks ");
scanf("%f", &projectmarks);

LabCompletionPerc = ((float)CompletedLabs / TotalLabs) * 100.0;
totalscore =  quizmarks + assignmentmarks + projectmarks;

printf("\n==================================================\n");
printf("STUDENT PERFORMANCE REPORT\n");
printf("====================================================\n");
printf("name                        :%s\n", name);
printf("id                          :%s\n", id);
printf("completed labs              :%d\n", CompletedLabs);
printf("total labs                  :%d\n", TotalLabs);
printf("lab completion percentage   :%.2f%%\n", LabCompletionPerc);
printf("quiz marks                  :%.2f\n", quizmarks);
printf("assignment marks            :%.2f\n ", assignmentmarks);
printf("project marks               :%.2f\n" , projectmarks);
printf("-----------------------------------------------------\n");
printf("total academic score        :%.2f\n",totalscore);
printf("------------------------------------------------------\n");
printf("======================================================\n");

return 0;

}
