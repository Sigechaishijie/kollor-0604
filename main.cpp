#include "others.hpp"

bool is_start;
string name;

void menu_start() {
	char char_control;
	cout << "输入 p 以开始游戏：";
	cin >> char_control;
	if (char_control == 'p') is_start = true;
	cout << "请输入昵称：";
	cin >> name;
}

void pre_jnr_4() {
	cout << "同学 同学  同学 同学  同学 " << name << "  同学 同学\n同学 同学  同学 同学  同学 同学  同学 同学\n同学 同学  同学 同学  同学 同学  同学 同学\n同学 同学  同学 同学  同学 同学  同学 同学\n同学 同学  同学 同学  同学 同学  同学 同学\n同学 同学";
	
}

int main () {
	optimise();
	menu_start();
	if (is_start) {
		pre_jnr_4();
	}
}
