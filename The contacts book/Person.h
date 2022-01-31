#ifndef PERSON
#define PERSON
#include<iostream>
#include <string>
using namespace std;
//校友结构体
struct Person
{
	string m_Name; //姓名
	int m_Sex; //性别：1男 2女
	int m_Jie;//届
	int m_Age; //年龄
	string m_Academy;//系，学院	
	string m_Class;//班级
	string m_Phone; //电话
	string m_QQ;//QQ
	string m_Email;//邮箱 
	string m_Addr; //住址
};
#endif
