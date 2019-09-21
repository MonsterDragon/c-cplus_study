/* wordcnt.c -- 统计字符数、单词数、行数 */
# include <stdio.h>
# include <ctype.h>
# include <stdbool.h>
# define STOP '|'

int main(void)
{
	char ch;
	char prev;
	long n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;

	printf("Please enter text to be analyed (| to terminate)\n");
	prev = '\n';
	while ((ch = getchar() && ch != STOP))
	{
		n_chars++;
                if (ch == '\n')
		{
			n_lines += 1;
		}
		if (!isspace(ch) && !inword)
		{
			n_words++;
			inword = true;
		}
		if (isspace(ch) && inword)
		{
			inword = false;
		}
		prev = ch;
	}
	if (prev != '\n')
	{
		p_lines = 1;
	}
	printf("characters = %ld; words = %d; lines = %d; partial = %d", n_chars, n_words, n_lines, p_lines);

	return 0;
}
