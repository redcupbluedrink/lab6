#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* 1
const int N = 20;
int random (int N) { return rand()%N; }
int main() { 

	int i, A[N], a = -10, b = 10;
  	for ( i = 0; i < N; i ++ ) 
    	 A[i] = random(b-a+1) + a;
    	 
  	printf("Polozhitelnie\n");      
  	for ( i = 0; i < N; i ++ ){
		  if (A[i]>0) {
			printf("%3d",A[i]);	
	  	}
	}
	
    printf("\nOtritsatelnie\n");
  	for ( i = 0; i < N; i ++ ){
  		if (A[i]<0) {
  			printf("%3d",A[i]);
	  	}
	}
}

*/

/* 2
int main()
{  
    int n, A[n], f1, f2, f3, i , s;
    printf(" vvedite n > 0: ");
    scanf("%d",&n);
    
    f1 = 1;
    for(i = 1, s = 1;	i <= n;	i++, s++){  // n!
        f1*=i; 
    }
    
    f2 = 1;
    for(i = 1, s = 1;	i <= n;	i++, s++){ // i!
        f2*= i;   
		   
        f3=1;
        for(    ;    i <= n;    i++){  // (n-i)!
            if    (i == n){
                i = n - 1;
                f3 = f3*(n  - i);
                i = n;
            }
            else{
                f3 = f3*(n  - i);
            }
        }
        i=s;   
        
        A[i] = f1/(f2*f3);  //n!/(i!(n-i)!)
        printf("C%d=%d\n",i,A[i]);
    }
} 
*/

/* 3
const int N = 20;
int random (int N) { return rand()%N; }
int main() {
	
  int i, A[N], a = 0, b = 10;
  printf("ves' massiv = ");
  
  for ( i = 0; i < N; i++ )
     A[i] = random(b-a+1) + a;
     
  for ( i = 0; i < N; i ++ )
     printf("%3d",A[i]);
     
	printf("\nelementi, kotorie bol'she sosedei' = ");  
  	for ( i = 0; i < N; i ++ ) {
  	if ((A[i]>A[i+1]) & (A[i]>A[i-1])) {
  		printf("%3d",A[i]);	
	  }
	}
}
*/

/* 4
const int N = 16;
int main() {
	
	int i, A[N], ch=0, nch=0, s;
	printf( "nomer bankovskoi karti: ");
	for ( i = 0; i < N; i ++ )
	scanf ("%d", &A[i]);
	
	for ( i = 0; i < N; i ++ ) {
		if (i%2==0) {
			if (A[i]<5) {
				nch+=A[i]*2;
				}
			else {
				nch+=A[i]*2-9;
			}
		}
		else {
			ch+=A[i];	
		}
	}
	s=ch+nch;
	
	printf("\nsumma=%d\nch=%d,nch=%d", s, ch, nch);
	if (s%10==0) {
		printf("\nnomer pravilnii\n");
		}
	else {
		printf("\nnomer nepravilnii\n");
	}
}
*/
