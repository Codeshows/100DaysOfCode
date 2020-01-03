/**
We have a grid with H horizontal rows and W vertical columns. Let (i, j) denote the square at the i-th row 
from the top and the j-th column from the left.The square (i, j) has two numbers Aij and Bij written on it.
First, for each square, Takahashi paints one of the written numbers red and the other blue.Then, he travels 
from the square (1, 1) to the square (H, W). In one move, he can move from a square (i, j) to the square 
(i + 1, j) or the square (i, j+1). He must not leave the grid.Let the unbalancedness be the absolute
difference of the sum of red numbers and the sum of blue numbers written on the squares along Takahashi's 
path, including the squares (1, 1) and (H, W).Takahashi wants to make the unbalancedness as small as possible 
by appropriately painting the grid and traveling on it.
Find the minimum unbalancedness possible.
*/

#include<limits.h>
#include<stdio.h>
#include<string.h>
 
inline int dif(int a,int b){ return a<b?b-a:a-b; }
 
int h,w,i,j,l,k;
int a[81][81];
char d[81][81][12801];
 
int main(void){
  scanf("%d%d",&h,&w);
  l=(h+w-1)*80;
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      scanf("%d",&k);
      a[i][j]=dif(k,a[i][j]);
    }
  }
  d[0][0][a[0][0]]=1;
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      for(k=0;k<=l;k++){
        if(d[i][j][k]==1){
          d[i+1][j][k+a[i+1][j]]=1;
          d[i+1][j][dif(k,a[i+1][j])]=1;
          d[i][j+1][k+a[i][j+1]]=1;
          d[i][j+1][dif(k,a[i][j+1])]=1;
        }
      }
    }
  }
  for(k=0;k<=l;k++){
    if(d[h-1][w-1][k]==1)break;
  }
  printf("%d\n",k);
  return 0;
}
 