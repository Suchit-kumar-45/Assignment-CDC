#include<stdlib.h>
#include<limits.h>
void nextSmallerElement(int* heights, int n, int *next)
{
    int st[n+1];
    int top=-1;
    st[++top]=-1;
    for(int i=n-1;i>=0;i--)
    {
        int temp=heights[i];
        while(st[top] != -1 && heights[st[top]]>=temp)
        {
            top--;
        }
        next[i]=st[top];
        st[++top]=i;
    }
}

void prevSmallerElement(int* heights, int n, int *prev)
{
    int st[n+1];
    int top=-1;
    st[++top]=-1;
    for(int i=0;i<n;i++)
    {
        int temp=heights[i];
        while(st[top] != -1 && heights[st[top]]>=temp)
        {
            top--;
        }
        prev[i]=st[top];
        st[++top]=i;
    }
}
int largestRectangleArea(int* heights, int heightsSize) {
    int n=heightsSize;
    int *next=(int *)malloc((n+1)*sizeof(int));
    nextSmallerElement(heights,n,next);
    int *prev=(int *)malloc((n+1)*sizeof(int));
    prevSmallerElement(heights,n,prev);
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int l=heights[i];
        if(next[i]==-1)
        {
            next[i]=n;
        }
        int b=next[i]-prev[i]-1;
        int area=l*b;
        if(ans<area)
        {
            ans=area;
        }

    }
    free(next);
    free(prev);
    return ans;

    
}