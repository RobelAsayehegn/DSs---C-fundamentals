#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Display(int n);

struct course{
	char code[15];
	char coursename[15];
	char grade[2];
	int credit;
};
struct student{
	char sid[15];
	char name[22];
	struct course c1[3];
}s[3];

struct student* ptr ;
int main(){
	/*s[0].sid = "it/2222/33";
	s[0].name = "Roba";
	s[0].c1.code = "it3201";
	s[0].c1.coursename = "datastructure";*/
	
	int check;
	printf("how many students dou you want to register\n");
	scanf("%d",&check);
	
	
	ptr  = (struct student*)malloc(check*sizeof(struct student));
	
	int i = 0;
	while(i<check){
		printf("Enter students %d id:\n",(i+1));
		scanf("%s",&s[i].sid);
		printf("Enter students %d name:\n",(i+1));
		scanf("%s",&s[i].name);
		int j;
		for(j=0;j<=2;j++){
			printf("Enter students %d course name\n",(i+1));
			scanf("%s",&s[i].c1[j].coursename);
			printf("Enter course code\n");
			scanf("%s",&s[i].c1[j].code);
			printf("Enter grade\n");
			scanf("%s",&s[i].c1[j].grade);
			printf("Enter credit\n");
			scanf("%d",&s[i].c1[j].credit);
		
		}
		
		if(i == check){
			
		}else{
			Display(i);
		}i++;
	}
		
}

void Display(int numstudent){
	int i = 0;
	printf("Axum University Registrar\n");
	printf("#########################################\n");
	for(i;i<=numstudent;i++){
		printf("Name : %s\n",s[i].name);
		printf("ID : %s\n",s[i].sid);
		int j;
		for(j=0;j<=2;j++){
			printf("Code  : %s\n",s[i].c1[j].code);
			printf("Grade : %s\n",s[i].c1[j].grade);
			printf("Code       :%s\n",s[i].c1[j].code);
			printf("Course Name:%s\n",s[i].c1[j].coursename);
			printf("Credit     : %d\n",s[i].c1[j].credit);
			printf("#########################################\n");
		}
	}
	free(ptr);
}
