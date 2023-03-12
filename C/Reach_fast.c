/*Chef is standing at coordinate 
�
A while Chefina is standing at coordinate 
�
B.

In one step, Chef can increase or decrease his coordinate by at most 
�
K.

Determine the minimum number of steps required by Chef to reach Chefina.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of three integers 
�
,
�
,
X,Y, and 
�
K, the initial coordinate of Chef, the initial coordinate of Chefina and the maximum number of coordinates Chef can move in one step.*/
#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,k;
	    scanf("%d%d%d",&x,&y,&k);
	    int res=abs(x-y)/k;
	    if(abs(x-y)%k==0||x==y)
	    printf("%d\n",res);
	    else
	    printf("%d\n",res+1);
	}
	return 0;
}

