/*
개발자: 오해린 
개발일: 2021.09.07
문의: ohaelin9@gmail.com
*/ 

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();

void floor1(); //1층 
void door(); //현관
void dining(); //식당
void table(); //식탁 
void kitchen(); //부엌 
void shelf(); //선반
void friger(); //냉장고 
void gas(); //전자렌지 
void bookroom(); //서재 
void book(); //책장
void poe(); //시집 
void desk(); //책상 
void drawer(); //서랍
 
void floor2(); //2층
void parents(); //부모방
void diaryP(); //부모일기 
void kid(); //아이방
void diaryK(); //아이일기 
void dvd(); //시청각실
void watch(); //시계 
void room0(); //창고
void inroom(); //창고 안 

void password(); //비밀번호
void die(); //사망엔딩 

int isEat = false; //음식을 먹었는가 
int isBigKey = false; //큰 열쇠 획득 유무 
int isSmallKey = false; //작은 열쇠 획득 유무

int indining = false; //식당 출입 유무
int inkitchen = false; //부엌 출입 유무 
int inbookroom = false; //서재 출입 유무
int inparents = false; //부모방 출입 유무 
int inkid = false; //아이방 출입 유무
int indvd = false; //시청각실 출입 유무
int inroom0 = false; //창고 출입 유무

