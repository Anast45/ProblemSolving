def Alarm(k):
	    if k==0:
	        print("quiet")
	    else:
	        print("ALARM")
   
G,T,M=0,0,0
A=(input(""))

 
for i in range(len(A)):
 if A[i]=='G':
  G=1;
  if M==1 and T==0:
   Alarm(0)
   break
		
 elif A[i]=='T':
  T=1
  G=0
  if M==1:
   Alarm(1)
   break

 elif A[i]=='$':
  M=1;
  if T==1 and G==0 :
   Alarm(1)
   break
   
  elif T==1 and G==1:
   Alarm(0)
   break
		
