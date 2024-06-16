#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 다항식의 항을 표현하는 노드 구조체
typedef struct Node {
	int coef; // 계수(coefficient)
	int exp;  // 지수(exponent)
	struct Node* next; // 다음 항을 가리키는 포인터
} Node;

// 다항식을 표현하는 리스트 구조체
typedef struct {
	Node* H; // 다항식의 헤더 노드 포인터
} List;

// 리스트 초기화 함수
void init(List* L) {
	L->H = (Node*)malloc(sizeof(Node)); // 헤더 노드 메모리 할당
	L->H->next = NULL; // 헤더 노드의 next를 NULL로 초기화
}

// 리스트에 항 추가 함수
void appendTerm(List* L, int c, int e) {
	Node* node = (Node*)malloc(sizeof(Node)); // 새 노드 생성
	node->coef = c; // 계수 설정
	node->exp = e;  // 지수 설정
	node->next = NULL; // 다음 노드를 NULL로 설정

	Node* p = L->H; // 헤더에서 시작
	while (p->next != NULL) // 리스트의 끝까지 이동
		p = p->next;
	p->next = node; // 새 노드를 리스트의 마지막에 연결
}

// 두 다항식을 더하는 함수
List* addPoly(List* x, List* y) {
	List* result = (List*)malloc(sizeof(List)); // 결과 다항식 리스트
	init(result); // 결과 리스트 초기화

	Node* p = x->H->next; // x의 첫 번째 실제 항
	Node* q = y->H->next; // y의 첫 번째 실제 항

	while (p && q) {
		if (p->exp > q->exp) { // x의 항 지수가 더 클 경우
			appendTerm(result, p->coef, p->exp);
			p = p->next;
		}
		else if (p->exp < q->exp) { // y의 항 지수가 더 클 경우
			appendTerm(result, q->coef, q->exp);
			q = q->next;
		}
		else { // 지수가 같을 경우
			int sum = p->coef + q->coef; // 계수를 더함
			if (sum != 0) // 계수 합이 0이 아닐 경우만 추가
				appendTerm(result, sum, p->exp);
			p = p->next;
			q = q->next;
		}
	}
	while (p) { // x에 남은 항들 추가
		appendTerm(result, p->coef, p->exp);
		p = p->next;
	}
	while (q) { // y에 남은 항들 추가
		appendTerm(result, q->coef, q->exp);
		q = q->next;
	}

	return (result);
}

// 리스트 출력 함수
void print(List* L) {
	for (Node* p = L->H->next; p; p = p->next) {
		printf(" %d %d", p->coef, p->exp);
	}
	printf("\n");
}

int main() {
	List* x = (List*)malloc(sizeof(List));
	List* y = (List*)malloc(sizeof(List));
	init(x);
	init(y);

	int n, c, e;
	scanf("%d", &n); // x 다항식의 항 개수 입력
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c, &e); // 계수와 지수 입력
		appendTerm(x, c, e); // x에 항 추가
	}

	scanf("%d", &n); // y 다항식의 항 개수 입력
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c, &e); // 계수와 지수 입력
		appendTerm(y, c, e); // y에 항 추가
	}

	List* result = addPoly(x, y); // 다항식 덧셈
	print(result); // 결과 출력

	return (0);
}
