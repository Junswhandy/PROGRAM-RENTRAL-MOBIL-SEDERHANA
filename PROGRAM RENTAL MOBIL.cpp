#include <iostream>
using namespace std;
string kode,nama,tipekendaraan;
	int lama,sewa,total,diskon,lamasewa,sewaperhari;
	char ulang;

	void Menentukan();

	int main(){
		do{
		  cout << "           RENTAL MOBIL JUNSWHANDY           "<< endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "KODE        Jenis Mobil                  Harga Sewa/Hari           " << endl;
    cout << " AD        AVANZA DELUXE                  	Rp. 250.000               " << endl;
    cout << " AV        AVANZA VELOX                  	Rp. 275.000               " << endl;
    cout << " XS        XENIA SPORTY                  	Rp. 260.000               " << endl;
    cout << " RZ        TOYOTA RUSH                		Rp. 300.000               " << endl;
    cout << " TR        TERIOS                 		Rp. 285.000               " << endl;
    cout << " IV        INNOVA                  	    	Rp. 350.000               " << endl;
     cout << "FR         FORTUNER                	   	Rp. 450.000               " << endl;
    cout << "----------------------------------------------------------------" << endl;
		cout<<"Masukkan Nama Penyewa : ";
		cin>>nama;
		cout<<"Masukkan kode tipe : ";
		cin>>kode;
		Menentukan();
		cout<<"Masukkan lama sewa : ";
		cin>>lama;
		
	lamasewa=sewaperhari*lama;
	if(lama>=10 && sewa<=20){
		diskon=lamasewa*0.05;
	}else if(lama>20){
		diskon=lamasewa*0.1;
	}	
	system("cls");

		cout<<"Nama Penyewa 		: "<<nama<<endl;
		cout<<"Kode Tipe 		: "<<kode<<endl;
		cout<<"Nama Kendaraan		:"<<tipekendaraan<<endl;
		cout<<"lama Sewa 		: "<<lama<<endl;
		cout<<"Sewa/Hari 		: Rp. "<<sewaperhari<<endl;
		cout<<"Diskon 			: Rp. "<<diskon<<endl;
		cout<<"Total Bayar 		: Rp. "<<lamasewa-diskon<<endl;
		cout<<"Masih Ada Data (Y/T)	: ";
		cin>>ulang;		
	}while(ulang=='Y' && ulang=='y');
}
	void Menentukan(){
	if(kode=="AD"){
			 tipekendaraan="AVANZA DELUXE";
		 sewaperhari=250000;
}	
	else if(kode=="AV"){
					 tipekendaraan="AVANZA VELOX";
		 sewaperhari=275000;
}
	else if(kode=="XS"){
				 tipekendaraan="XENIA SPORTY";
		 sewaperhari=260000;	
}
	else if(kode=="RZ"){
					 tipekendaraan="TOYOTA RUSH";
		 sewaperhari=300000;
}
	else if(kode=="TR"){
				 tipekendaraan="TERRIOS";
		 sewaperhari=285000;	
}
	else if(kode=="IV"){
					 tipekendaraan="INNOVA";
		 sewaperhari=350000;
}
	else if(kode=="FR"){
					 tipekendaraan="FORTUNER";
		 sewaperhari=450000;
}

	}
