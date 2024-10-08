#include <stdio.h>
#include <stdlib.h>
#include <Winsock2.h>
#include <unistd.h>
#include <iostream>
#include <string.h>

int main(){
	using namespace std;
	
    WSADATA WinSockData;
    WSAStartup(MAKEWORD(2,2),&WinSockData);
    //dhmiourgia socket gia ton client
    int network_socket;
    
    network_socket = socket(AF_INET , SOCK_STREAM,0);
    
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9005);
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    //to socket kanei connect
    int connection_status = connect(network_socket, (struct sockaddr*) &server_address, sizeof(server_address));
    
    char server_response[1024] = "";
    if (connection_status == -1){
    	cout << "Failed to connect to the server\n";
                                }
    while(connection_status == 0){
    	cout << "enter a command:\n";
    	cin >> server_response;
    	int length = strlen(server_response);
    	char *buffer = server_response;
    	send(network_socket, buffer, length,0);
  	if (strcmp(server_response,"exit") == 0)
            {
                	break;     
            }    
    }
    close(network_socket);
    WSACleanup();
    return 0;
}
