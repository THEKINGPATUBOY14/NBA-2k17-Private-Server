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
	int ClientSizes = sizeof(client);
	SOCKET ClientSockets = accept(ClientSockets, (sockaddr*)&client, &ClientSizes);
	SOCKADDR_IN main;
	SOCKADDR_IN client;
	bool bIsServerActive;

	void StartServer()
	{
		ErrorCheck = WSAStartup(ver, &ws);
		if (ErrorCheck != 0)
		{
			printf("[SERVER] Couldnt Init WinSock");
		}
	}

	void StartListen()
	{
		main.sin_addr.S_un.S_addr = inet_addr("192.168.1.4");
		main.sin_family = AF_INET;
		main.sin_port = htons(17217);

		ErrorCheck = bind(ListenSocket, (sockaddr*)&main, sizeof(main));
		if (ErrorCheck != 0)
		{
			printf("[SERVER] Couldn't Bind Socket to main struct!");

		}

		ErrorCheck = listen(ListenSocket, SOMAXCONN);
		if (ErrorCheck != 0)
		{
			printf("[SERVER] Couldn't listen for connectins!");


		}
		else
		{
			bIsServerActive = true;


			while (bIsServerActive)
			{
				ClientSockets;

			}
		}



	}

};
