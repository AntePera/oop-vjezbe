#include <stdio.h>
 

typedef struct
{
	void* podaci;
	int prioritet;
}pq;

void popravi_prema_vrhu(pq* niz, int c)
{
	int z;
	int r = (c - 1) / 2;
	if (niz[r].prioritet < niz[c].prioritet)
	{
		z = niz[r].prioritet;
		niz[r].prioritet = niz[c].prioritet;
		niz[c].prioritet = z;
		popravi_prema_vrhu(niz, r);
	}
}

void popravi_prema_dnu(pq* niz, int* i, int r)
{
	int z;
	int l = 2 * r + 1;
	int d = 2 * r + 2;
	if ((l>=*i)&&(d>=*i))
	{
		return 0;
	}
	else if (d>=*i)
	{
		z = niz[r].prioritet;
		if (niz[r].prioritet < niz[l].prioritet)
		{
			niz[r].prioritet = niz[l].prioritet;
			niz[l].prioritet = z;
		}
		 
	}
	else if ((niz[r].prioritet < niz[l].prioritet) && (niz[r].prioritet < niz[d].prioritet))
	{
		if (niz[l].prioritet > niz[d].prioritet)
		{
			z = niz[r].prioritet;
			niz[r].prioritet = niz[l].prioritet;
			niz[l].prioritet = z;
			popravi_prema_dnu(niz,i, l);
		}
		else
		{
			z = niz[r].prioritet;
			niz[r].prioritet = niz[d].prioritet;
			niz[d].prioritet = z;
			popravi_prema_dnu(niz,i,d);
		}
	}

}

void dodaj(pq* niz, int* i, int element)
{
	niz[*i].prioritet = element;
	popravi_prema_vrhu(niz, (*i));
	(*i)++;
}

void ukloni(pq* niz, int* i)
{
	niz[0].prioritet = niz[(*i) - 1].prioritet;
	niz[(*i) - 1].prioritet = NULL;
	(*i)--;	
	popravi_prema_dnu(niz,i, 0);

}


int main()
{
	pq niz[10000];
	int i = 0;
	int j;

	dodaj(niz, &i, 85);
	dodaj(niz, &i, 60);
	dodaj(niz, &i, 80);
	dodaj(niz, &i, 25);
	dodaj(niz, &i, 30);
	dodaj(niz, &i, 70);
	dodaj(niz, &i, 50);
	dodaj(niz, &i, 23);
	dodaj(niz, &i, 10);
	dodaj(niz, &i, 20);

	for (j = 0; j < i; j++)
	{
		printf("%d ", niz[j].prioritet);
	}
	printf("\n");

	ukloni(niz, &i);

	for (j = 0; j < i; j++)
	{
		printf("%d ", niz[j].prioritet);
	}

}