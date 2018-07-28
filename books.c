#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3

int search(struct book,char*);
void display(char**,int);

struct info
{
	int year,page;
	float price;
};

struct book
{
	char fname[15],lname[15],title[15];
	struct info id; 
};

int main()
{
	struct book cat[N];
	char pin[15];
	int i,cnt=0;
		
	for(i=0;i<N;i++)
	{
		printf("Give info for %d book \n",i+1);
		printf("Give author's first name\n");
		gets(cat[i].fname);
		printf("Give author's last name\n");
		gets(cat[i].lname);
		printf("Give title\n");
		gets(cat[i].title);
		printf("Give year\n");
		scanf("%d",&cat[i].id.year);
		printf("Give number of pages\n");
		scanf("%d",&cat[i].id.page);
		printf("Give price\n");
		scanf("%f",&cat[i].id.price);
		getchar();
	}
	
	printf("\n\nGive a title for search\n");
	gets(pin);

	   if(!strcmp(cat[i].title,pin))
	       cnt++;
	
	printf("Found %d books with this title\n\n",cnt); 
	char *news[cnt];
	int k=0;
	
	printf("Results\n");
	for(i=0;i<N;i++)
	{
		 if(search(cat[i],pin)==1)
		 {
		 	news[k]=(char*)malloc(strlen(cat[i].fname)+strlen(cat[i].lname)+2);
		 	strcpy(news[k],cat[i].fname);
		 	strcat(news[k]," ");
		 	strcat(news[k],cat[i].lname);
		 	k++;
		 }
	       
	}
	printf("\n\n");
	printf("Authors names\n\n");
	display(news,k);   
	       
}

int search(struct book inst,char *pin)
{
	if(strcmp(inst.title,pin))
	   return 0;
	else
	{
		printf("%s %c",inst.lname,inst.fname[0]);
		printf(" price %.2f\n",inst.id.price);
		return 1;
	}   
}

void display(char **news,int k)
	int i;
	for(i=0;i<k;i++)
	    puts(news[i]);
}
