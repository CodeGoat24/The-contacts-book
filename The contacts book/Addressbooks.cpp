#include"Addressbooks.h"
#include<algorithm>
#include<fstream>
void Addressbooks::showMenu() {
	if(flag == 0) {
		cout << "            !!!!!!" << endl;
		cout << "            !!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                   !!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!                                  !!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!                               !!!!!!!!!!" << endl;
		cout << "            !!!!!!!!!!!!!!!!!!!!!!!                 !         !!!!!!!!!!" << endl;
		cout << "          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!              !!     !!!!!!!!!!!!" << endl;
		cout << "         !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!      !!!!!!!!" << endl;
		cout << "          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "           !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!!!!!!" << endl;
		cout << "            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!!!!!" << endl;
		cout << "     !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!!!!" << endl;
		cout << "!!!!!!!欢迎使用校友录管理系统，请按任意键进入本系统！!!!!!!!!!!!!!!!" << endl;
		cout << "        !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!" << endl;
		cout << "      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !" << endl;
		cout << "        !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "         !!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "               !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                !!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                 !!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                  !!!!!!!!!!!!!!!!!!!" << endl;
		cout << "                   !!!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!!!!!" << endl;
		cout << "                    !!!!!!!!!!!!!!!" << endl;
		cout << "                     !!!!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                      !!!!!!!!!!!!" << endl;
		cout << "                        !!!!!!!!" << endl;
		cout << "                        !!!!!!" << endl;
		cout << "                         !!!!" << endl;
		flag++;
		system("pause");
		system("cls");
	}
	cout << "    -------------------------------------------------------------------------------------------------------------" << endl;
	cout << "    |                                        へ　　　　　／|                                                    |" << endl;
	cout << "    |                                        　　/＼7　　　 ∠＿/                                               |" << endl;
	cout << "    |                                        　 /　│　　 ／　／                                                 |" << endl;
	cout << "    |                                          │　Z ＿,＜　／　　 /`ヽ     皮卡丘冲鸭~                          |" << endl;
	cout << "    |                                          │　　　　　ヽ　　 /　　〉                                        |" << endl;
	cout << "    |                                        　 Y　　　　　`　 /　　/                                           |" << endl;
	cout << "    |                                          |●　?　●　　 |〈　　/                                          |" << endl;
	cout << "    |                                        　()　 へ　　　　|　＼〈                                           |" << endl;
	cout << "    |                                        　　>- __　 ィ　 │ ／／                                            |" << endl;
	cout << "    |                                        　 / へ　　 /　?＜| ＼＼                                           |" << endl;
	cout << "    |                                        　 ヽ_?　　(_／　 │／／                                            |" << endl;
	cout << "    |                                        　　7　　　　　　　|／                                             |" << endl;
	cout << "    |                                        　　＞―r￣￣`-―＿                                                |" << endl;
	cout << "    |***********************************************************************************************************|" << endl;
	cout << "    |                                      *****ZJUT校友录管理系统****                                          |" << endl;
	cout << "    |                                      *****  1、添加联系人  *****                                          |" << endl;
	cout << "    |                                      *****  2、显示联系人  *****                                          |" << endl;
	cout << "    |                                      *****  3、删除联系人  *****                                          |" << endl;
	cout << "    |                                      *****  4、查找联系人  *****                                          |" << endl;
	cout << "    |                                      *****  5、修改联系人  *****                                          |" << endl;
	cout << "    |                                      *****  6、清空联系人  *****                                          |" << endl;
	cout << "    |                                      *****  7、整理通讯录  *****                                          |" << endl;
	cout << "    |                                      *****  0、退出通讯录  *****                                          |" << endl;
	cout << "    |                                      *****版权所有，侵权必究****                                          |" << endl;
	cout << "    -------------------------------------------------------------------------------------------------------------" << endl;
}

