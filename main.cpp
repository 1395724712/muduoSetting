#include<iostream>
#include"muduo/base/Logging.h"
#include"muduo/net/EventLoop.h"
#include"muduo/net/TcpServer.h"
using namespace std;

int main(){
    LOG_INFO<<"muduo test";
    int a = 2;
    LOG_INFO<<a+2;
    // muduo::net::EventLoop loop;
    cout<<"Running success"<<endl;

    return 0;
}