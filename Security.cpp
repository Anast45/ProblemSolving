#include<iostream>
#include<string>

void Alarm(bool k){
	if(k==false){std::cout<<"quiet";}//0==false
	else{std::cout<<"ALARM";}//1==true
}   

int main() 
{
	std::string A;
    int G=0,T=0,M=0;
	std::cout << "input a string :";
	std::cin >> A;
 
	for (int i = 0; i <= A.size(); i++) {
		if (A[i]=='G')
		{
            G=1;
            if((M==1)&&(T==0)){Alarm(0);break;}
		}
		else if(A[i]=='T'){
            T=1;G=0;
            if(M==1){Alarm(1);break;}
		}
		else if(A[i]=='$'){
		    M=1;
		    if((T==1)&&(G==0)){Alarm(1);break;}
		    else if((T==1)&&(G==1)){Alarm(0);break;}
		}
	}
}
