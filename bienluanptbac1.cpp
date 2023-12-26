#include <stdio.h>

int main()
{
    float a,b;
        scanf("%f %f",&a,&b);
        if(a==0){
        	if(b==0){
        		printf("Infinite solutions"); 
			} 
			else{
				printf("No solution"); 
			} 
		}
		else{
			printf("%.2f",-b/a); 
		} 
    return 0;
}
