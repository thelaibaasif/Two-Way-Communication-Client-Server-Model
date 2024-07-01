#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char message[256] = "This is client.";
    char buff[200];
    int client_socket;
    
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    
    struct sockaddr_in client_address; 
    client_address.sin_family = AF_INET;
    client_address.sin_port = htons(3001);
    client_address.sin_addr.s_addr = INADDR_ANY;
    
    connect(client_socket, (struct sockaddr*) &client_address, sizeof(client_address));
    
    printf("Enter the string you want:");
    fgets(buff, sizeof(buff), stdin);
    
    send(client_socket, buff, sizeof(buff), 0);
    recv(client_socket, &buff, sizeof(buff), 0);
    
    printf("\n %s\n", buff);
    close(client_socket);
    return 0;
}
