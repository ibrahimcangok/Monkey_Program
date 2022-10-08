#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
			
			//char ve int değişkenlerini atıyoruz
			char cins;
			int i;
            int kackez,topla=0;
            
            //maymunun erkekmi dişimi olduğunu if komutuyla yazdırıyoruz
            printf("Maymunun Cinsiyetini Giriniz : Erkek (E/e) Disi (D/d) :");
            scanf("%c",&cins);
            printf("Maymun Kafese Kac Kez Girdi : ");
            scanf("%d",&kackez);
            
            //ilk olarak dişiyi yazdırıyoruz
            if (cins == 'd' || cins == 'D')
            {
            	//for döngüsüyle i değişkenine 1 ile başlatıp yukarıda kaç kez girdiysek o kadar sayımızı ilerletiyoruz
                for (i = 1; i <= kackez; i++)
                {
                	/*burdaki amacımız eğerki maymun 5'e kadar giriş yaptıysa 5 dahil değil 
					girdiği sayı kadar üstüne koyarak toplatıyor */
                    if (i < 5)
                    {
                    	//topla değişkenine i sayısı kaça kadar arttıysa değerini o kadar yazdırıyoruz
                        topla += i;
                        printf("%d. Girisinde Toplamda %d Muz Yemis Oldu\n",i,topla);
                    }
                    else
                    {
                    	/*burda ise topla değişkenine 5 ve 5'ten fazla kafese girildiğinde ise formüle göre toplam yediği muzdan toplam kafese girme sayısını çıkartıp
                    	2'ye bölüp 1 ekliyoruz */
                        topla += ((topla - kackez) / 2) + 1;
                        printf("%d. Girisinde Toplamda %d Muz Yemis Oldu\n",i,topla);
                    }
                }
            }
            //İkincisinde erkeği if komutuyla seçtiriyoruz
            if (cins == 'e' || cins == 'E')
            {
            	/*Aynı şekilde burda da 1'den kaç kez yazdırdıysak o sayıya kadar döngüyü ilerletip duruma göre kaç defa kafese girdiyse formüle göre yazdırıyoruz 
            	ve burdaki farklılık ise dişinin yediği muz sayından 2 kat fazla yemesidir */
                for (i = 1; i <= kackez; i++)
                {
                    if (i < 5)
                    {
                        topla += i;
                        printf("%d. Girisinde Toplamda %d Muz Yemis Oldu\n",i,topla*2);
                    }
                    else
                    {
                        topla += ((topla - kackez) / 2) + 1;
                        printf("%d. Girisinde Toplamda %d Muz Yemis Oldu\n",i,topla*2);
                    }
                }
        }
	return 0;
}
