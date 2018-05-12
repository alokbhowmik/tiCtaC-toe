#include<stdio.h>
#include<stdlib.h>
char data[9];
int i,counter=1,pos;
char name1[50],name2[50];
int winner()
{
	int condition=0;
	while(1){
	
		if(((data[0]=='X' && data[1]=='X' &&data[2]=='X')||(data[0]=='X' && data[3]=='X' && data[6]=='X') || (data[0]=='X' && data[4]=='X' && data[8]=='X') ||(data[2]=='X' && data[4]=='X' && data[6]=='X')||(data[6]=='X') &&data[7]=='X' && data[8]=='X')||(data[1]=='X' && data[4]=='X' && data[7]=='X')||(data[3]=='X' && data[4]=='X' &&data[5]=='X')||(data[2]=='X'&& data[5]=='X'&& data[8]=='X'))
		{
			printf("\n\n\n....................CONGRATULATION %s YOU WON THE GAME.........................",name1);
			exit(0);
		}
		else if(((data[0]=='O' && data[1]=='O' &&data[2]=='O')||(data[0]=='O' && data[3]=='O' && data[6]=='O') || (data[0]=='O' && data[4]=='O' && data[8]=='O') ||(data[2]=='O' && data[4]=='O' && data[6]=='O')||(data[6]=='O') &&data[7]=='O' && data[8]=='O')||(data[1]=='O'&& data[4]=='O'&& data[7]=='O')||(data[3]=='O' && data[4]=='O' && data[5]=='O')||(data[2]=='O' && data[5]=='O' && data[8]=='O'))
		{
			printf("\n\n\n....................CONGRATULATION %s YOU WON THE GAME.........................",name2);
			exit(0);
		}
		else
		{
			condition+=1;
			if(condition==9) 
			{
				printf("\n\n\n tie game......");
				exit(0);
			}else break;
		}
	}
}
main(){
	printf("Player 1 name :::::\t");
	gets(name1);
	system("cls");
	printf("player 2 name::::::\t");
	gets(name2);
	system("cls");
	printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
	printf("%s:::::::::X\n",name1);
	printf("%s:::::::::O\n",name2);
	for(i=0;i<9;i++)
	data[i]=' ';
	printf("\n\n");
	
	//printf(".....+%c.....+%c.....+%c.....",data[0],data[1],data[2]);
	printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
	//printf("...+...+...\n");
	//system("cls");
	while(counter<9){
			printf("%d...>",counter);
			
			printf("%s your move",name1);
		scanf("%d",&pos);
		if(pos-1>9 &&pos<=0)
		{
			printf("you can't enter at that position");
			printf("%d...>",counter);
			printf("ReEnter the position %s",name1);
			scanf("%d",&pos);
			
			data[pos-1]=' ';
			counter+=1;
			system("cls");
			printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
			printf("%s:::::::::X\n",name1);
			printf("%s:::::::::O\n",name2);
			data[pos-1]='X';
			printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
			printf("%d...>",counter);
		}
		
		else{
			
			if(data[pos-1]==' '){
				
				data[pos-1]='X';
				
				system("cls");
				printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
				printf("%s:::::::::X\n",name1);
				printf("%s:::::::::O\n",name2);
		printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
	counter=counter+1;
	winner();
			}else 
			{
				printf("there has already value exit....\n");
				data[pos-1]=' ';
			}
			
		}
		
		printf("%s Now Your Chance",name2);
		scanf("%d",&pos);
		if(pos>9 &&pos<0)
		{
			data[pos-1]=' ';
			printf("you can't enter at that position");
			printf("%d...>",counter);
			printf("%s Now Your Chance",name2);
			scanf("%d",&pos);
			data[pos-1]='O';
			system("cls");
			printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
			printf("%s:::::::::X\n",name1);
			printf("%s:::::::::O\n",name2);
			printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
	counter=counter+1;
			
		}
		
		else if(data[pos-1]==' '){
				data[pos-1]='O';
		
		
		//else{
			system("cls");
			printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
			printf("%s:::::::::X\n",name1);
			printf("%s:::::::::O\n",name2);
			printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
	counter=counter+1;
		//}
	winner();
		}
		else {
			printf(" already value exit.....\n");
		//	data[pos-1]=' ';
		printf("%d...>",counter);
			printf("%s Now Your Chance",name2);
			scanf("%d",&pos);
			data[pos-1]='O';
			system("cls");
			printf("\t\t\tTICK TAK GAME IS DONE BY ALOK (it is my first gaming program)\n\n\n");
			printf("%s:::::::::X\n",name1);
			printf("%s:::::::::O\n",name2);
			printf("\t\t\t\t  %c|  %c|  %c\n",data[0],data[1],data[2]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[3],data[4],data[5]);
	printf("\t\t\t\t...+...+...\n");
	printf("\t\t\t\t  %c|  %c|  %c\n",data[6],data[7],data[8]);
			counter+=1;
			
		}
	
		
	}
	//winner();
	
}
