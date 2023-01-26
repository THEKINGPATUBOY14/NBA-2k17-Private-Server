#include <iostream>
#include <WinSock2.h>
#include <stdio.h>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")


class Server
{


public:
	int ErrorCheck = WSAStartup(ver, &ws);
	WSADATA ws;
	WORD ver = MAKEWORD(2, 2);

	void StartServer()
	{

	

		

		if (ErrorCheck != 0)
		{
			printf("[SERVER] Couldnt Init WinSock");



		}


	}



};

	