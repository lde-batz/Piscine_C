/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:02:37 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 18:11:34 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude <stdio.h>

int match (char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == *s2)
		return (1);
	if (*s1 == *s2 && *s1 && *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s1 && *s2 == '*')
	{
		if (!match(s1 + 1, s2) && !match(s1, s2 + 1))
			return (0);
		else
			return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	return (0);
}

int     main(void)
{
	printf("%d\n", match("papamama", "pa*ma*"));
	printf("%d\n", match("pap", "pa*"));
	printf("%d\n", match("amama", "*ma*"));
	printf("%d\n", match("bbsjbfa", "*"));
	printf("%d\n", match("testtesttest", "te*te*"));
	printf("%d\n", match("=/963", "*/*"));
	printf("%d\n", match("amaqqq*", "ama**"));
	printf("%d\n", match("pappo", "pa*o"));
	return (0);
}
