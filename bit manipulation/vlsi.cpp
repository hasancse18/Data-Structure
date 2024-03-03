#include<bits/stdc++.h>
using namespace std;
int main(){

    fstream my_file;
	my_file.open("my_file.txt", ios::out);
	if (!my_file) {
		my_file << "File not created!";
	}else{

	    for(float Vgs=2; Vgs<=5; Vgs++){
        my_file<< "For Vgs="<<Vgs<< ":"<<endl;
    float y=  Vgs-1;  // y=Vgs - Vt
    for(float Vds=0;Vds<=5;Vds+=0.5){
        my_file<< "Y="<<y<< " ";
            if(Vds<y){

                my_file<< "Registive:"<<30*((y*Vds)-((Vds*Vds)/2))<<" "<<Vds<<endl;
            }
            else if(Vds==y){
                my_file<< "pinch:"<<15*y*y<<" "<<Vds<<endl;
            }
            else{
                my_file<< "Sat:"<<15*y*y<<" "<<Vds<<endl;
            }

    }
    my_file<<endl;
}

my_file.close();

	}


}
