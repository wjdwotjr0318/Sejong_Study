#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  이중연결 리스트의 노드 구조체를 정의합니다.
typedef struct Node {
	char elem;          // 노드가 저장할 문자 데이터
	struct Node* next;  // 다음 노드를 가리키는 포인터
	struct Node* prev;  // 이전 노드를 가리키는 포인터
} Node;

// 이중연결 리스트 구조체를 정의합니다.
typedef struct list {
	Node* header;   // 리스트의 헤더 노드
	Node* trailer;  // 리스트의 트레일러 노드
	int size;       // 리스트의 요소 개수
} List;

// 새로운 이중연결 리스트를 생성하고 초기화하는 함수
List* init() {
	List* list;
	list = (List*)malloc(sizeof(List));
	list->header = (Node*)malloc(sizeof(Node));
	list->trailer = (Node*)malloc(sizeof(Node));
	list->header->prev = NULL;          // 헤더의 이전 노드는 없음
	list->header->next = list->trailer; // 헤더의 다음 노드는 트레일러
	list->trailer->prev = list->header; // 트레일러의 이전 노드는 헤더
	list->trailer->next = NULL;         // 트레일러의 다음 노드는 없음
	list->size = 0;                     // 리스트 크기는 0으로 초기화

	return list;
}

void add(List* list, int r, char e);
void delete(List* list, int r);
char get(List* list, int r);
void print(List* list);

void main() {
	int N;
	char command, ch;
	int r;

	List* list = init(); // 리스트 초기화

	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		scanf("%c", &command);
		getchar();
		if (command == 'A') {
			scanf("%d %c", &r, &ch);
			if (list->size + 1 < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				add(list, r, ch);
				getchar();
			}
		}
		else if (command == 'D') {
			scanf("%d", &r);
			if (list->size < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				delete(list, r);
				getchar();
			}
		}
		else if (command == 'G') {
			scanf("%d", &r);
			if (list->size < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				ch = get(list, r);
				printf("%c\n", ch);
				getchar();
			}
		}
		else if (command == 'P') {
			print(list);
		}
	}
	free(list->header);
	free(list->trailer);
	free(list);
}

// 지정된 위치에 새로운 요소를 추가하는 함수
void add(List* list, int r, char e) {
	Node* p, * new = (Node*)malloc(sizeof(Node));
	p = list->header;
	for (int i = 1; i < r; i++) {
		p = p->next; // 삽입할 위치의 바로 전 노드로 이동
	}
	new->elem = e;          // 새 노드에 데이터 저장
	new->next = p->next;    // 새 노드의 다음 노드 연결
	new->prev = p;          // 새 노드의 이전 노드 연결
	p->next->prev = new;    // 삽입 위치 다음 노드의 이전 노드 연결 수정
	p->next = new;          // 삽입 위치의 다음 노드로 새 노드 연결
	list->size++;           // 리스트 크기 증가
}

// 지정된 위치의 요소를 삭제하는 함수
void delete(List* list, int r) {
	Node* p;
	p = list->header->next;
	for (int i = 1; i < r; i++) {
		p = p->next; // 삭제할 노드로 이동
	}
	p->prev->next = p->next; // 삭제할 노드의 이전 노드와 다음 노드 연결
	p->next->prev = p->prev; // 삭제할 노드의 다음 노드와 이전 노드 연결
	free(p);                 // 노드 메모리 해제
	list->size--;            // 리스트 크기 감소
}

// 지정된 위치의 요소를 반환하는 함수
char get(List* list, int r) {
	Node* p;
	p = list->header->next;
	for (int i = 1; i < r; i++) {
		p = p->next; // 요소의 위치로 이동
	}
	return p->elem; // 요소 반환
}

// 리스트의 모든 요소를 출력하는 함수
void print(List* list) {
	Node* p;
	p = list->header->next;
	while (p != list->trailer) {
		printf("%c", p->elem); // 요소 출력
		p = p->next;           // 다음 요소로 이동
	}
}
