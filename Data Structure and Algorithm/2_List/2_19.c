int getnode(StaticList space, int *av)
/*�ӱ�������ժ��һ�����ռ䣬����������뾲̬�����е�Ԫ��*/
{
	int i;
	i=*av;
	*av=space[*av].cursor;
	return i;
}