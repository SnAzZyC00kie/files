#include <iostream>
//#include <vector>
#include <fstream>

using namespace std;

int main()
{
	int j=0;
	int x=0;
	int k=255;
	int num_of_integers=3;
	int sum=0;
	int average=0;
	int r=100;
	
	ifstream myfile{"data/file1",ios::binary}; //opening binary file for reading in "binary" mode
	 
	if (myfile) // if file has opened successfully
	{
		for(int i=0;i<num_of_integers;i++)
		   {
				  myfile.read(reinterpret_cast<char*>(&x) , sizeof(int));
				  sum+=x;  //store the value in a vector
		   }
		   average=sum/3;
		 
		 if(average <75)
		   {
			  ofstream myfile3{"data/file3"}; //opening file for writing
			    if(myfile3) //determine if file has opened successfully
				   for(int z=0;z<num_of_integers;z++)
					  {
					     myfile3 <<j <<""; //write 0 to file3
					   }
		        else
		           cout <<"Error opening file3.txt"<<endl;
		           
		        myfile3.close(); //close file3
		  }
		 else
		 if(average >150)
		   {
			   ofstream myfile3{"data/file3"}; //opening file for writing
			    if(myfile3) //determine if file has opened successfully
				   for(int z=0;z<num_of_integers;z++)
					  {
					     myfile3 <<k<<""; //write 255 to file3
					   }
			   else
		           cout <<"Error opening file3.txt"<<endl;
		           
		        myfile3.close(); //close file3
		  }
		 else
		 {
			 ofstream myfile3{"data/file3"}; //opening file for writing
			    if(myfile3) //determine if file has opened successfully
				   for(int z=0;z<num_of_integers;z++)
					  {
					     myfile3 <<r<<""; //write 100 to file3
					   }
			   else
		           cout <<"Error opening file3.txt"<<endl;
		           
		        myfile3.close(); //close file3
	    }
	  }
	 else
	 cout <<"Error opening file1.bin" <<endl;
	 
	 
	 myfile.close();
}

