BiTNode * InPre(BiTNode *p)
/* �����������������в���p������ǰ��, ����preָ�뷵�ؽ�� */
{  
	BiTNode *q;
	if(p->Ltag==1)
		pre = p->LChild;  /*ֱ����������*/
	else 
	{ /* ��p���������в���"�����¶�"��� */
		for(q = p->LChild;q->Rtag==0;q=q->RChild);
		pre=q;
	}
	return(pre);
}