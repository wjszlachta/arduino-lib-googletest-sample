/*
 * TrimWhitespace.cpp
 */

#include "TrimWhitespace.h"

TrimWhitespace Trim;

void TrimWhitespace::front(char *text) {
  char *i = text;
  char *j = text;
  bool reachedEndOfWhitespace = false;
  do {
    *i = *j;
    if(*i != ' ' || reachedEndOfWhitespace) {
      i++;
      reachedEndOfWhitespace = true;
    }
  } while (*j++ != '\0');
}

void TrimWhitespace::end(char *text) {
  char *i = text;
  int j = 0;
  while (*i != '\0') {
    i++;
    j++;
  }
  while (*--i == ' ' && --j >= 0) {
    *i = '\0';
  }
}

void TrimWhitespace::frontAndEnd(char *text) {
  front(text);
  end(text);
}
