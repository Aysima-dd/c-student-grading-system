#include<stdio.h>



struct ders {
		int vize;
		int final;
		double gecmenotu;
	};
struct sahis_bilgileri {
		char ad[40];
		char soyad[40];
		int No;
		struct ders dersler[2];
	};


int main(){
    
    struct sahis_bilgileri ogrenci[2];
    double ort;

    for(int i=0;i<=1;i++){
        printf("%d. ogrencinin adi:",i+1);
        scanf("%s",ogrenci[i].ad);

        printf("%d. ogrencinin soyadi:",i+1);
        scanf("%s",ogrenci[i].soyad);

        printf("%d. ogrencinin numarasi:",i+1);
        scanf("%d",&ogrenci[i].No);

        for(int j=0;j<=1;j++){
            printf("%d. dersin vizesi:",j+1);
            scanf("%d",&ogrenci[i].dersler[j].vize);

            printf("%d. dersin finali:",j+1);
            scanf("%d",&ogrenci[i].dersler[j].final);

            ort=(ogrenci[i].dersler[j].vize)*0.4+(ogrenci[i].dersler[j].final)*0.6;
            ogrenci[i].dersler[j].gecmenotu=ort;
            printf("%d. dersin gecme notu:%.2lf\n",j+1,ort);

        }
        

    }

    printf("\n================ YAZDIRILIYOR ================\n");

    for(int i=0;i<=1;i++){
        printf("\t%d. ogrencinin adi=%s\n",i+1,ogrenci[i].ad);
        printf("\t%d. ogrencinin soyadi=%s\n",i+1,ogrenci[i].soyad);
        printf("\t%d. ogrencinin numarasi=%d\n",i+1,ogrenci[i].No);
        for(int j=0;j<=1;j++){
            printf("\t%d. dersin vizesi=%d\n",j+1,ogrenci[i].dersler[j].vize);
            printf("\t%d. dersin finali:%d\n",j+1,ogrenci[i].dersler[j].final);
            printf("\t%d. dersin gecme notu:%.2lf\n",j+1,ogrenci[i].dersler[j].gecmenotu);
        }
    }

    return 0;
}
