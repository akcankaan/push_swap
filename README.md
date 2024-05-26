# Push_swap
Push_swap projesi, verilen integer dizisini iki stack kullanarak en kısa sürede sıralayan bir C programı yazmayı hedefleyen bir algoritma projesidir. Bu proje, sıralama algoritmalarını öğrenmek ve bu algoritmaların karmaşıklıklarını anlamak için harika bir fırsattır.

## İçindekiler
Kurulum
Kullanım
Aksiyonlar
Hedefler
Genel Talimatlar
Zorunlu Bölüm
Sıralama Algoritmaları
Proje Dosyaları
Hata Yönetimi
Kurulum
Projeyi klonlayarak başlayın:

## Kurulum
Projeyi klonlayarak başlayın:

 ```bash
git clone git@github.com:akcankaan/push_swap.git
cd push_swap
```
Makefile kullanarak projeyi derleyin:
 ```bash
make
```

## Kullanım
Programı çalıştırmak için push_swap ve sıralamak istediğiniz integer dizisini argüman olarak verin:
```bash
./push_swap 3 2 5 1 4
```

## Aksiyonlar
Program aşağıdaki aksiyonları kullanarak iki stack üzerinde çalışır:

- sa (swap a): a stackinin en üstteki iki elemanını yer değiştirir.
- sb (swap b): b stackinin en üstteki iki elemanını yer değiştirir.
- ss: sa ve sb aksiyonlarını aynı anda gerçekleştirir.
- pa (push a): b stackinin en üstteki elemanını a stackinin en üstüne koyar.
- pb (push b): a stackinin en üstteki elemanını b stackinin en üstüne koyar.
- ra (rotate a): a stackinin tüm elemanlarını bir yukarı kaydırır.
- rb (rotate b): b stackinin tüm elemanlarını bir yukarı kaydırır.
- rr: ra ve rb aksiyonlarını aynı anda gerçekleştirir.
- rra (reverse rotate a): a stackinin tüm elemanlarını bir aşağı kaydırır.
- rrb (reverse rotate b): b stackinin tüm elemanlarını bir aşağı kaydırır.
- rrr: rra ve rrb aksiyonlarını aynı anda gerçekleştirir.

## Hedefler
- Verilen integer dizisini iki stack kullanarak en kısa sürede sıralamak.
- Sıralama algoritmalarının karmaşıklığını anlamak ve optimize etmek.
- C programlama dilinde etkili ve verimli kod yazmak.

## Genel Talimatlar
- Proje C dilinde yazılmalıdır.
- Kodunuz norm kurallarına uygun olmalıdır.
- Global değişkenler kullanmak yasaktır.
- Heap üzerinde ayrılmış hafıza gerektiğinde serbest bırakılmalıdır.
- Makefile, proje kaynak dosyalarını -Wall -Wextra -Werror bayrakları ile derlemelidir.
- Makefile en azından $(NAME), all, clean, fclean, re kurallarını içermelidir.
- Projeye bonus özellikleri dahil etmek için Makefile dosyasına bonus kuralını eklemelisiniz.
  
## Zorunlu Bölüm
### Kurallar
- İki stack kullanılır: a ve b.
- Başlangıçta a stacki rastgele sayıda, birbirinin aynısı olmayan negatif ve/veya pozitif sayıdan oluşur, b stacki boştur.
- Amaç, a stackindeki sayıları artan şekilde sıralamaktır.
### Proje Dosyaları
- Makefile: Projenizi derler.
- push_swap.c: Ana program dosyası.
- stack_operations.c: Stack işlemlerini tanımlar.
- utils.c: Yardımcı fonksiyonları içerir.
- push_swap.h: Fonksiyon prototiplerini ve veri yapısı tanımlarını içerir.
- 
## Sıralama Algoritmaları
Bu projede, verilen integer dizisini sıralamak için Radix Sort ve Selection Sort algoritmalarını kullandık.

### Radix Sort
Radix Sort, integer dizisini sıralamak için kullanılan verimli bir algoritmadır. Bu algoritma, özellikle büyük veri setlerinde hızlı ve etkili sonuçlar verir. Radix Sort algoritması, sayıları basamaklarına göre sıralayarak çalışır ve her basamak için bir geçiş yapar. Bu algoritma, stabil ve lineer zaman karmaşıklığına sahiptir.

### Selection Sort
Selection Sort, verilen bir diziyi sıralamak için kullanılan basit bir sıralama algoritmasıdır. Bu algoritma, sıralanmamış kısmın en küçük elemanını seçer ve sıralanmış kısmın sonuna ekler. Selection Sort, anlaşılması kolay bir algoritma olmasına rağmen, büyük veri setlerinde diğer sıralama algoritmalarına göre daha yavaş olabilir. Zaman karmaşıklığı O(n^2) olup, küçük veri setleri için uygun bir seçenektir.

## Hata Yönetimi
Program hiçbir argüman almazsa çıktı vermeden çıkar.
Hatalı argümanlar verilirse, standard error’a "Error\n" yazılmalıdır.
