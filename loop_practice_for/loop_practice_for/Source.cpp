/*
1.50���� ���� 5�� ����� ����ϼ��� 


5\n 10\n 15\n 20\n 25\n 30\n 35\n 40\n 45\n


for(int i=1; i<10; i++){


}

for(int i=1; i <=10; i++){
printf(%d\n)




2.1��~9�ܱ��� �������� ����ϼ��� 
void main(){

for (int i=1; i<=9; i++){
	printf("%d ��======\n");
	for(int j=1; j<9; j++){
		printf(%d*%d=%d\n",i,j,i*j);
		}
	}
fgetc(stdin);
}




3.for loop�� �̿��ؼ� ���� ������

void main(){
for (int i=0; i<=5; i++){
	for(int j=0; j<=i; j++){
	printf("*");
	}
	printf("\n");
}
fgetc(stdin);

}


4.���� �ݴ�� ������
void main(){
for (int i=5; i>=0; i--){
	for(int j=i; j>0; j--){
	printf("*");
	}
	printf("\n");
}
fgetc(stdin);
}


5.���� ������� 
void main(){
for (int i=5; i>=0; i--){
	for(int j=i; j>0; j--){
	printf("*");
	}
	printf("\n");
}

for (int i=0; i<=5; i++){
	for(int j=0; j<=i; j++){
	printf("*");
	}
	printf("\n");
}
fgetc(stdin);
}



*/

#include<iostream>

using namespace std;
void main() {
	for (int i = 0; i < 50; i += 5) {
		printf("%d\n", i);
	}
	fgetc(stdin);
}
