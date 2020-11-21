#include <stdlib.h>
#include <stdio.h>
int main() {
	int j = 0;
	char shuzu[125];
	FILE* b;
	b = fopen("a.txt", "r+");
	fgets(shuzu, 125, b);
	for (int i = 0; i <125;i++ ) {
		if (shuzu[i] == '<') {
			for (j=i;j<125; j++) {
				if (shuzu[j] == '>') {
					for (j++; j < 125; i++, j++) {
						shuzu[i] = shuzu[j];
						if (shuzu[i] == '<') {
	
							break;
						}
					}
				}
			}
		}
	}
	fprintf(b, "%s", shuzu);
	fclose(b);
	return 0;
}
