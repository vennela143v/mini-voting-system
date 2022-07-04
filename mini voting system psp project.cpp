#include<stdio.h>
int p1=0, p2=0, p3=0, p4=0;
void electionResult()
{
 int wonByVote;
 if (p1 > p2 && p1 > p3 && p1 > p4)
 {
 printf("\n***p1 won the election(@)***\n\n");
 printf("Total vote of p1(@) : %d\n",p1);
 wonByVote=p1-p2;
 printf("p1(@) won by %d votes to p2(#)\n",wonByVote);
 wonByVote=p1-p3;
 printf("p1(@) won by %d votes to person3(&)\n",wonByVote);
 wonByVote=p1-p4;
 printf("p1(@) won by %d votes to person4(*)\n",wonByVote);
 }
 else if (p2 > p3 && p2 > p4)
 {
 printf("\n***p2(#) won the election***\n\n");
 printf("Total vote of p2(#) : %d\n",p2);
 wonByVote=p2-p1;
 printf("p2(#) won by %d votes to p1(@)\n",wonByVote);
 wonByVote=p2-p3;
 printf("p2(#) won by %d votes to p3(&)\n",wonByVote);
 wonByVote=p2-p4;
 printf("p2(#) won by %d votes to p4(*)\n",wonByVote);
 }
 else if (p3 > p4)
 {
 printf("\n***person3(&) won the election***\n\n");
 printf("Total vote of p3(&) : %d\n",p3);
 wonByVote=p3-p2;
 printf("person3(&) won by %d votes to p2(#)\n",wonByVote);
 wonByVote=p3-p1;
 printf("person3(&) won by %d votes to p1(@)\n",wonByVote);
 wonByVote=p3-p4;
 printf("person3(&) won by %d votes to person4(*)\n",wonByVote);
 }
 else if(p1 == p2 && p1 == p3 && p1 == p4)
 {
 printf("\nNo one won the election\n\n");
 printf(" p1(@)---p2(#)---p3(&)---p4(*)\n");
 printf("Total Vote %d %d %d %d\n",p1,p2,p3,p4);
 }
 else
 {
 printf("\n***person4(*) won the election***\n\n");
 printf("Total vote of person4(*) : %d\n",p4);
 wonByVote=p4-p2;
 printf("person4(*) won by %d votes to person2(#)\n",wonByVote);
 wonByVote=p4-p3;
 printf("person4(*) won by %d votes to person3(&)\n",wonByVote);
 wonByVote=p4-p1;
 printf("person4(*) won by %d votes to person1(*)\n",wonByVote);
 }
}
void calculateVote(int vote)
{
 switch (vote)
 {
 case 1:
 p1+=1;
 break;
 case 2:
 p2+=1;
 break;
 case 3:
 p3+=1;
 break;
 case 4:
 p4+=1;
 break;
 }
}
 main()
{
 int choose;
 printf("\n*********Welcome to the simple voting system project*********\n\n");
 printf(" MP election \n\n");
 printf("*************************************************************\n");
 printf("| 1.p1(@) | 2.p2(#) |\n");
 printf("*************************************************************\n");
 printf("| 3.p3(&) | 4.p4(*) |\n");
 printf("*************************************************************\n\n");
 do
 {
 printf("Press 1 to vote p1(@)\n");
 printf("Press 2 to vote p2(#)\n");
 printf("Press 3 to vote p3(&)\n");
 printf("Press 4 to vote p4(*)\n");
 printf("Press 5 to show election result\n");
 printf("Please choose : ");
 scanf("%d", &choose);
 if (choose==5)
 {
 electionResult();
 }else
 {
 calculateVote(choose);
 }
 printf("\n");
 } while (choose != 5);
}
