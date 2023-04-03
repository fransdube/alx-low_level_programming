#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *idontknow, *idontknowagain;

	idontknow = MAYBEIKNOW;
	idontknowagain = idontknow;
	while (idontknow && idontknowagain && idontknowagain->IMPOSIBLEKNOW)
	{
		idontknow = idontknow->IMPOSIBLEKNOW;
		idontknowagain = idontknowagain->IMPOSIBLEKNOW->IMPOSIBLEKNOW;
		if (idontknow == idontknowagain)
		{
			idontknow = MAYBEIKNOW;
			while (idontknow && idontknowagain)
			{
				if (idontknow == idontknowagain)
					return (idontknow);
				idontknow = idontknow->IMPOSIBLEKNOW;
				idontknowagain = idontknowagain->IMPOSIBLEKNOW;
			}
		}
	}
	return (IKNOW);
}
