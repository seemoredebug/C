#include"iostream"

using namespace std;

int main(void) {
	int zi[26]={0};
	char ch;
	while (cin>>ch)
	{
		switch (ch)
	{
	    case 'A':
		zi[0]++;
		break;
		case 'B':
		zi[1]++;
		break;
		case 'C':
		zi[2]++;
		break;
		case 'D':
		zi[3]++;
		break;
		case 'E':
		zi[4]++;
		break;
		case 'F':
		zi[5]++;
		break;
		case 'G':
		zi[6]++;
		break;
		case 'H':
		zi[7]++;
		break;
		case 'I':
		zi[8]++;
		break;
		case 'J':
		zi[9]++;
		break;
		case 'K':
		zi[10]++;
		break;
		case 'L':
		zi[11]++;
		break;
		case 'M':
		zi[12]++;
		break;
		case 'N':
		zi[13]++;
		break;
		case 'O':
		zi[14]++;
		break;
		case 'P':
		zi[15]++;
		break;
		case 'Q':
		zi[16]++;
		break;
		case 'R':
		zi[17]++;
		break;
		case 'S':
		zi[18]++;
		break;
		case 'T':
		zi[19]++;
		break;
		case 'U':
		zi[20]++;
		break;
		case 'V':
		zi[21]++;
		break;
		case 'W':
		zi[22]++;
		break;
		case 'X':
		zi[23]++;
		break;
		case 'Y':
		zi[24]++;
		break;
		case 'Z':
		zi[25]++;
		break;
	default:
		break;
	}	
	}
	int ma=0;
	for (int i = 0; i < 26; i++)
	ma=max(ma,zi[i]);
	for(int i=ma;i>0;i--){
	for(int j=0;j<26;j++){
	if(i<=zi[j])
	cout<<"*";
	else
	cout<<" ";
	if(j<25)
	cout<<" ";
	}
	cout<<endl;
	}
	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
	return 0;
}