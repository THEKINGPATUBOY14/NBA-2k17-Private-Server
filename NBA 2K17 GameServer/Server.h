#include <iostream>
#include <WinSock2.h>
#include <stdio.h>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")


class Server
{


public:
	int ErrorCheck;
	WSADATA ws;
	WORD ver = MAKEWORD(2, 2);
	SOCKET MainSocket = socket(AF_INET, SOCK_STREAM, 0);
	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, 0);

	void StartServer()
	{
		ErrorCheck = WSAStartup(ver, &ws);
		if (ErrorCheck != 0)
		{
			printf("[SERVER] Couldnt Init WinSock");
		}
	}



};

	