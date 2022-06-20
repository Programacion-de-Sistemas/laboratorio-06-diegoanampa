#include "chess.h"
#include "figures.h"

/*
 * This is the function that you must implement for get a picture on the screen
 * You should call the interpreter funtion inside it and give it the picture like
 * a string array, this string arraya, should finish with 0 on the last position.
 */
void display();

/*
 * return a new picture, the vertical mirror from the original picture
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** flipV(char** fig){
	char *p;
	p = fig;
	for(int i=0;i<sizeof(size;i++){ 
		while(*p != '\0'){
			fig[i] = strev(p);  //invierte la cadena con este metodo
			p++;
			liberarMemoria(p);
		}
	}
	return y;
}

/*
 * return a new picture, the horizontal mirror from the original the picture
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** flipH(char** fig){
	char* tmp;
	for(int i=0;i<t/2;i++){
		tmp=fig[i];
		fig[i]=fig[t-i-1];
		fig[t-i-1]=tmp;
		liberarMemoria(tmp);
	}
	return fig;
}

/*
 * return a new picture, the original picture rotated anti-clockwise
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** rotateL(char** fig){ 
	char tmp = fig[0]; 
	for(int i=0; i<(sizeof(fig)-1);i++)
		fig[i] = fig[i+1]; 
	return fig;
}

/*
 * return a new picture, the original picture rotated clockwise
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** rotateR(char** fig){ 
	int size = sizeof(fig);
	int n = size;
	char tmp = fig[size-1];
	for(int j=0; j<n;i++){ 
		for ((int i=size-2);i>=0;i--) 
		fig[i+1] = fig[i];
		fig[0]=tmp;
		liberarMemoria(tmp);
	}
	return fig;
}

/*
 * return a new picture, the original picture with reverse colors
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** reverse(char** fig){ 
	char *p; 
	p=fig;
	int size = sizeof(fig); 
	for(int i=0;j<size;i++){ 
		while(*p != '\0'){ 
			if(*p =='_' || *p =='.'){  
				*p='@';
			}else if (*p =='='){
				*p='#';
			}else if (*p =='@'){
				*p='_';
				*p='.';
			}else if (*p =='#'){
				*p='=';
			}
			p++;
		}
	}   
	return y;
}

/*
 * return a new picture, the first picture over the second picture
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** superImpose(char** fig, char** fig2){ 
	char** tmp = (char**) malloc(sizeof(char*) * (h + 1));
	char** va1 = tmp;
	char* l1 = *res;
	char* l2 = *fig;
	char* l3 = *fig2;

	while(*fig){
		*tmp = (char*) malloc(sizeof(char) * (w + 1));
		l1 = *tmp;
		l2 = *fig;
		l3 = *fig2;
		while(*lineO){
			if(*l2 == ' ')
				*l1 = *l3;
			else
				*l1 = *l2;
			l1++;
			l2++;
			l3++;
		}
		*lineR = 0;
		tmp++;
		fig++;
		fig2++;
		liberarMemoria(fig);
	}
	*res = 0;
	return var1;
}

/*
 * return a new picture, the first one on the side the second, the new picture will have
 * a wide equeals to the sum from the both wides
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** join(char** fig, char** fig2){  
	int sizeY=sizeof(fig); 
	int sizeX=sizeof(fig2);  
	int str=0;

	for(int i=0;i<sizeY;i++)
		int str =+ strlen(fig[i]); 
	int sizeZ = str+sizeY*strlen(fig2); 
	char** figFinal=malloc((sizeZ+1)*sizeof(char));
	figFinal[sizeZ] = '\0'; 

	int tmp = 0;
	for(int i=0;i<sizeY;i++){
		if(i != 0){
			strcpy(figFinal+tmp,fig2);
			tmp+=strlen(fig2);
		}
		strcpy(figFinal+tmp,fig[i]);  
		tmp += strlen(fig[i]);
		liberarMemoria(tmp);
	}
	return figFinal; 
}

/*
 * return a new picture, the first one up to the second, the new picture will have 
 * the sum of hides from the both pictures.
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** up(char** fig, char** fig2){  
	char** figFinal;
	for(int i=0;i<size;i++)
		figFinal[i] = fig[i];
	for(int j=0;j<size;j++)
		figFinal[j++]=fig2[j];
	for(int k=0;k<size+size;k++)
		return figFinal[k];
}

/*
 * return a new picture, the original picture repeated a number of times 
 * on the side of each other
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** repeatH(char** fig, int fig2){ 
	for(int i=0;i<=fig2;i++){
		char** figFinal=join(char** fig,char** fig);
		return figFinal;
		liberarMemoria(figFinal);
	}
}

/*
 * return a new picture, the original picture repeated a number of times 
 * down of each other
 * The user must liberate the memory space reserved for the string array (the picture) 
 */
char** repeatV(char** fig, int fig2){
	for(int i=0;i<=fig2;i++){
		return fig;    
	}
}

/*
 * netodo para liberar la memoria
 */
void liberarMemoria(char** fig){
	char** tmp = fig;
	while(*fig){
		free(*fig);
		fig++;
	}
	free(tmp);
}