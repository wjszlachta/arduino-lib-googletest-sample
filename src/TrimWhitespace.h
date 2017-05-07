/*
 * TrimWhitespace.h
 */

#ifndef TRIMWHITESPACE_H
#define TRIMWHITESPACE_H

class TrimWhitespace {
public:
  void front(char *text);
  void end(char *text);
  void frontAndEnd(char *text);
};

extern TrimWhitespace Trim;

#endif
