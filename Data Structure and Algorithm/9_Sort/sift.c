void   sift(RecordType  r[],  int k, int m)
/* �����[k..m]���ԣ�[k]Ϊ������ȫ���������ҷֱ��ԣ�[2k]�ͣ�[2k+1]Ϊ������������Ϊ����ѣ�����r[k]��ʹ��������r[k..m]����ѵ����� */
{
	RecordType t;
	int i,j;
	int x;
	int finished;
	t= r[k];          /* �ݴ�"��"��¼r[k] */ 
	x=r[k].key;
	i=k;
	j=2*i;
	finished=FALSE;
		while( j<=m && !finished  ) 
		{     
		if (j<m  && r[j].key< r[j+1].key ) 
		j=j+1;  /* �������������������������Ĺؼ��ִ������ҷ�֧"ɸѡ" */
		if ( x>= r[j].key)
			finished=TRUE;            /*  ɸѡ���  */ 
		else 
		{
			r[i] = r[j];
			i=j;
			j=2*i;
		}    /* ����ɸѡ */ 
		}
		r[i] =t;          /* r[k]���뵽ǡ����λ�� */ 
}  