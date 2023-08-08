# Push Swap Projesi

Bu proje, 42 Network'ün 42CURSUS eğitimi kapsamında tamamlanan `push_swap` projesini içermektedir. Bu proje, sayı dizilerini sıralamak için farklı sıralama algoritmalarını kullanmayı amaçlamaktadır.

## Proje Hakkında

`push_swap`, iki yığını (`stack`) kullanarak bir dizi sayıyı sıralamayı amaçlayan bir algoritma problemidir. Proje, sıralama işlemini yaparken sadece sınırlı sayıda operasyon kullanarak en az adımda sonuca ulaşmayı hedefler.

## Kullanım

1. Bu depoyu yerel bilgisayarınıza klonlayın:

```bash
git clone https://github.com/KaygusuzBK/push_swap.git
```

2. Proje klasörüne gidin:

```bash
cd push_swap
```

3. Gerekli bağımlılıkları yükleyin (örneğin, `libft`):

```bash
make libft
```

4. Test için rasgele sayılarla programı çalıştırın:

```bash
./push_swap $(seq 1 100 | shuf | tr '\n' ' ')
```

5. Sıralı adımları görmek için:

```bash
./push_swap $(seq 1 100 | tr '\n' ' ') | ./checker $(seq 1 100 | tr '\n' ' ')
```

## Katkıda Bulunma

Bu depo, kişisel eğitim amacıyla tamamlanmış bir projeyi içerdiği için katkı kabul edilmemektedir.

## Lisans

Bu proje, 42 Network eğitim programı kapsamında tamamlanmıştır.
```

Bu örnek, `push_swap` projesini ve onun hakkında temel bilgileri açıklamak için kullanılabilecek bir README örneğidir. Özel gereksinimlerinize göre bu örneği düzenleyebilir ve projenizin özgünlüğüne uygun şekilde özelleştirebilirsiniz.
