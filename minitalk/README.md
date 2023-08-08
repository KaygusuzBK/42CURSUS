# Minitalk Projesi

Bu depo, 42 Network'ün 42CURSUS eğitimi kapsamında tamamladığım `minitalk` projesini içermektedir. Bu proje, iki ayrı süreç arasında küçük mesajlar iletmek için bir istemci ve sunucu uygulaması oluşturmayı amaçlar.

## Proje Hakkında

`minitalk`, C programlama dili kullanılarak geliştirilen bir projedir. Bu projede, iki ayrı süreç arasında veri iletimini sağlayan bir iletişim mekanizması oluşturulur. İstemci tarafı, sunucuya mesajlar gönderir ve sunucu tarafı bu mesajları alır.

## Kullanım

1. Bu depoyu yerel bilgisayarınıza klonlayın:

```bash
git clone https://github.com/KaygusuzBK/42CURSUS.git
```

2. Proje klasörüne gidin:

```bash
cd 42CURSUS/minitalk
```

3. İstemci ve sunucuyu derlemek için:

```bash
make
```

4. Sunucuyu başlatmak için:

```bash
./server
```

5. İstemciyi kullanarak mesaj göndermek için:

```bash
./client [server_pid] [mesaj]
```

## Kullanım

1. Sunucu başlatın:

```bash
./server
```

2. İstemciyi kullanarak mesaj gönderin:

```bash
./client [server_pid] [mesaj]
```

`[server_pid]` yerine sunucunun PID'sini, `[mesaj]` ise göndermek istediğiniz mesajı yerleştirin.

## Katkıda Bulunma

Bu depo, kişisel eğitim amacıyla tamamlanmış bir projeyi içerdiği için katkı kabul edilmemektedir.

## Lisans

Bu proje, 42 Network eğitim programı kapsamında tamamlanmıştır.
```

Bu örnek README, `minitalk` projesini ve onun hakkında temel bilgileri açıklamak için kullanılabilecek bir şablondur. Bu şablona özelleştirmeler ekleyerek projenizin özgünlüğüne uygun şekilde özelleştirebilirsiniz.
