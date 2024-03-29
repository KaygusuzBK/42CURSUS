<H1 align = "center" >42CURSUS </H1>
<p align="center" href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl6nezdek00060hml21ixm9m8/stats?cursusId=21&coalitionId=233"" alt="bkaygusu's 42 stats" > </p>

 
# 42CURSUS Projeleri

Bu repo, 42 Network'e ait olan 42CURSUS müfredatında yer alan projeleri içermektedir. 42CURSUS, çeşitli programlama dilleri, araçlar ve teknolojiler üzerine yoğunlaşan bir eğitim programıdır. Her projenin belirli bir süresi vardır ve öğrencilerin programlama becerilerini geliştirmelerini amaçlamaktadır.                     
                                                                  

## ft_printf

Bu proje için kullanım talimatları, proje klasöründe yer alan README dosyasında bulunmaktadır. README dosyasını açarak, ft_printf işlevinin nasıl kullanılacağına dair adımları takip edebilirsiniz. Talimatlar, işlevin nasıl derleneceği, nasıl kullanılacağı ve çeşitli formatlama seçeneklerini nasıl kullanabileceğiniz hakkında bilgi içerecektir.

## Libft

Libft projesini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. Proje klasöründe bulunan `Makefile` dosyasını kullanarak bir kütüphane oluşturun:
```
make
```

2. Kütüphane başarıyla derlendikten sonra, oluşturulan `libft.a` dosyasını projenize dahil edin. Örneğin, aynı dizindeki `.c` dosyanıza aşağıdaki gibi ekleyebilirsiniz:
```c
#include "libft.h"
```

3. Kütüphane işlevlerini kullanarak projenizi geliştirebilirsiniz. İlgili işlevlere ve parametrelerine dair bilgileri Libft'in README dosyasında bulabilirsiniz.

## get_next_line

get_next_line işlevini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. Proje klasöründe bulunan `get_next_line` işlevini bir C dosyasına dahil edin:
```c
#include "get_next_line.h"
```

2. İlgili dosyayı okumak için get_next_line işlevini kullanabilirsiniz. İşlev, her çağrıldığında bir satır okur ve verilen dosyanın sonuna ulaştığında 0 döner.

3. İlgili dosyanın tamamını okumak veya birden fazla dosya üzerinde okuma yapmak için get_next_line'i kullanmaya devam edebilirsiniz. Örnek kullanımı get_next_line'in README dosyasında bulabilirsiniz.

## so_long

so_long oyununu oynamak için aşağıdaki adımları izleyebilirsiniz:

1. Proje klasöründe bulunan `Makefile` dosyasını kullanarak oyunu derleyin:
```
make
```

2. Oyunu çalıştırın:
```
./so_long <harita_dosyası>
```
Burada `<harita_dosyası>`, oyunun oynanacağı harita dosyasının yolunu ve adını temsil etmektedir.

3. Oyunun talimatlarını ve kurallarını takip ederek oyunu oynayın. Oyun ekranında belirli hareketler yaparak hedefe ulaşmaya çalışın.

## push_swap

push_swap projelerini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. Proje klasöründe bulunan `Makefile` dosyasını kullanarak programları derley

in:
```
make
```

2. Orijinal sayı dizisini sıralamak için push_swap programını çalıştırın:
```
./push_swap <sayı_dizisi>
```
Burada `<sayı_dizisi>`, sıralanması gereken sayıların listesini temsil etmektedir. Sayılar boşlukla ayrılmış şekilde girilmelidir.

3. push_swap programı, sıralama adımlarını ve işlem sırasını STDOUT'a yazdıracaktır.

## minitalk

minitalk projesini kullanmak için aşağıdaki adımları izleyebilirsiniz:

1. İlk olarak, sunucuyu başlatın:
```
./server
```

2. Ardından, istemciyi başlatın ve sunucu IP adresini ve port numarasını belirterek sunucuya bağlanın:
```
./client <sunucu_IP_adresi> <port_numarası> <mesaj>
```
Burada `<sunucu_IP_adresi>` ve `<port_numarası>`, sunucunun IP adresini ve port numarasını temsil etmektedir. `<mesaj>`, sunucuya gönderilmek istenen mesajı temsil etmektedir.

3. İstemci, sunucuya mesajı gönderecek ve sunucu bu mesajı alarak ekrana yazdıracaktır.

Her projenin kendi README dosyasında daha ayrıntılı kullanım talimatları olabilir. Bu nedenle, ilgili projenin README dosyasına başvurmanızı öneririm.
