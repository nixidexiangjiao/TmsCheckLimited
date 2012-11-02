/*
 * GetMacAddr.cpp
 *
 *  Created on: 2012-10-17
 *      Author: yueke2
 */
#include "GetMacAddr.h"
#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <cstring>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <net/if.h>

std::string getMacAddr() {
	using namespace std;
	string result = "";
	int sockfd;
	struct ifreq buffer;
	sockfd = socket(PF_INET, SOCK_DGRAM, 0);
	if (sockfd <= 0) {
		cerr << "Can not create socket!\n";
		return result;
	}
	memset(&buffer, 0, sizeof(struct ifreq));
	strcpy(buffer.ifr_name, "eth0");
	ioctl(sockfd, SIOCGIFHWADDR, &buffer);
	close(sockfd);
//	cout << "Network MAC address: ";
	for (int i = 0; i < 6; ++i) {
		char temp[2];
		sprintf(temp, "%02x", (unsigned char) buffer.ifr_hwaddr.sa_data[i]);
		result += temp;
	}
//	cout << result;
	return result;
}

