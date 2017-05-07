/*
 * TrimWhitespaceTest.cpp
 */

#include "gtest/gtest.h"
#include "arduino-mock/Arduino.h"

#include "../src/TrimWhitespace.h"

TEST(TrimWhitespace, front) {
  char testString[] = "  Hello World!";
  Trim.front(testString);
  EXPECT_STREQ("Hello World!", testString);
}

TEST(TrimWhitespace, frontEmpty) {
  char testString[] = "  ";
  Trim.front(testString);
  EXPECT_STREQ("", testString);
}

TEST(TrimWhitespace, end) {
  char testString[] = "Hello World!  ";
  Trim.end(testString);
  EXPECT_STREQ("Hello World!", testString);
}

TEST(TrimWhitespace, endEmpty) {
  char testString[] = "  ";
  Trim.end(testString);
  EXPECT_STREQ("", testString);
}

TEST(TrimWhitespace, frontAndEnd) {
  char testString[] = "  Hello World!  ";
  Trim.frontAndEnd(testString);
  EXPECT_STREQ("Hello World!", testString);
}

TEST(TrimWhitespace, frontAndEndEmpty) {
  char testString[] = "  ";
  Trim.frontAndEnd(testString);
  EXPECT_STREQ("", testString);
}
