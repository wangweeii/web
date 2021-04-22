//
// Created by w15627 on 04/19.
//

#include <netinet/in.h>
#include <sys/epoll.h>
#include <string.h>
#include <stdio.h>
#include "server.h"

int epoll_fd = epoll_create(1);

int create_server(const char *host, short port)
{
        int                parent_fd;
        struct sockaddr_in server_addr;

        // 创建一个socket
        parent_fd = socket(AF_INET, SOCK_STREAM, 0);

        // 设置socket
        setsockopt(parent_fd, SOL_SOCKET, SO_REUSEADDR,)

        // 填充IP地址和端口
        bzero((char *) &server_addr, sizeof(server_addr));
        server_addr.sin_family      = AF_INET;
        server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
        server_addr.sin_port        = htons(port);

        // 绑定socket与端口
        if (bind(parent_fd, (const struct sockaddr *) &server_addr, sizeof(server_addr)) < 0)
        {
                printf("Bind Error\n");
        }

        // 添加到EPoll中
        epoll_ctl(epoll_fd, EPOLL_CTL_ADD, parent_fd, NULL);

        return parent_fd;
}