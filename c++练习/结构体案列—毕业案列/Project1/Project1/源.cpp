#include"��ͷ.h";

void allocateSpace(struct Teacher tarr[],int len)
{
	string nameseed="ABCDE";
	for(int i=0;i<len;i++)
	{
		tarr[i].name="Teacher_";
		tarr[i].name=tarr[i].name+nameseed[i];
		for(int j=0;j<5;j++)
		{
			tarr[i].stuarr[j].name=nameseed[j];

			int random=rand()%41+60;
			tarr[i].stuarr[j].score=random;
		}

	}

}

void myPrint(struct Teacher tarr[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"ָ����ʦ��"<<tarr[i].name<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"\tѧ��������"<<tarr[i].stuarr[j].name
			    <<"\tѧ��������"<<tarr[i].stuarr[j].score<<endl;
		}
	}
}

		


