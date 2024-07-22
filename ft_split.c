/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsierra- <rsierra-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:57:49 by rsierra-          #+#    #+#             */
/*   Updated: 2024/07/19 13:57:54 by rsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t ft_count_words(const char *s, char c) {
    size_t count = 0;

    while (*s) {
        if (*s != c && (s[1] == c || !s[1]))
            count++;
        s++;
    }
    return count;
}

static char *get_next_word(const char *s, char c, int *start) {
    const char *end;
    char *word;
    size_t length;
    size_t i = 0;

    while (s[*start] && s[*start] == c)
        (*start)++;

    if (!s[*start])
        return NULL;

    end = s + *start;
    while (*end && *end != c)
        end++;

    length = end - (s + *start);
    word = (char *)malloc((length + 1) * sizeof(char));
    if (!word)
        return NULL;

    while (i < length) {
        word[i] = s[*start + i];
        i++;
    }
    word[length] = '\0';

    *start = end - s;
    return word;
}

static void free_result(char **result) {
    int i = 0;
    while (result[i]) {
        free(result[i]);
        i++;
    }
    free(result);
}

char **ft_split(char const *s, char c) {
    char **result;
    size_t word_count;
    size_t i = 0;
    int start = 0;

    if (!s)
        return NULL;

    word_count = ft_count_words(s, c);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (i < word_count) {
        result[i] = get_next_word(s, c, &start);
        if (!result[i]) {
            free_result(result);
            return NULL;
        }
        i++;
    }
    result[i] = NULL;
    return result;
}

