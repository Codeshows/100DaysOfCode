#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<limits.h>
int main(){
    int a[6][6]={0,5,1,2,10000,10000,5,0,10000,7,10000,10000,1,10000,0,10000,2,8,2,7,10000,0,10000,5,10000,10000,2,10000,0,3,10000,10000,8,5,3,0};
    /*int a[9][9] = { { 100000, 4, 100000, 100000, 100000, 100000, 100000, 8, 100000 },
                        { 4, 100000, 8, 100000, 100000, 100000, 100000, 11, 100000 },
                        { 100000, 8, 100000, 7, 100000, 4, 100000, 100000, 2 },
                        { 100000, 100000, 7, 100000, 9, 14, 100000, 100000, 100000 },
                        { 100000, 100000, 100000, 9, 100000, 10, 100000, 100000, 100000 },
                        { 100000, 100000, 4, 14, 100000, 100000, 2, 100000, 100000 },
                        { 100000, 100000, 100000, 100000, 100000, 2, 100000, 1, 6 },
                        { 8, 11, 100000, 100000, 100000, 100000, 1, 100000, 7 },
                        { 100000, 100000, 2, 100000, 100000, 100000, 6, 7, 100000 } };*/
    int s,d,i,mdn,x;
    int di[6],fn[6],t[6];
    printf("Enter Source node: ");
    scanf("%d",&s);
    printf("Enter destination node: ");
    scanf("%d",&d);
    for(i=0;i<6;i++){
        di[i]=10000;
        fn[i]=10000;
        t[i]=0;
    }
    di[s]=0;
    fn[s]=s;
    mdn=s;
    while(mdn!=d){
        //calculate new distances
        for(i=0;i<6;i++){
            x=di[mdn]+a[mdn][i];
            if(x<di[i]){
                di[i]=x;
                fn[i]=mdn;
                t[i]=0;
            }
        }
        t[mdn]=1;
        //find new mdn with non tick
        i=0;
        while(i<6&&t[i]==1){
            i++;
        }
        //first non tick node
        mdn=i;
        for(i=mdn+1;i<6;i++)
            if(t[i]==0&&di[i]<di[mdn])
                mdn=i;
    }
    printf("The result is: ");
    x=d;
    while(x!=s){
        printf("distance=%d, node=%d\n",di[x],fn[x]);
        x=fn[x];
    }
getch();
}
