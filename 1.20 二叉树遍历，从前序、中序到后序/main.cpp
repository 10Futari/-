#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int pre[N],in[N],ou[N],n;
struct node
{
	int val;
	node *l,*r;
};
node* build(int l,int r,int no)
{
	node* po = NULL;
	for(int i=0;i<no;i++)
    {
		if(pre[l] == in[r+i])
        {
			po = new node;
			po->val = pre[l];
			po->l = build(l+1,r,i);//������һ����ȷʵ��ûզ������������ôд�����ģ���Ϊ��Ҳ�ǿ��ı��˵���⣬��ӭ�����·���������
			po->r = build(l+i+1,r+i+1,no-i-1);
			return po;
		}
	}
	return po;
}

int j;

void dfs(node* po)
{
	if(po != NULL)
    {
		dfs(po->l);
		dfs(po->r);
		ou[j++] = po->val;
	}
}
int main()
{
	while(~scanf("%d",&n))
    {
		j=0;
		node *p = NULL;
		for(int i=0;i<n;i++) scanf("%d",&pre[i]);
		for(int i=0;i<n;i++) scanf("%d",&in[i]);
		p = build(0,0,n);
		dfs(p);
		for(int i=0;i<j;i++)
		{
			printf("%d",ou[i]);
			if(i != j-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
