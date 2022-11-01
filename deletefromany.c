void deleteany()
{
	int i;
	struct node*p,*q;
	if(list==NULL)
	{
		printf("the list is empty");
	}
	else if(list->next==NULL)
	{
		free(list);
	}
	else
	{
		if(pos==1)
		{
			p=list;
			list=list->next;
			free(p);
		}
		else
		{
			fori=1,q=list;i<pos-1&&q->next!=NULL;i++,q=q->next)
			;
			if(q->next!=NULL)
			{
				p=q->next;
				q->next=p->next;
				p->next=p->prev;
				p->next=NULL;
				p->prev=NULL;
				free(p);
			}
		}
	}
}
