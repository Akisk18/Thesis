#include <stdio.h>
#include <stdlib.h>
#include <Winsock2.h>
#include <unistd.h>
#include <iostream>
#include "ptuxiakh1.h"

int main(){
	using namespace std;
	WSADATA WinSockData;
	WSAStartup(MAKEWORD(2,2),&WinSockData);
	
	//dhmiourgia socket gia ton server
	int server_socket;
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	//define the server address
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9005);
	server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
	
	bind(server_socket, (struct sockaddr*) &server_address , sizeof(server_address));
	listen(server_socket,5);
	while(1){
	 int client_socket;
	 client_socket = accept(server_socket,NULL,NULL);
	 char server_message[1024];
	 int length;
	 initwindow(800,800);
	 reset();
	while(1){
	length = recv(client_socket, server_message, sizeof(server_message),0);
        if ( length > 0 )
        {
            	
            server_message[length] = '\0' ;
          
            if (strcmp( server_message,"moveright1") == 0)
            {
                	moveRight1();     
            }
		  if (strcmp(server_message,"moveright2") == 0)
            {
                	moveRight2();     
            } 
            if (strcmp(server_message,"moveleft1") == 0)
            {
                	moveLeft1();     
            }
            if (strcmp(server_message,"moveleft2") == 0)
            {
                	moveLeft2();     
            }
            if (strcmp(server_message,"moveup1") == 0)
            {
                	moveUp1();     
            }
            if (strcmp(server_message,"moveup2") == 0)
            {
                	moveUp2();     
            }
            if (strcmp(server_message,"movedown1") == 0)
            {
                	moveDown1();     
            }
            if (strcmp(server_message,"movedown2") == 0)
            {
                	moveDown2();     
            }
            if (strcmp(server_message,"rotate90right1") == 0)
            {
                	rotate90right1();     
            }
            if (strcmp(server_message,"rotate90right2") == 0)
            {
                	rotate90right2();     
            }
            if (strcmp(server_message,"rotate90left1") == 0)
            {
                	rotate90left1();     
            }
            if (strcmp(server_message,"rotate90left2") == 0)
            {
                	rotate90left2();     
            }
            if (strcmp(server_message,"rotate180first") == 0)
            {
                	rotate180first();     
            }
            if (strcmp(server_message,"rotate180second") == 0)
            {
                	rotate180second();     
            }
            if (strcmp(server_message,"reset") == 0)
            {
                	reset();     
            }
            if (strcmp(server_message,"exit") == 0)
            {
                	exit();     
                	break;
            }
            
          
	  }
	}
}
close(server_socket);
WSACleanup();
return 0;
}
