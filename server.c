//
// Created by w15627 on 04/19.
//

#include <netinet/in.h>
#include "server.h"

int create_server(const char *host, short port)
{
        int                parent_fd;
        struct sockaddr_in server_addr;

        setsockopt(parent_fd,SOL_SOCKET,SO_REUSEADDR,)

        return parent_fd;
}