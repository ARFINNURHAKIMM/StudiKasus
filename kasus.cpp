#include <iostream>
using namespace std;

int main(){
	int jrk,jenis,nama,jml,pot;
	jrk=0;
	double disk = 0.35, disko = 0.15;
	double hrg,tot,tot1,totx,total_hrg,uang,kembali,biaya_ongkir;
	cout<<"1.Ayam Geprek  : 21000 "<<endl;
	cout<<"2.Ayam Goreng  : 17000 "<<endl;
	cout<<"3.Udang Goreng : 19000 "<<endl;
	cout<<"4.Cumi Goreng  : 20000 "<<endl;
	cout<<"5.Ayam bakar   : 25000 "<<endl;
	cout<<endl;
	cout<<"Masukkan Jenis makanan : ";
	cin>>jenis;
	if(jenis==1)
	{
		cout<<"Ayam Geprek Harga Rp.21000 "<<endl;
		cout<<"Masukkan Jumlah pesanan : ";
		cin>>jml;
		total_hrg=21000*jml;
		cout<<"Masukkan Jarak Rumah anda : ";
		cin>>jrk;
		if(jrk<3)
		{
			tot1=15000;
			cout<<tot1<<endl;
		}
		else if (jrk>=3)
		{
			cout<<"Biaya ongkir 25000 "<<endl;
		}
			if (total_hrg <= 25000)
		{
			cout<<"Mendapatkan Potongan ongkir sebanyak 3000 "<<endl;
			tot=25000;
			tot1=tot-5000;
			cout<<"Total biaya ongkir : "<<tot1<<endl;
		}
				else if (total_hrg >50000)
		{
			cout<<"Mendaptkan Potongan ongkir sebanyak 5000 dan diskon 15% "<<endl;
			tot = 25000;
			totx=tot-5000;
			cout<<"Total biaya ongkir : "<<totx<<endl;
			pot=total_hrg*disko;
			cout<<"Anda juga mendapatkan potongan : "<<pot<<endl;
		}
				else if (total_hrg >150000)
		{
			cout<<"Mendaptkan potongan ongkir sebanyak 8000 dan diskon 35% "<<endl;
			tot=150000-8000;
			cout<<"Total biaya ongkir "<<tot<<endl;
			pot=total_hrg*disk;
			cout<<"Anda juga mendapatkan potongan : "<<pot<<endl;
		}
		cout<<"============================================="<<endl;
		cout<<"Total Harga makanan : "<<total_hrg<<endl;
		cout<<"Total Biaya Ongkir  : "<<tot<<endl;
	}
	else if(jenis==2)
	{
		cout<<" "<<endl;
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>jml;
		total_hrg=17000*jml;
		cout<<"Masukkan Jarak rumah anda : ";
		cin>>jrk;
		if(jrk<=3)
		{
			cout<<"Biaya Ongkir 15000 "<<endl;
		}
		else if (jrk > 3)
		{
			cout<<"Biaya ongkir 25000 "<<endl;
		}
		if(total_hrg <= 25000)
		{
			cout<<"Total harga makanan : "<<total_hrg<<endl;
			cout<<"Mendapatkan Potongan Ongkir 3000 "<<endl;
			tot=25000-3000;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if (total_hrg <= 50000)
		{
			cout<<"Mendapatkan Potongan ongkir 5000 dan diskon 15% "<<endl;
			tot=25000-5000/15;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if(total_hrg>150000){
			cout<<"mendapatakan ongkir sebanyak 8000 dan diskon 35%"<<endl;
			tot=150000-5000/30;
		}
		cout<<"============================================="<<endl;
		cout<<"Total Harga makanan : "<<total_hrg<<endl;
		cout<<"Total Biaya Ongkir  : "<<tot<<endl;
	}
	else if(jenis==3)
	{
		cout<<"Udang goreng Harga Rp.19.000 "<<endl;
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>jml;
		total_hrg=19000*jml;
		cout<<"Masukkan Jarak rumah anda : ";
		cin>>jrk;
		if(jrk<=3)
		{
			cout<<"Biaya Ongkir 15000 "<<endl;
		}
		else if (jrk > 3)
		{
			cout<<"Biaya ongkir 25000 "<<endl;
		}
		if(total_hrg <= 25000)
		{
			cout<<"Total harga makanan : "<<total_hrg<<endl;
			cout<<"Mendapatkan Potongan Ongkir 3000 "<<endl;
			tot=25000-3000;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if (total_hrg <= 50000)
		{
			cout<<"Mendapatkan Potongan ongkir 5000 dan diskon 15% "<<endl;
			tot=25000-5000/15;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if(total_hrg>150000){
			cout<<"mendapatakan ongkir sebanyak 8000 dan diskon 35%"<<endl;
			tot=150000-5000/30;
		}
		cout<<"============================================="<<endl;
		cout<<"Total Harga makanan : "<<total_hrg<<endl;
		cout<<"Total Biaya Ongkir  : "<<tot<<endl;
	}
	else if(jenis==4)
	{
		cout<<"Cumi Goreng Harga Rp.20.000 "<<endl;
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>jml;
		total_hrg=20000*jml;
		cout<<"Masukkan Jarak rumah anda : ";
		cin>>jrk;
		if(jrk<=3)
		{
			cout<<"Biaya Ongkir 15000 "<<endl;
		}
		else if (jrk > 3)
		{
			cout<<"Biaya ongkir 25000 "<<endl;
		}
		if(total_hrg <= 25000)
		{
			cout<<"Total harga makanan : "<<total_hrg<<endl;
			cout<<"Mendapatkan Potongan Ongkir 3000 "<<endl;
			tot=25000-3000;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if (total_hrg <= 50000)
		{
			cout<<"Mendapatkan Potongan ongkir 5000 dan diskon 15% "<<endl;
			tot=25000-5000/15;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if(total_hrg>150000){
			cout<<"mendapatakan ongkir sebanyak 8000 dan diskon 35%"<<endl;
			tot=150000-5000/30;
		}
		cout<<"============================================="<<endl;
		cout<<"Total Harga makanan : "<<total_hrg<<endl;
		cout<<"Total Biaya Ongkir  : "<<tot<<endl;
	}
	else if(jenis==5)
	{
		cout<<" Ayam Bakar Harga Rp.25.000 "<<endl;
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>jml;
		total_hrg=25000*jml;
		cout<<"Masukkan Jarak rumah anda : ";
		cin>>jrk;
		if(jrk<=3)
		{
			cout<<"Biaya Ongkir 15000 "<<endl;
		}
		else if (jrk > 3)
		{
			cout<<"Biaya ongkir 25000 "<<endl;
		}
		if(total_hrg <= 25000)
		{
			cout<<"Total harga makanan : "<<total_hrg<<endl;
			cout<<"Mendapatkan Potongan Ongkir 3000 "<<endl;
			tot=25000-3000;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if (total_hrg <= 50000)
		{
			cout<<"Mendapatkan Potongan ongkir 5000 dan diskon 15% "<<endl;
			tot=25000-5000/15;
			cout<<"total biaya ongkir : "<<tot<<endl;
		}
		else if(total_hrg>150000){
			cout<<"mendapatakan ongkir sebanyak 8000 dan diskon 35%"<<endl;
			tot=150000-5000/30;
		}
		cout<<"============================================="<<endl;
		cout<<"Total Harga makanan : "<<total_hrg<<endl;
		cout<<"Total Biaya Ongkir  : "<<tot<<endl;
	}
}
