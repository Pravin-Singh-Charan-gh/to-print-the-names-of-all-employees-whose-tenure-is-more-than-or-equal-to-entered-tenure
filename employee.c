#include <stdio.h>
struct date {
    int d;
    int m;
    int y;
};
struct employee {
    char code[10];
    char name[30];
    struct date det;
} e[10];

void tenure(int dd,int mm,int yy,int tenur)
{
    for(int i=0; i<10; i++) {
        if(yy-e[i].det.y>=tenur) {
            if(yy-e[i].det.y>tenur)
                printf("%s\n",e[i].name);
            else if(mm>e[i].det.m)
                printf("%s\n",e[i].name);
            else if(mm=e[i].det.m && dd>=e[i].det.d)
                printf("%s\n",e[i].name);
        }
    }
}
void main()
{
    int i;
    for(i=0; i<10; i++) {
        printf("Enter employee code, name and joining date(dd/mm/yy) of employee %d:",i+1);
        scanf(" %s%s",e[i].code,e[i].name);
        while(getchar()!='\n');
        scanf("%d%d%d",&e[i].det.d,&e[i].det.m,&e[i].det.y);
    }
    int dd,mm,yy,tenur;
    printf("Enter current date(dd/mm/yy) and tenure (in years):");
    scanf("%d%d%d%d",&dd,&mm,&yy,&tenur);
    tenure(dd,mm,yy,tenur);
}
