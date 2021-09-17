/*
������: ���ظ� 
������: 2021.09.07
����: ohaelin9@gmail.com
*/ 

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();

void floor1(); //1�� 
void door(); //����
void dining(); //�Ĵ�
void table(); //��Ź 
void kitchen(); //�ξ� 
void shelf(); //����
void friger(); //����� 
void gas(); //���ڷ��� 
void bookroom(); //���� 
void book(); //å��
void poe(); //���� 
void desk(); //å�� 
void drawer(); //����
 
void floor2(); //2��
void parents(); //�θ��
void diaryP(); //�θ��ϱ� 
void kid(); //���̹�
void diaryK(); //�����ϱ� 
void dvd(); //��û����
void watch(); //�ð� 
void room0(); //â��
void inroom(); //â�� �� 

void password(); //��й�ȣ
void die(); //������� 

int isEat = false; //������ �Ծ��°� 
int isBigKey = false; //ū ���� ȹ�� ���� 
int isSmallKey = false; //���� ���� ȹ�� ����

int indining = false; //�Ĵ� ���� ����
int inkitchen = false; //�ξ� ���� ���� 
int inbookroom = false; //���� ���� ����
int inparents = false; //�θ�� ���� ���� 
int inkid = false; //���̹� ���� ����
int indvd = false; //��û���� ���� ����
int inroom0 = false; //â�� ���� ����

int main(){
	int menu;
	
	while(1){
		printf("��Ż�� ���ӿ� ���Ű��� ȯ���մϴ�.\n");
		printf("1. ���ӽ��� 0. ��������\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				intro();
				floor1();
				break;
			case 0:
				return 0;
			default:
				printf("ERROR");
				break;
		}
	}
}

void intro(){
	system("cls");
	printf("\n");
	printf("...\n");
	Sleep(2500);
	printf("Log in...\n");
	Sleep(2500);
	printf("Game Start!\n");
	Sleep(2500);
	printf("��Ż�� ���ӿ� �����ϼ̽��ϴ�.\n");
	Sleep(1500);
	printf("�̹� Ż�� �׸��� �������Դϴ�.\n");
	Sleep(1500);
	printf("�÷��̾���� ���� Ŭ��� ����մϴ�.\n\n");
	Sleep(3000);
	printf("���� ������ ���� ó�� ���� ���� ���ִ�.\n");
	Sleep(1500);
	printf("�������� 1���ΰ� ����.\n");
	Sleep(1500);
	printf("��Ż�� �������� �Ҿƹ����� ���� �ɰ� �ݵ�� Ż���ϰھ�.\n");
	Sleep(1500);
	system("pause");
}

void floor1() {//1�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[������ 1��]\n\n");
		printf("���� ����\n\n");
		printf("1. ���� ");
		if (indining) printf("2. �Ĵ� ");
		else printf("2. �� ");
		if (inbookroom) printf("3. ���� ");
		else printf("3. �� ");
		printf("4. 2��\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				door();
				break;
			case 2:
				dining();
				break;
			case 3:
				bookroom();
				break;
			case 4:
				floor2();
				break;
			default:
				printf("ERROR");
				system("pause");
				break;
		}
	}
}