/*
皮卡丘冲鸭！

*/
void Addressbooks:: saveFile() { //保存文件到本地

	ofstream out("校友录管理系统信息保存.txt", ios::out);

	for(int i = 0; i < m_Size; i++) {
		out << personArray[i].m_Name << " ";
		out << personArray[i].m_Jie << " ";
		out << personArray[i].m_Age << " ";
		out << personArray[i].m_Academy << " ";
		out << personArray[i].m_Class << " ";
		out << personArray[i].m_QQ << " ";
		out << personArray[i].m_Phone << " ";
		out << personArray[i].m_Email << " ";
		out << personArray[i].m_Addr << " ";
		out << endl;
	}
	out.close();
}

void Addressbooks:: getFile() { //从本地txt读取联系人信息
	ifstream in("校友录管理系统信息保存.txt", ios:: in);

	string name;

	while(in >> name) {
		personArray[m_Size].m_Name = name;
		in >> personArray[m_Size].m_Jie;
		in >> personArray[m_Size].m_Age;
		in >> personArray[m_Size].m_Academy;
		in >> personArray[m_Size].m_Class;
		in >> personArray[m_Size].m_QQ;
		in >> personArray[m_Size].m_Phone;
		in >> personArray[m_Size].m_Email;
		in >> personArray[m_Size].m_Addr;
		mp[name] = 1;
		m_Size++;
	}
	in.close();
}
void Addressbooks::addPerson() {//添加联系人
	//判断电话本是否满了
	if (m_Size == MAX) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	} else {
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;

		if(mp.count(name)) { //联系人已存在（不允许重名）
			cout << "此联系人已存在！" << endl;
			system("pause");
			system("cls");
			return;
		}

		personArray[m_Size].m_Name = name;
		mp[name] = 1;//用map标记此姓名，方便下次判断此姓名是否存在
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		//性别
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				personArray[m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		personArray[m_Size].m_Age = age;

		//届
		cout << "请输入届次" << endl;
		int jie = 2021;
		while(1) {
			cin >> jie;
			if(jie <= 2022 && jie >= 2000) {
				personArray[m_Size].m_Jie = jie;
				break;
			}
			cout << "输入有误，请重新输入";
		}


		//系（学院）
		cout << "请输入学院(如：计算机学院)" << endl;

		while(1) {
			string ady;
			cin >> ady;
			int len = ady.size() / 2;
			if(len >= 3) {
				personArray[m_Size].m_Academy = ady;
				break;
			} else cout << "输入有误，请重新输入";
		}

		//班级
		cout << "请输入班级(如：02、10)" << endl;
		string cl;
		cin >> cl;
		personArray[m_Size].m_Class = cl;

		//QQ
		cout << "请输入联系QQ：" << endl;
		string QQ;
		cin >> QQ;
		personArray[m_Size].m_QQ = QQ;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		personArray[m_Size].m_Phone = phone;

		//Email
		cout << "请输入Email：" << endl;
		string email;
		cin >> email;
		personArray[m_Size].m_Email = email;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		personArray[m_Size].m_Addr = address;

		//更新通讯录人数
		m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//2、显示所有联系人信息
void Addressbooks::showPerson() {
	if (m_Size == 0) {
		cout << "当前记录为空" << endl;
	} else {

		for (int i = 0; i < m_Size; i++) {
			cout << "姓名：" << personArray[i].m_Name << "\t";
			cout << "性别：" << (personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << personArray[i].m_Age << "\t";
			cout << "届次：" << personArray[i].m_Jie << "\t";
			cout << "学院：" << personArray[i].m_Academy << "\t";
			cout << "班级：" << personArray[i].m_Class << "\t";
			cout << endl << "\t\t";
			cout << "QQ：" << personArray[i].m_QQ << "\t";
			cout << "Email：" << personArray[i].m_Email << "\t";
			cout << "电话：" << personArray[i].m_Phone << "\t";
			cout << "住址：" << personArray[i].m_Addr << endl;
			cout << endl;
		}
	}

	system("pause");
	system("cls");

}

//判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1
int Addressbooks::isExist(string name) { //按照名字查找联系人

	for (int i = 0; i < m_Size; i++) {
		if (personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//删除指定联系人信息(根据姓名删除)
void Addressbooks::deletePerson() {

	cout << "请输入您要删除的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = isExist(name);
	if(ret != -1) {
		for (int i = ret; i < m_Size; i++) {
			personArray[i] = personArray[i + 1];
		}
		m_Size--;
		mp.erase(name);
		cout << "删除成功" << endl;
	} else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}


void Addressbooks::print(int ret) {//打印下标为ret的联系人信息

	if (ret != -1) {
		cout << "姓名：" << personArray[ret].m_Name << "\t";
		cout << "性别：" << (personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << personArray[ret].m_Age << "\t";
		cout << "届次：" << personArray[ret].m_Jie << "\t";
		cout << "学院：" << personArray[ret].m_Academy << "\t";
		cout << "班级：" << personArray[ret].m_Class << "\t";
		cout << endl << "\t";
		cout << "QQ：" << personArray[ret].m_QQ << "\t";
		cout << "Email：" << personArray[ret].m_Email << "\t";
		cout << "电话：" << personArray[ret].m_Phone << "\t";
		cout << "住址：" << personArray[ret].m_Addr << endl;
		cout << endl;

	} else {
		cout << "查无此人" << endl;
	}
}

//4、查找指定联系人信息
void Addressbooks::findPerson() {

	if (m_Size == 0) cout << "当前记录为空" << endl;

	cout << "请输入您要查找的方式" << endl;
	cout << "1.姓名" << endl;
	cout << "2.届级" << endl;
	cout << "3.学院" << endl;
	cout << "4.班级" << endl;
	int select = 0;
	cin >> select;
	int ret = -1;
	int f = 0;
	if(select == 1) { //按照姓名查找(在本程序中姓名唯一)

		cout << "请输入联系人姓名" << endl;
		string name;
		cin >> name;
		ret = isExist(name);
		print(ret);
		goto a;
	} else if(select == 2) {//按照届级查找(可能有多个)

		cout << "请输入联系人届次" << endl;
		int jie;
		cin >> jie;
		for (int i = 0; i < m_Size; i++) {
			if (personArray[i].m_Jie == jie) {
				print(i), f = 1;
			}
		}
	} else if(select == 3) {//按照学院查找(可能有多个)

		cout << "请输入联系人学院" << endl;
		string ady;
		cin >> ady;
		for (int i = 0; i < m_Size; i++) {

			if (personArray[i].m_Academy == ady) {
				print(i), f = 1;
			}
		}
	} else if(select == 4) { //按照班级查找(可能有多个)

		cout << "请输入联系人所在学院" << endl;
		string acd;
		cin >> acd;
		cout << "请输入联系人所在班级" << endl;
		string cl;
		cin >> cl;
		for (int i = 0; i < m_Size; i++) {
			if (personArray[i].m_Academy == acd && personArray[i].m_Class == cl) {
				print(i), f = 1;
			}
		}
	}
	if(!f) cout << "查无此人" << endl;
a:
	;
	system("pause");
	system("cls");

}

//5、修改指定联系人信息
void Addressbooks::modifyPerson() {
	cout << "请输入您要修改的联系人姓名" << endl;
	string name;
	cin >> name;

	int ret = isExist(name);//判断此人是否存在，若存在则返回下标

	if (ret != -1) {
		mp.erase(name);
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		mp[name] = 1;
		personArray[ret].m_Name = name;

		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;

		//性别
		int sex = 0;
		while (true) {

			cin >> sex;
			if (sex == 1 || sex == 2) {
				personArray[ret].m_Sex = sex;
				break;
			}

			cout << "输入有误，请重新输入";
		}

		//年龄
		cout << "请输入年龄：" << endl;

		int age = 0;
		cin >> age;
		personArray[ret].m_Age = age;

		//届
		cout << "请输入届次" << endl;

		int jie = 2021;
		while(1) {
			cin >> jie;
			if(jie <= 2022 && jie >= 2000) {
				personArray[ret].m_Jie = jie;
				break;
			}
			cout << "输入有误，请重新输入";
		}


		//系（学院）
		cout << "请输入学院(如：计算机学院)" << endl;

		while(1) {
			string ady;
			cin >> ady;
			int len = ady.size() / 2;
			if(len >= 3) {
				personArray[ret].m_Academy = ady;
				break;
			} else cout << "输入有误，请重新输入";
		}

		//班级
		cout << "请输入班级(如：02、10)" << endl;
		string cl;
		cin >> cl;
		personArray[ret].m_Class = cl;

		//QQ
		cout << "请输入联系QQ：" << endl;
		string QQ;
		cin >> QQ;
		personArray[ret].m_QQ = QQ;

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		personArray[ret].m_Phone = phone;

		//Email
		cout << "请输入Email：" << endl;
		string email;
		cin >> email;
		personArray[ret].m_Email = email;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	} else {
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

}

//清空所有联系人
void Addressbooks::cleanPerson() {
	m_Size = 0;
	mp.clear();
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
int cmp1(const Person& a, const Person& b) {
	if(a.m_Name.size() != b.m_Name.size())

		return a.m_Name.size() < b.m_Name.size();

	return a.m_Name < b.m_Name;
}
int cmp2(const Person& a, const Person& b) {
	if(a.m_Jie == b.m_Jie) { //届相同，则按姓名排序

		if(a.m_Name.size() != b.m_Name.size())

			return a.m_Name.size() < b.m_Name.size();

		return a.m_Name < b.m_Name;
	}

	return a.m_Jie < b.m_Jie;
}
//"---------------------------快速排序届级-----------------------"
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}


int split(Person a[], int low, int high) {
	int i = low;
	int x = a[i].m_Jie;

	for(int j = low+1; j<=high; j++)

		if (a[j].m_Jie <= x) {
			i++;
			swap(a[i], a[j]);
		}
	swap(a[low], a[i]);
	return i;
}


void quicksort(Person a[], int low, int high) {
	if (low < high) {
		int i = split(a, low, high);    
		quicksort(a, low, i - 1);    
		quicksort(a, i + 1, high);    
	}
}
//"-------------------------------------------------------------------------"
int Ssplit(Person a[], int low, int high) {
	int i = low;
	string x = a[i].m_Name;

	for(int j = low+1; j<=high; j++)

		if (a[j].m_Name <= x) {
			i++;
			swap(a[i], a[j]);
		}
	swap(a[low], a[i]);
	return i;
}


void Squicksort(Person a[], int low, int high) {
	if (low < high) {
		int i = split(a, low, high);    
		Squicksort(a, low, i - 1);    
		Squicksort(a, i + 1, high);    
	}
}
void Addressbooks::sortingPerson() {
	if(m_Size == 0) {
		cout << "当前记录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请选择排序联系人方式：" << endl;
	cout << "1.姓名" << endl;
	cout << "2.届级" << endl;
	int select = 0;
	cin >> select;

	if(select == 1) {

//		sort(personArray, personArray + m_Size, cmp1);
		Squicksort(personArray, 0, m_Size - 1);
		cout << "排序成功！" << endl;
		showPerson();

	} else if(select == 2) {

//		sort(personArray, personArray + m_Size, cmp2);
		quicksort(personArray, 0, m_Size - 1);
		cout << "排序成功！" << endl;
		showPerson();

	} else cout << "排序失败！" << endl;

	if(select != 1 && select != 2) {
		system("pause");
		system("cls");
	}

}