int main(){
	int menu;
	
	while(1){
		printf("방탈출 게임에 오신것을 환영합니다.\n");
		printf("1. 게임시작 0. 게임종료\n");
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
	printf("방탈출 게임에 입장하셨습니다.\n");
	Sleep(1500);
	printf("이번 탈출 테마는 대저택입니다.\n");
	Sleep(1500);
	printf("플레이어님의 무사 클리어를 기원합니다.\n\n");
	Sleep(3000);
	printf("눈을 떠보니 생전 처음 보는 곳에 와있다.\n");
	Sleep(1500);
	printf("대저택의 1층인것 같다.\n");
	Sleep(1500);
	printf("방탈출 마스터인 할아버지의 명예를 걸고 반드시 탈출하겠어.\n");
	Sleep(1500);
	system("pause");
}

void floor1() {//1층 
	int menu;
	
	while(1) {
		system("cls");
		printf("[대저택 1층]\n\n");
		printf("어디로 갈까\n\n");
		printf("1. 현관 ");
		if (indining) printf("2. 식당 ");
		else printf("2. 방 ");
		if (inbookroom) printf("3. 서재 ");
		else printf("3. 방 ");
		printf("4. 2층\n");
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

void door() {//현관
	int menu;
	 
	while(1) {
		system("cls");
		printf("[대저택 1층]-[현관]\n\n");
		printf("밖으로 나갈 수 있는 문이다.\n");
		printf("비밀번호를 입력해야 나갈 수 있다.\n");
		printf("키패드 옆에 숫자 0이 써있다.\n");  
		printf("1. 비밀번호를 입력한다. 0. 돌아간다.\n");
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

void password() {//비밀번호 
	char pass[5] = "9810", temp[5];
	
	while(1) {
		system("cls");
		printf("비밀번호를 입력하세요.\n");
		printf(">> ");
		scanf("%s",&temp);
		
		if(!strcmp(pass, temp)) {
			system("cls");
			printf("탈출에 성공하셨군요? 축하드립니다, 플레이어님!\n");
			Sleep(1500);
			printf("할아버지의 명예를 지킬 수 있어서 다행이에요!\n");
			Sleep(1500);
			printf("저택 탈출이 재밌으셨다면 다른 탈출 게임도 플레이 해주세요!\n");
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

void dining() {//식당
	int menu;
	 
	while(1) {
		indining = true;
		system("cls");
		printf("[대저택 1층]-[식당]\n\n");
		printf("식당이다.\n");
		if (isEat) printf("식탁 위에는 빈 그릇만 있다.\n");
		else printf("식탁 위의 음식들이 맛있는 냄새를 풍기고 있다.\n");
		printf("안쪽에 문이 있다.\n"); 
		printf("어디로 갈까?\n"); 
		printf("1. 식탁 ");
		if (inkitchen) printf("2. 부엌 ");
		else printf("2. 문 ");
		printf("0.돌아간다.\n");
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

void table() {//식탁 
	int menu;
	 
	while(1) {
		system("cls");
		printf("[대저택 1층]-[식당]-[테이블]\n\n");
		if (isEat) {
			printf("음식들을 이미 먹었다.\n");
			printf("식탁 위에는 빈 그릇만 있다.\n");
		}
		else {
			printf("맛있는 냄새를 풍기는 음식들이 잔뜩 있다.\n");
			printf("음식들을 보니 배고파졌다...\n"); 
			printf("먹을까?\n");
			printf("1. 먹는다 2. 먹지 않는다 ");
		}
		printf("0. 돌아간다.\n");
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
					printf("돼지처럼 식탁 위의 음식들을 전부 먹었다.\n");
					printf("정말 돼지같았다.\n");
					system("pause");
				}
				break;
			case 2:
				if (isEat) {
					printf("ERROR\n");
					system("pause");
				}
				else {
					printf("먹지않고 음식들을 자세히 살펴본다.\n");
					printf("양식, 중식, 한식, 일식 등등 다양한 종류의 음식들이 잔뜩 있다.\n");
					printf("더 배고파졌다.\n");
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

void kitchen() {//부엌 
	int menu;
	 
	while(1) {
		inkitchen = true;
		system("cls");
		printf("[대저택 1층]-[식당]-[부엌]\n\n");
		printf("부엌으로 들어왔다.\n");
		printf("조리기구와 식재료가 잔뜩 있다.\n"); 
		printf("어디를 찾아볼까?\n"); 
		printf("1. 선반 2. 냉장고 3. 조리기구 0.돌아간다.\n");
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

void shelf() {//선반 
	printf("각종 식재료가 보관된 선반이다.\n");
	Sleep(1500);
	printf("그 중에서도 눈에 띄는건...\n");
	Sleep(2500);
	printf("쌀포대 하나,\n");
	Sleep(1500);
	printf("오리훈제 세개,\n");
	Sleep(1500);
	printf("과일박스 두개다.\n");
	system("pause");
}

void friger() {//냉장고 
	printf("시원한 냉장고 안에 식재료가 들어있다.\n");
	Sleep(1500);
	printf("그 중에서도 눈에 띄는건...\n");
	Sleep(2500);
	printf("우유 하나,\n");
	Sleep(1500);
	printf("치즈 하나,\n");
	Sleep(1500);
	printf("버터 하나다.\n");
	system("pause");
}

void gas() {//가스레인지 
	int menu;
	
	while(1){
		system("cls");
		printf("여러 조리기구 중 가스레인지가 눈에 띈다.\n");
		printf("불을 킬까?\n");
		printf("1. Yes 2. No 0.돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("불이 들어오지 않는다.\n");
				printf("가스가 없는것 같다.\n");
				system("pause");
				break;
			case 2:
				printf("위험할 수 있으니 키지말자.\n");
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

void bookroom(){//서재 
	 int menu;
	 
	 while(1) {
	 	inbookroom = true;
	 	system("cls");
	 	printf("[대저택 1층]-[서재]\n\n");
	 	printf("책장이 가득한 서재다.\n");
	 	printf("방 가운데 책상이 있다.\n");
	 	printf("어디부터 볼까?\n");
	 	printf("1. 책장 2. 책상 0.돌아간다.\n");
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

void book(){//책장 
	int menu;
	
	while(1) {
		system("cls");
	 	printf("[대저택 1층]-[서재]-[책장]\n\n");
	 	printf("여러 종류의 책들이 잔뜩 있다.\n");
	 	printf("무슨 책을 볼까?\n");
		printf("1. 소설 2. 시집 3. 사전 0.돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("여주인공이 즐겨보던 소설에 악녀로 빙의해서 남주인공과 연애하는 로맨스 판타지 소설이다.\n");
				printf("흔한 내용이지만 시간 가는줄 모르고 집중해서 읽었다.\n");
				system("pause");
				break;
			case 2:
				poe();
				break;
			case 3:
				printf("어려운 내용의 사전이다.\n");
				printf("아마도 생물사전인것 같다...\n");
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

void poe() {//시집 
	printf("시집을 펼쳐봤다.\n\n");
	Sleep(2500);
	printf("내가 그다지 사랑하던 그대여\n");
	Sleep(1500);
	printf("내 한평생에 차마 그대를 잊을 수 없소이다\n");
	Sleep(1500);
	printf("내 차례에 못 올 사랑인 줄은 알면서도\n");
	Sleep(1500);
	printf("나 혼자는 꾸준히 생각하리다\n");
	Sleep(1500);
	printf("자, 그러면 내내 어여쁘소서\n\n");
	Sleep(2500);
	printf("이상의 시인것 같다.\n");
	Sleep(1500);
	printf("시집에서 쪽지가 나왔다.\n");
	Sleep(1500);
	printf("1 - 7 - 8 - 5 - ?\n");
	system("pause");
}

void desk(){//책상 
	int menu;
	
	while(1){
		system("cls");
	 	printf("[대저택 1층]-[서재]-[책상]\n\n");
	 	printf("책상 위에는 많은 서류들이 널부러져있다.\n");
	 	printf("책상에 딸린 3단 서랍이 있다.");
	 	printf("어디를 찾아볼까?\n");
		printf("1. 책상 위 2. 책상 서랍 0.돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu) {
			case 1:
				printf("전부 영어로 작성된 서류들이다.\n");
				printf("무슨 내용인지 하나도 모르겠다.\n");
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

void drawer() {//서랍 
	int menu;
	
	while(1) {
		system("cls");
	 	printf("3단으로 구성된 서랍이다.\n");
	 	printf("1. 맨 위 서랍 2. 중간 서랍 3. 맨 아래 서랍 0.돌아간다.\n");
	 	printf(">> ");
	 	scanf("%d",&menu);
	 	
		switch(menu) {
	 		case 1:
	 			printf("맨 위 서랍을 열어봤다.\n");
	 			printf("텅 비었다.\n");
	 			system("pause");
	 			break;
	 		case 2:
	 			if (isSmallKey) printf("텅 비었다.\n");
	 			else {
	 				isSmallKey = true;
	 				printf("중간 서랍을 열어봤다.\n");
	 				printf("작은 열쇠를 얻었다.\n");
	 				system("pause");
				}
	 			break;
	 		case 3:
	 			if (isBigKey) printf("텅 비었다.\n");
	 			else {
	 				isBigKey = true;
	 				printf("맨 아래 서랍을 열어봤다.\n");
	 				printf("큰 열쇠를 얻었다.\n");
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

void floor2() {//2층 
	int menu;
	
	while(1) {
		system("cls");
		printf("[대저택 2층]\n\n");
		printf("저택의 2층이다.\n");
		printf("어디로 갈까\n\n");
		if (inparents) printf("1. 부부방 ");
		else printf("1. 방 ");
		if (inkid) printf("2. 아이방 ");
		else printf("2. 방 ");
		if (indvd) printf("3. 시청각실 ");
		else printf("3. 방 ");
		if (inroom0) printf("4. 창고 ");
		else printf("4. 방 ");
		printf("0. 돌아간다.\n");
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

void parents() {//부부방 
	int menu;
	
	while(1) {
		inparents = true;
		system("cls");
		printf("[대저택 2층]-[부부방]\n\n");
		printf("저택 주인 부부의 방이다.\n");
		printf("책상 위에 일기장이 있다.\n");
		printf("일기장을 읽으려면 작은 열쇠가 필요하다.\n");
		printf("1. 일기장을 읽는다. 0. 돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if (isSmallKey) diaryP();
				else {
					printf("작은 열쇠가 없다.\n");
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

void diaryP() {//부부일기장 
	system("cls");
	printf("일기를 펼쳐봤다.\n\n");
	Sleep(2500);
	printf("X월 X일. 오늘 드디어 결혼했다. 부디 우리 앞날에 행복만 가득하길.\n"); 
	Sleep(2000);
	printf("X월 X일. 오늘은 결혼기념일이다. 기쁜날이지만 그와 별개로 아이가 생기지 않아 걱정이다.\n");
	Sleep(2000);
	printf("X월 X일. 결혼한지 3년, 아직도 아이가 생기지 않는다. 입양을 고민해봐야겠다.\n");
	Sleep(2000);
	printf("X월 X일. 결국 아이를 입양했다. 나이는 3살로 착하고 귀여운 아이다.\n");
	Sleep(2000);
	printf("X월 X일. 요즘 아이가 이상하다. 여기저기 돌아다니거나 생각지도 못한 곳에서 이상한 물건을 가지고 논다. 기분탓이겠지?\n");
	Sleep(2000);
	printf("X월 X일. 아이가 사라졌다. 집안 곳곳을 찾아봐도 보이지 않는다.\n");
	Sleep(2000);
	printf("X월 X일. 현관에 잠금장치가 생겼다. 비밀번호를 모르니 나갈수가 없다.\n");
	Sleep(3000);
	printf("살려... 줘...\n");
	Sleep(2500);
	printf("그 뒤로 모든 페이지가 찢어져있고 마지막 장에 피가 잔뜩 묻어있다.\n");
	system("pause");
}

void kid() {//아이방 
	int menu;
	
	while(1) {
		inkid = true;
		system("cls");
		printf("[대저택 2층]-[아이방]\n\n");
		printf("어린 아이의 방이다.\n");
		printf("아이가 좋아할법한 것들로 꾸며져있다.\n");
		printf("작은 수첩을 발견했다.\n");
		printf("아이의 일기인것 같다.\n");
		printf("일기를 읽을까?\n"); 
		printf("1. 일기장을 읽는다. 0. 돌아간다.\n");
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

void diaryK() {//아이일기 
	system("cls");
	printf("일기를 펼쳐봤다.\n\n");
	Sleep(2500);
	printf("거의 모든 페이지가 찢어져있다.\n");
	Sleep(1500);
	printf("유일하게 읽을 수 있는 부분을 발견했다.\n");
	Sleep(2500);
	printf("저는 우리집의 방들이 식당, 시청각실, 서재, 창고 순으로 좋아요.\n");
	Sleep(2500);
	printf("지금 제 일기를 읽고 있는 손님은\n");
	Sleep(2500);
	printf("우리집을 돌아다니면서 어디가 제일 좋았나요?\n");
	Sleep(2500);
	system("pause");
}

void dvd() {//시청각실 
	int menu;
	
	while(1) {
		indvd = true;
		system("cls");
		printf("[대저택 2층]-[시청각실]\n\n");
		printf("동영상 등을 볼 수 있는 시청각실이다.\n");
		printf("동영상을 재생할 수 있다.\n");
		printf("전자식 시계가 있다.\n");
		printf("1. 동영상을 본다. 2. 시계를 본다. 0. 돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("동영상을 재생하자 영화가 나온다.\n");
				printf("백수 가족이 부자 가족과 만나고 그 집 지하에서 사는 이야기다.\n");
				printf("아카데미 시상식에서 수상을 할 것 같은 영화다.\n");
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

void watch() {//시계 
	system("cls");
	printf("전자식 시계다.\n");
	Sleep(1500);
	printf("그러나 나타내는 숫자는 시간이 아닌것 같다.\n");
	Sleep(1500);
	printf("1\n");
	Sleep(1500);
	printf("3\n");
	Sleep(1500);
	printf("숫자 1과 3이 눈에 띈다.\n");
	Sleep(1500);
	system("pause");
}

void room0() {//창고 
	int menu;
	
	while(1) {
		if (inroom0) {
			system("cls");
			printf("[대저택 2층]-[창고문]\n\n");
			printf("창고 문 앞에 왔다.\n");
			printf("문에서 이상한 기운이 느껴진다.\n");
			printf("창고에 들어가려면 큰 열쇠가 필요하다.\n");
			printf("1. 창고 문을 연다. ");
		}
		else {
			system("cls");
			printf("[대저택 2층]-[문]\n\n");
			printf("문 앞에 왔다.\n");
			printf("문에서 이상한 기운이 느껴진다.\n");
			printf("문 안에 들어가려면 큰 열쇠가 필요하다.\n");
			printf("1. 문을 연다. ");
		}
		printf("0. 돌아간다.\n");
		printf(">> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				if (isBigKey) inroom();
				else {
					printf("큰 열쇠가 없다.\n");
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

void inroom() {//창고 안 
	inroom0 = true;
	system("cls");
	printf("[대저택 2층]-[창고]\n\n");
	printf("창고다.\n");
	Sleep(2500);
	printf("그러나,\n");
	Sleep(2500);
	printf("아무것도 없다.\n");
	Sleep(2500);
	printf("창고에 있을법한 물건들이나 가구.\n");
	Sleep(2500);
	printf("그 무엇도 없다.\n");
	Sleep(2500);
	printf("눈에 띄게 텅 비었다.\n");
	Sleep(2500);
	system("pause");
}


