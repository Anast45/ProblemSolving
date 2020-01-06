#include<iostream>
#include<string>

void Alarm(bool k){
	if(k==false){std::cout<<"quiet";}//0==false
	else{std::cout<<"ALARM";}//1==true
}   

int main() 
{
	//Declaration of variables
	std::string A;
    	int G=0,T=0,M=0;
	
	//input A(string)
	std::cout << "input a string :";
	std::cin >> A;
	
	//from i=0 until i<=size of A
	for (int i = 0; i <= A.size(); i++) {
		if (A[i]=='G')
		{
            		G=1;
			//if condition:means that $ has already been spotted and G is protecting the money
			//exp:xxx$Gx...T
            		if((M==1)&&(T==0)){Alarm(0);break;}
		}
		else if(A[i]=='T'){
            		T=1;G=0;
			//if condition:means that $ has already been spotted and G isnt protecting the money
			//exp:xxG$Tx...G
            		if(M==1){Alarm(1);break;}
		}
		else if(A[i]=='$'){
		    	M=1;
			//if condition:means that $ has already been spotted and G isnt protecting the money
			//exp:xxxT$x...G
		    	if((T==1)&&(G==0)){Alarm(1);break;}
			//else if condition:means that $ has already been spotted and G is protecting the money
			//exp:xxxTG$xxx
		    	else if((T==1)&&(G==1)){Alarm(0);break;}
		}
	}
}
