/*
 *  log for c & c++
 *  result : [filepath(line no)] message
 *  from : Micky Kim
 *  date : 24. 06. 2015
 */

#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define InformMessage(message, ...) fprintf(stdout, "[%s(%d)] " message "\n", __FILE__, __LINE__, ## __VA_ARGS__)
#define ErrorMessage(message, ...) fprintf(stderr, "[%s(%d)] " message "\n", __FILE__, __LINE__, ## __VA_ARGS__)

#endif // end LOG_H