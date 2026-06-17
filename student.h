#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
struct st
{
	int roll;
	char name[20];
	float mark;
	struct st * next;
};
extern int id;
void add_new(struct st**);
void save(struct st *);
void load(struct st **);
void show(struct st *);
void del_all(struct st **);
void del_one(struct st **);
void modify(struct st *);
int exit_std(struct st *);
void reverse(struct st *);
void sort(struct st *);
struct st *copy_list(struct st *);
