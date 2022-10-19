#include<stdio.h>
#include<time.h>
struct info{
	char name[20];
	char pass[10];
	int hour,min,sec;
	
	
};
void main(){
	struct info user[2];
	int i=0;
while(i<2){
	printf("enter the name:\n");
	scanf("%s",user[i].name);
	printf("enter passward:\n");
	scanf("%s",user[i].pass);
	printf("enter the current time in 24 hours:\n");
	scanf("%d:%d:%d",&user[i].hour,&user[i].min,&user[i].sec);
	i++;}
	for(int z=0;z<2;z++){
	
	if(user[z].name=="admin" && user[z].pass=="456"){
	
		

printf("Collection\n");

for(int j=0;j<2;j++){
		printf("username:%s\n passward:%s\n time enrolled:%d:%d:%d\n",user[j].name,user[j].pass,user[j].hour,user[j].min,user[j].sec);
		printf("late enrolls");
	for(int k=0;k<2;k++){
		if(user[k].hour>10){
				printf("username:%s\n passward:%s\n time enrolled:%d:%d:%d\n",user[k].name,user[k].pass,user[k].hour,user[k].min,user[k].sec);
	}
			else{break;}
			}
		}
	
}
}

}






