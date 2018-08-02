#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 2

struct super *buy(struct super *, float, int *);
void disp(struct super *, int );

struct items
{
	float cost;
	float vals[3];
};

struct super
{
	char name[10];
	int code;
	char country[10];
	struct items id;
};

int main()
{
	struct super items[M], *ptr;
	float money;
	int i, j, cnt = 0;

	for (i = 0; i < M; i++)
	{
		printf("Give info for %d item\n", i + 1);

		printf("Give name of item\n");
		gets(items[i].name);

		printf("Give code of item\n");
		scanf("%d", &items[i].code);
		getchar();

		printf("Gave country of origin\n");
		gets(items[i].country);

		printf("Give import costs\n");
		scanf("%f", &items[i].id.cost);
		getchar();

		for (j = 0; j < 3; j++)
		{
			printf("Give selling price from %d different stores\n", j + 1);
			scanf("%f", &items[i].id.vals[j]);
			getchar();
		}
	}

	for (i = 0; i < M; i++)
	{
		printf("Info for %d item\n", i + 1);

		printf("Item name:");
		puts(items[i].name);

		printf("Code item: %d \n", items[i].code);

		printf("Country of origin:");
		puts(items[i].country);

		printf("Import costs: %f \n", items[i].id.cost);

		for (j = 0; j < 3; j++)
		{
			printf("Selling price %d item %f \n", j + 1, items[i].id.vals[j]);
		}
	}

	printf("\n\n\n");
	printf("Give selling price\n");
	scanf("%f", &money);
	getchar();

	ptr = buy(items, money, &cnt);
	disp(ptr, cnt);
}

struct super*buy(struct super *items, float price, int *pcnt)
{
	struct super *dkt;
	int i, j = 0;

	dkt = (struct super*)malloc(sizeof(struct super));

	for (i = 0; i < M; i++)
		if (items[i].id.cost >= price)
		{
			(*pcnt)++;
			dkt = (struct super*)realloc(dkt, sizeof(struct super) * (*pcnt));
			dkt[j] = items[i];
			j++;
		}
	return dkt;
}

void disp(struct super *ptr, int k)
{
	int i;
	for (i = 0; i < k; i++)
		printf("%s : %f \n", ptr[i].name, ptr[i].id.cost);

}
