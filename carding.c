#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void group1(void){
//98 Characters
//charset i print firts character
//static const char charset[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ12345678910!#$%&/()=?¡*+{}[]_:.-·̣^`~¨¬@|";
//except last
static const char charset[]="0123456789";
int strl=strlen(charset);
int fix=strl-1;
for (int i=0; i<=fix;i=i+1){
for (int e=0; e<=fix;e=e+1){
for(int z=0; z<=fix; z=z+1){
for (int m=0;m<=fix;m=m+1) {
for (int a=0; a<=fix;a=a+1){
for (int b=0; b<=fix;b=b+1){
for(int c=0; c<=fix; c=c+1){
for (int d=0;d<=fix;d=d+1) {
for (int r=0; r<=fix;r=r+1){
for (int l=0; l<=fix;l=l+1){
for(int k=0; k<=fix; k=k+1){
for (int w=0;w<=fix;w=w+1) {
for (int t=0; t<=fix;t=t+1){
for (int x=0; x<=fix;x=x+1){
for(int y=0; y<=fix; y=y+1){
for (int v=0;v<=fix;v=v+1) {

	char concat[500];
	printf("%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c\n",charset[i],charset[e],charset[z],charset[m],charset[a],charset[b],charset[c],charset[d],charset[r],charset[l],charset[k],charset[w],charset[t],charset[x],charset[y],charset[v]);
			      }
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}


			}


void group2(void){
static const char charset[]="0123456789";
int strl=strlen(charset);
int fix=strl-1;
for (int i=0; i<=fix; i=i+1){
for (int k=0; k<=fix; k=k+1){
for (int n=0; n<=fix; n=n+1){
for (int f=0; f<=fix; f=f+1){
printf ("%c%c%c%c ",charset[i],charset[k],charset[n],charset[f]);
                             }
			     }
			     }
			     }

		}

void group3(void){
static const char charset[]="0123456789";
int strl=strlen(charset);
int fix=strl-1;
for (int u=0;u<=fix;u=u+1){
for (int y=0;y<=fix;y=y+1){
for (int z=0;z<=fix;z=z+1){
for (int t=0;t<=fix;t=t+1){
printf("%c%c%c%c ",charset[u],charset[y],charset[z],charset[t]);
			}
			}
			}
			}
		  }

void group4(void){
static const char charset[]="0123456789";
int strl=strlen(charset);
int fix=strl-1;
for (int a=0;a<=fix;a=a+1){
for (int b=0;b<=fix;b=b+1){
for (int c=0;c<=fix;b=b+1){
for (int d=0;d<=fix;d=d+1){
    printf("%c%c%c%c\n",charset[a],charset[b],charset[c],charset[d]);
			}
			}
			}
			}
		  }

int main(void){
group1();
//group2();
//group3();
//group4();
		}

