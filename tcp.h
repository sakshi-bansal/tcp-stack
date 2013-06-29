#include<stdio.h>

typedef unsigned long ipaddr_t;
typedef unsigned short int u16_t;
int tcp_socket();

int tcp_connect(ipaddr_t dst, int port);

int tcp_listen(int port, ipaddr_t *src);

int tcp_read(char *buf, int maxlen);

int tcp_write(char *buf, int len);

int close();