void door() {//����
	int menu;
	 
	while(1) {
		system("cls");
		printf("[������ 1��]-[����]\n\n");
		printf("������ ���� �� �ִ� ���̴�.\n");
		printf("��й�ȣ�� �Է��ؾ� ���� �� �ִ�.\n");
		printf("Ű�е� ���� ���� 0�� ���ִ�.\n");  
		printf("1. ��й�ȣ�� �Է��Ѵ�. 0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				password();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void password() {//��й�ȣ 
	char pass[5] = "9810", temp[5];
	
	while(1) {
		system("cls");
		printf("��й�ȣ�� �Է��ϼ���.\n");
		printf(">> ");
		scanf("%s",&temp);
		
		if(!strcmp(pass, temp)) {
			system("cls");
			printf("Ż�⿡ �����ϼ̱���? ���ϵ帳�ϴ�, �÷��̾��!\n");
			Sleep(1500);
			printf("�Ҿƹ����� ���� ��ų �� �־ �����̿���!\n");
			Sleep(1500);
			printf("���� Ż���� ������̴ٸ� �ٸ� Ż�� ���ӵ� �÷��� ���ּ���!\n");
			Sleep(1500);
			printf("~ END ~\n\n");
			exit(0);
		}
		else {
			printf("ERROR\n");
			system("pause");
			break;
		}
	}
}

void dining() {//�Ĵ�
	int menu;
	 
	while(1) {
		indining = true;
		system("cls");
		printf("[������ 1��]-[�Ĵ�]\n\n");
		printf("�Ĵ��̴�.\n");
		if (isEat) printf("��Ź ������ �� �׸��� �ִ�.\n");
		else printf("��Ź ���� ���ĵ��� ���ִ� ������ ǳ��� �ִ�.\n");
		printf("���ʿ� ���� �ִ�.\n"); 
		printf("���� ����?\n"); 
		printf("1. ��Ź ");
		if (inkitchen) printf("2. �ξ� ");
		else printf("2. �� ");
		printf("0.���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				table();
				break;
			case 2:
				kitchen();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void table() {//��Ź 
	int menu;
	 
	while(1) {
		system("cls");
		printf("[������ 1��]-[�Ĵ�]-[���̺�]\n\n");
		if (isEat) {
			printf("���ĵ��� �̹� �Ծ���.\n");
			printf("��Ź ������ �� �׸��� �ִ�.\n");
		}
		else {
			printf("���ִ� ������ ǳ��� ���ĵ��� �ܶ� �ִ�.\n");
			printf("���ĵ��� ���� ���������...\n"); 
			printf("������?\n");
			printf("1. �Դ´� 2. ���� �ʴ´� ");
		}
		printf("0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if (isEat) {
					printf("ERROR\n");
					system("pause");
				} 
				else {
					isEat = true;
					printf("����ó�� ��Ź ���� ���ĵ��� ���� �Ծ���.\n");
					printf("���� �������Ҵ�.\n");
					system("pause");
				}
				break;
			case 2:
				if (isEat) {
					printf("ERROR\n");
					system("pause");
				}
				else {
					printf("�����ʰ� ���ĵ��� �ڼ��� ���캻��.\n");
					printf("���, �߽�, �ѽ�, �Ͻ� ��� �پ��� ������ ���ĵ��� �ܶ� �ִ�.\n");
					printf("�� ���������.\n");
					system("pause");
				}
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void kitchen() {//�ξ� 
	int menu;
	 
	while(1) {
		inkitchen = true;
		system("cls");
		printf("[������ 1��]-[�Ĵ�]-[�ξ�]\n\n");
		printf("�ξ����� ���Դ�.\n");
		printf("�����ⱸ�� ����ᰡ �ܶ� �ִ�.\n"); 
		printf("��� ã�ƺ���?\n"); 
		printf("1. ���� 2. ����� 3. �����ⱸ 0.���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				shelf();
				break;
			case 2:
				friger();
				break;
			case 3:
				gas();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void shelf() {//���� 
	printf("���� ����ᰡ ������ �����̴�.\n");
	Sleep(1500);
	printf("�� �߿����� ���� ��°�...\n");
	Sleep(2500);
	printf("������ �ϳ�,\n");
	Sleep(1500);
	printf("�������� ����,\n");
	Sleep(1500);
	printf("���Ϲڽ� �ΰ���.\n");
	system("pause");
}

void friger() {//����� 
	printf("�ÿ��� ����� �ȿ� ����ᰡ ����ִ�.\n");
	Sleep(1500);
	printf("�� �߿����� ���� ��°�...\n");
	Sleep(2500);
	printf("���� �ϳ�,\n");
	Sleep(1500);
	printf("ġ�� �ϳ�,\n");
	Sleep(1500);
	printf("���� �ϳ���.\n");
	system("pause");
}

void gas() {//���������� 
	int menu;
	
	while(1){
		system("cls");
		printf("���� �����ⱸ �� ������������ ���� ���.\n");
		printf("���� ų��?\n");
		printf("1. Yes 2. No 0.���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("���� ������ �ʴ´�.\n");
				printf("������ ���°� ����.\n");
				system("pause");
				break;
			case 2:
				printf("������ �� ������ Ű������.\n");
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void bookroom(){//���� 
	 int menu;
	 
	 while(1) {
	 	inbookroom = true;
	 	system("cls");
	 	printf("[������ 1��]-[����]\n\n");
	 	printf("å���� ������ �����.\n");
	 	printf("�� ��� å���� �ִ�.\n");
	 	printf("������ ����?\n");
	 	printf("1. å�� 2. å�� 0.���ư���.\n");
	 	printf(">> ");
	 	scanf("%d",&menu);
	 	
	 	switch(menu) {
	 		case 1:
	 			book();
	 			break;
	 		case 2:
	 			desk();
	 			break;
	 		case 0:
	 			return;
	 		default:
	 			printf("ERROR\n");
	 			system("pause");
	 			break;
		 }
	 }
}

void book(){//å�� 
	int menu;
	
	while(1) {
		system("cls");
	 	printf("[������ 1��]-[����]-[å��]\n\n");
	 	printf("���� ������ å���� �ܶ� �ִ�.\n");
	 	printf("���� å�� ����?\n");
		printf("1. �Ҽ� 2. ���� 3. ���� 0.���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("�����ΰ��� ��ܺ��� �Ҽ��� �ǳ�� �����ؼ� �����ΰ��� �����ϴ� �θǽ� ��Ÿ�� �Ҽ��̴�.\n");
				printf("���� ���������� �ð� ������ �𸣰� �����ؼ� �о���.\n");
				system("pause");
				break;
			case 2:
				poe();
				break;
			case 3:
				printf("����� ������ �����̴�.\n");
				printf("�Ƹ��� ���������ΰ� ����...\n");
				system("pause");
				break;
			case 0:
				return;
			default:
	 			printf("ERROR\n");
	 			system("pause");
	 			break;
		}
	}
}

void poe() {//���� 
	printf("������ ���ĺô�.\n\n");
	Sleep(2500);
	printf("���� �״��� ����ϴ� �״뿩\n");
	Sleep(1500);
	printf("�� ������� ���� �״븦 ���� �� �����̴�\n");
	Sleep(1500);
	printf("�� ���ʿ� �� �� ����� ���� �˸鼭��\n");
	Sleep(1500);
	printf("�� ȥ�ڴ� ������ �����ϸ���\n");
	Sleep(1500);
	printf("��, �׷��� ���� ��ڼҼ�\n\n");
	Sleep(2500);
	printf("�̻��� ���ΰ� ����.\n");
	Sleep(1500);
	printf("�������� ������ ���Դ�.\n");
	Sleep(1500);
	printf("1 - 7 - 8 - 5 - ?\n");
	system("pause");
}

void desk(){//å�� 
	int menu;
	
	while(1){
		system("cls");
	 	printf("[������ 1��]-[����]-[å��]\n\n");
	 	printf("å�� ������ ���� �������� �κη����ִ�.\n");
	 	printf("å�� ���� 3�� ������ �ִ�.");
	 	printf("��� ã�ƺ���?\n");
		printf("1. å�� �� 2. å�� ���� 0.���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("���� ����� �ۼ��� �������̴�.\n");
				printf("���� �������� �ϳ��� �𸣰ڴ�.\n");
				system("pause");
				break;
			case 2:
				drawer();
				break;
			case 0:
				return;
			default:
	 			printf("ERROR\n");
	 			system("pause");
	 			break;
		}
	}
}

void drawer() {//���� 
	int menu;
	
	while(1) {
		system("cls");
	 	printf("3������ ������ �����̴�.\n");
	 	printf("1. �� �� ���� 2. �߰� ���� 3. �� �Ʒ� ���� 0.���ư���.\n");
	 	printf(">> ");
	 	scanf("%d",&menu);
	 	
		switch(menu) {
	 		case 1:
	 			printf("�� �� ������ ����ô�.\n");
	 			printf("�� �����.\n");
	 			system("pause");
	 			break;
	 		case 2:
	 			if (isSmallKey) printf("�� �����.\n");
	 			else {
	 				isSmallKey = true;
	 				printf("�߰� ������ ����ô�.\n");
	 				printf("���� ���踦 �����.\n");
	 				system("pause");
				}
	 			break;
	 		case 3:
	 			if (isBigKey) printf("�� �����.\n");
	 			else {
	 				isBigKey = true;
	 				printf("�� �Ʒ� ������ ����ô�.\n");
	 				printf("ū ���踦 �����.\n");
	 				system("pause");
				}
	 			break;
	 		case 0:
	 			return;
	 		default:
	 			printf("ERROR\n");
	 			system("pause");
	 			break;
		}
	}
}

void floor2() {//2�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[������ 2��]\n\n");
		printf("������ 2���̴�.\n");
		printf("���� ����\n\n");
		if (inparents) printf("1. �κι� ");
		else printf("1. �� ");
		if (inkid) printf("2. ���̹� ");
		else printf("2. �� ");
		if (indvd) printf("3. ��û���� ");
		else printf("3. �� ");
		if (inroom0) printf("4. â�� ");
		else printf("4. �� ");
		printf("0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				parents();
				break;
			case 2:
				kid();
				break;
			case 3:
				dvd();
				break;
			case 4:
				room0();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void parents() {//�κι� 
	int menu;
	
	while(1) {
		inparents = true;
		system("cls");
		printf("[������ 2��]-[�κι�]\n\n");
		printf("���� ���� �κ��� ���̴�.\n");
		printf("å�� ���� �ϱ����� �ִ�.\n");
		printf("�ϱ����� �������� ���� ���谡 �ʿ��ϴ�.\n");
		printf("1. �ϱ����� �д´�. 0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if (isSmallKey) diaryP();
				else {
					printf("���� ���谡 ����.\n");
					system("pause");
				}
				
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void diaryP() {//�κ��ϱ��� 
	system("cls");
	printf("�ϱ⸦ ���ĺô�.\n\n");
	Sleep(2500);
	printf("X�� X��. ���� ���� ��ȥ�ߴ�. �ε� �츮 �ճ��� �ູ�� �����ϱ�.\n"); 
	Sleep(2000);
	printf("X�� X��. ������ ��ȥ������̴�. ��۳������� �׿� ������ ���̰� ������ �ʾ� �����̴�.\n");
	Sleep(2000);
	printf("X�� X��. ��ȥ���� 3��, ������ ���̰� ������ �ʴ´�. �Ծ��� ����غ��߰ڴ�.\n");
	Sleep(2000);
	printf("X�� X��. �ᱹ ���̸� �Ծ��ߴ�. ���̴� 3��� ���ϰ� �Ϳ��� ���̴�.\n");
	Sleep(2000);
	printf("X�� X��. ���� ���̰� �̻��ϴ�. �������� ���ƴٴϰų� �������� ���� ������ �̻��� ������ ������ ���. ���ſ�̰���?\n");
	Sleep(2000);
	printf("X�� X��. ���̰� �������. ���� ������ ã�ƺ��� ������ �ʴ´�.\n");
	Sleep(2000);
	printf("X�� X��. ������ �����ġ�� �����. ��й�ȣ�� �𸣴� �������� ����.\n");
	Sleep(3000);
	printf("���... ��...\n");
	Sleep(2500);
	printf("�� �ڷ� ��� �������� �������ְ� ������ �忡 �ǰ� �ܶ� �����ִ�.\n");
	system("pause");
}

void kid() {//���̹� 
	int menu;
	
	while(1) {
		inkid = true;
		system("cls");
		printf("[������ 2��]-[���̹�]\n\n");
		printf("� ������ ���̴�.\n");
		printf("���̰� �����ҹ��� �͵�� �ٸ����ִ�.\n");
		printf("���� ��ø�� �߰��ߴ�.\n");
		printf("������ �ϱ��ΰ� ����.\n");
		printf("�ϱ⸦ ������?\n"); 
		printf("1. �ϱ����� �д´�. 0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				diaryK();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void diaryK() {//�����ϱ� 
	system("cls");
	printf("�ϱ⸦ ���ĺô�.\n\n");
	Sleep(2500);
	printf("���� ��� �������� �������ִ�.\n");
	Sleep(1500);
	printf("�����ϰ� ���� �� �ִ� �κ��� �߰��ߴ�.\n");
	Sleep(2500);
	printf("���� �츮���� ����� �Ĵ�, ��û����, ����, â�� ������ ���ƿ�.\n");
	Sleep(2500);
	printf("���� �� �ϱ⸦ �а� �ִ� �մ���\n");
	Sleep(2500);
	printf("�츮���� ���ƴٴϸ鼭 ��� ���� ���ҳ���?\n");
	Sleep(2500);
	system("pause");
}

void dvd() {//��û���� 
	int menu;
	
	while(1) {
		indvd = true;
		system("cls");
		printf("[������ 2��]-[��û����]\n\n");
		printf("������ ���� �� �� �ִ� ��û�����̴�.\n");
		printf("�������� ����� �� �ִ�.\n");
		printf("���ڽ� �ð谡 �ִ�.\n");
		printf("1. �������� ����. 2. �ð踦 ����. 0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("�������� ������� ��ȭ�� ���´�.\n");
				printf("��� ������ ���� ������ ������ �� �� ���Ͽ��� ��� �̾߱��.\n");
				printf("��ī���� �û�Ŀ��� ������ �� �� ���� ��ȭ��.\n");
				system("pause");
				break;
			case 2:
				watch();
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}
}

void watch() {//�ð� 
	system("cls");
	printf("���ڽ� �ð��.\n");
	Sleep(1500);
	printf("�׷��� ��Ÿ���� ���ڴ� �ð��� �ƴѰ� ����.\n");
	Sleep(1500);
	printf("1\n");
	Sleep(1500);
	printf("3\n");
	Sleep(1500);
	printf("���� 1�� 3�� ���� ���.\n");
	Sleep(1500);
	system("pause");
}

void room0() {//â�� 
	int menu;
	
	while(1) {
		if (inroom0) {
			system("cls");
			printf("[������ 2��]-[â��]\n\n");
			printf("â�� �� �տ� �Դ�.\n");
			printf("������ �̻��� ����� ��������.\n");
			printf("â�� ������ ū ���谡 �ʿ��ϴ�.\n");
			printf("1. â�� ���� ����. ");
		}
		else {
			system("cls");
			printf("[������ 2��]-[��]\n\n");
			printf("�� �տ� �Դ�.\n");
			printf("������ �̻��� ����� ��������.\n");
			printf("�� �ȿ� ������ ū ���谡 �ʿ��ϴ�.\n");
			printf("1. ���� ����. ");
		}
		printf("0. ���ư���.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if (isBigKey) inroom();
				else {
					printf("ū ���谡 ����.\n");
					system("pause");
				}
				break;
			case 0:
				return;
			default:
				printf("ERROR\n");
				system("pause");
				break;
		}
	}	
}

void inroom() {//â�� �� 
	inroom0 = true;
	system("cls");
	printf("[������ 2��]-[â��]\n\n");
	printf("â���.\n");
	Sleep(2500);
	printf("�׷���,\n");
	Sleep(2500);
	printf("�ƹ��͵� ����.\n");
	Sleep(2500);
	printf("â�� �������� ���ǵ��̳� ����.\n");
	Sleep(2500);
	printf("�� ������ ����.\n");
	Sleep(2500);
	printf("���� ��� �� �����.\n");
	Sleep(2500);
	system("pause");
}


