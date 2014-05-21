#include <stdio.h>
#include <string.h>

struct rankList{
	int rank;
	int level;
	char name[10];
};

int main()
{
	struct rankList rank[10];
	int i;
	FILE *f;

	//rank[0].rank=1;
	//rank[0].level=9;
	//strcpy(rank[0].name,"ȫ�浿");
	
	
	
	f=fopen("rank.txt","r");
	for(i=0;i<10;i++){
		fscanf(f,"%d %d %s",&rank[i].rank,&rank[i].level,&rank[i].name);
		printf("%d %d %s\n",rank[i].rank,rank[i].level,rank[i].name);
	}

	fclose(f);
	/*
	f=fopen("rank.txt","w");

	fprintf(f, "%d %d %s\n",rank[0].rank,rank[0].level,rank[0].name);

	fclose(f);*/
	return 0;
}
