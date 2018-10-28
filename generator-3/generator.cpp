//QUINE RELAY GENERATOR
//This is not a C++ quine but the output is the C++ part of a C-C++-Python quine relay
#include <iostream>
using namespace std;

int a1[]={'i','n','t',' ','a','[',']','=','{'};
int a2[]={'}',';'};
int a5[]={'a','=','['};
int a6[]={']','\n'};
int a3[]={'\n',
'#','i','n','c','l','u','d','e',' ','<','i','o','s','t','r','e','a','m','>','\n',
'u','s','i','n','g',' ','n','a','m','e','s','p','a','c','e',' ','s','t','d',';',
'i','n','t',' ','m','a','i','n','(',')','{',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','1',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','a','1','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','2',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','a','2','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','3',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','1','0','5','0',';','i','+','+',')','{',
'c','o','u','t','<','<','a','3','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','4',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','1','0','4','2',';','i','+','+',')','{',
'c','o','u','t','<','<','a','4','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','5',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','a','5','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','6',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','a','6','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','3',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','5','[','i',']',';',
'i','f','(','i','=','=','0',')','c','o','u','t','<','<','7',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','1','3','8','2',';','i','+','+',')','{',
'c','o','u','t','<','<','a','7','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','6','[','i',']',';',
'}',

'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','1','3','8','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','7','[','i',']',';',
'}',
'}',34567,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
int a4[]={10,
'#','i','n','c','l','u','d','e',' ','<','s','t','d','i','o','.','h','>','\n',
'm','a','i','n','(',')','{','i','n','t',' ','i',';',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','1','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','1','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','2','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','2','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','3','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','1','0','5','0',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','3','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','4','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','1','0','4','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','4','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','5','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','3',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','5','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','6','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','6','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','7','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','1','3','8','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','7','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','1','0','5','0',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','3','[','i',']',')',';',
'}',
'}',34567,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
int a7[]={10,
't','e','m','p','=','[',']','\n',


'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','1','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','1','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','2','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','2','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','3','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','1','0','5','0',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','3','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','4','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','1','0','4','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','4','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','5','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','3',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','5','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','6','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','6','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','9',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','1','[','i',']',')',')','\n',
'\t',			'i','f',' ','i','=','=','4',':','\n',
'\t','\t',						't','e','m','p','.','a','p','p','e','n','d','(','"','7','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','1','3','8','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','s','t','r','(','a','7','[','i',']',')',')','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','"',',','"',')','\n',
'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','2','[','i',']',')',')','\n',

'f','o','r',' ','i',' ','i','n',' ','r','a','n','g','e','(','0',',','1','0','4','2',')',':','\n',
'\t',			't','e','m','p','.','a','p','p','e','n','d','(','c','h','r','(','a','4','[','i',']',')',')','\n',

'p','r','i','n','t','(','"','"','.','j','o','i','n','(','t','e','m','p',')',')',

34567,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
int main(){
	int N3=0,N4=0,N7=0;
	while(a3[N3]!=34567)N3++;
	while(a4[N4]!=34567)N4++;
	while(a7[N7]!=34567)N7++;

	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<1;
	}
	for(int i=0;i<9;i++){
		cout<<a1[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<2;
	}
	for(int i=0;i<2;i++){
		cout<<a2[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<3;
	}
	for(int i=0;i<N3;i++){
		cout<<a3[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<4;
	}
	for(int i=0;i<N4;i++){
		cout<<a4[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<5;
	}
	for(int i=0;i<3;i++){
		cout<<a5[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<6;
	}
	for(int i=0;i<2;i++){
		cout<<a6[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<7;
	}
	for(int i=0;i<N7;i++){
		cout<<a7[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	
	for(int i=0;i<N3;i++){
		cout<<(char)a3[i];
	}
}
