#ifndef _CODE_H
#define _CODE_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include <unistd.h>
#include <regex.h>
#define MAX_SIZE 300


typedef struct{
    char date[100];
    char user[100];
    char proces[100];
    char message[100];
}Sys_data;


typedef enum {
    false,
    true
}Bool;

void detecte_auth_root(const char *file);
void initialise(Sys_data *sd, const char *data);
void save_Log_admin_();



#endif 