N=100; # number of processes
M=200; # number of resources
Available=array(M)
Allocation=array(N,M)
Request   = array(N,M);
finish    = array(N)
work=clone(Available)

bool flag=true;
for i in range(0, N) :
  if Allocation[i] != 0 finish[i]=false; else finish[i]=true;
while(flag==true){
  flag=false;
  for(i=0;i<N;i++)
    if( (finish[i]== false) && (Request[i] <= work)){
          finish[i]=true;
          work += Allocation[i];
          flag=true;
        }
} int j=0;
int deadlocked_process[N];/*={-1,-1,...,-1 };*/
for(i=0;i<N; i++)
  if(finish[i] == false)   deadlocked_process[j++]=i;
if(j!=0)  cout<<"The system is in a deadlocked"<<endl;


