#include <bits/stdc++.h>
using namespace std;

struct people
{
    string id;                  /* ���֤���� */
    int social;                     /* �籣�������� */
    int area;                       /* ����ס����� */
    string date;              /* �걨���� */
};

struct paixu
{
    string id1="";
    int num;
};

people* getMess(int &n)            /* ���ļ����ݶ����ڴ� */
{
    FILE *fp;
    fp=fopen("house.bin","rb");
    fseek(fp,-1*(long)sizeof(int), 2);
    fread(&n, sizeof(int),1, fp);
    rewind(fp);
    people *tmp=new people[n];
    fread(tmp, sizeof(people), n, fp);
    fclose(fp);
    return tmp;
}

bool zige(people p)//�Ƿ��й����ʸ�
{
    if((p.area==0&&p.social>24)||p.area>0) return 1;
    else return 0;
}

bool cmp1(people person1,people person2)
{
    if(zige(person1)&&zige(person2))
    {
        if(person1.area==0&&person2.area==0) return person1.area>person2.area;
        else if(person1.area==0&&person2.area>0) return 1;
        else if(person1.area>0&&person2.area==0) return 0;
        else return person1.area<person2.area;
    }

}

bool cmp2(people person1,people person2)//����
{
    bool flag=1;
	for(int i=0;i<11;i++)
    {
        if(person1.date[i]>person2.date[i])
		{
			flag=0;
			break;
		}
    }
	return flag;
}

int main()
{
    memset(a,0,sizeof(a));
    people* person;          /* ָ�����б����˵Ļ��������׵�ַ��ͨ�����ú���getMess��ȡ */
    int n;                            /* nΪ����������ͨ�����ú���getMess��ȡ */
    person=getMess(n);

    for(int i=0;i<n;i++)
    {
        if(!zige(person[i])) person[i].area=999999;
    }
    sort(person,person+n,cmp1);
    sort(person,person+n,cmp2);

    int cnt=1;
    paixu px[1000];
    px[0].id1=person[0].id;
    px[0].num=cnt;
    for(int i=1;i<n;i++)
    {
        if(zige(person[i])&&person[i].area!=999999)
        {
            if(person[i].area==person[i-1].area&&person[i].date==person[i-1].date&&person[i].social==person[i-1].social)
            {
                px[i].id1=person[i].id;
                px[i].num=cnt;
            }
            else
            {
                cnt++;
                px[i].id1=person[i].id;
                px[i].num=cnt;
            }
        }
    }

    int m,t;
    cin>>m>>t;
    for(int i=0;i<t;i++)
    {
        string putid;
        cin>>putid;
        for(int j=0;j<n;j++)
        {
            if(putid==)
        }
    }

    return 0;
}


