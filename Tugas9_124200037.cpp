#include <iostream>
using namespace std;
int main ()

{

int jml;

cout<<"Masukan banyak angka : ";
cin>>jml;

int nilai[jml],selisih[jml],selisih_maks;

float maks,min,total=0,rata;

for (int i=0;i<jml;i++){
	cout<<"Angka ke-"<<i+1<<": ";cin>>nilai[i];
	total += nilai[i];
}
	cout<<endl;
	cout<<"====Hasil===="<<endl;
	cout<<"Deret        : ";
	for (int i=0;i<jml;i++){
	cout<<nilai[i]<<" ";
}
		cout<<endl;
		for(int i=0;i<jml;i++){
		if(nilai[i]>maks){
		maks=nilai[i];
	}
}
			cout<<"Maksimum     : "<<maks;
			cout<<endl;
			min=nilai[0];
			for(int i=0;i<jml;i++){
			if(nilai[i]<min){
			min=nilai[i];
	}
}

cout<<"Minimum      : "<<min;
cout<<endl;

rata=total/jml;

cout<<"Rata-Rata    : "<<rata;
cout<<endl;

for(int i=0;i<jml;i++){
	
		selisih[i]=nilai[i]-nilai[i+1];
		if(selisih[i]<0){
		selisih[i]=selisih[i]*-1;
		}else if(jml<=1){
		selisih[i]=0;
	}
	}

		selisih_maks=selisih[0];
		for(int i=0;i<jml-1;i++){
		if(selisih_maks<selisih[i]){
		selisih_maks=selisih[i];
	}
}

cout<<"Selisih Maks  : "<<selisih_maks;
return 0;


}








