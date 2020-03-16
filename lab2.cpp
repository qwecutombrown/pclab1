#include <iostream> 
#include<mpi.h>
using namespace std;
int main(int argc, char ** argv)
{
int mynode, totalnodes;
MPI_Init(&argc,&argv);
MPI_Comm_size(MPI_COMM_WORLD, &totalnodes);
MPI_Comm_rank(MPI_COMM_WORLD, &mynode); 
if((mynode)%2==0)
{
cout<<"I am even for process"<<mynode<<endl;
}
else
{
cout<<"I am odd for process"<<mynode<<endl;
}
MPI_Finalize();
}
