/*
1.50보다 작은 5의 배수를 출력하세요 


5\n 10\n 15\n 20\n 25\n 30\n 35\n 40\n 45\n


for(int i=1; i<10; i++){


}

for(int i=1; i <=10; i++){
printf(%d\n)




2.1단~9단까지 구구단을 출력하세요 
void main(){

for (int i=1; i<=9; i++){
	printf("%d 단======\n");
	for(int j=1; j<9; j++){
		printf(%d*%d=%d\n",i,j,i*j);
		}
	}
fgetc(stdin);
}




3.for loop를 이용해서 별을 만들어라

void main(){
for (int i=0; i<=5; i++){
	for(int j=0; j<=i; j++){
	printf("*");
	}
	printf("\n");
}
fgetc(stdin);

}


4.별을 반대로 만들어라
void main(){
for (int i=5; i>=0; i--){
	for(int j=i; j>0; j--){
	printf("*");
	}
	printf("\n");
}
fgetc(stdin);
}


5.별이 모아지는 
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
