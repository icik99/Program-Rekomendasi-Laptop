#include <iostream>

using namespace std;

void tampilanDefault()
{
    cout<<"         INPUT YANG ANDA MASUKAN SALAH !"<<endl;

}

void menu_utama()
{
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         SELAMAT DATANG DI PROGRAM REKOMENDASI LAPTOP!" << endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         SILAHKAN PILIH JENIS LAPTOP YANG INGIN ANDA BELI: " << endl;
    cout<<"         1. LAPTOP GAMING" << endl;
    cout<<"         2. LAPTOP EDITING" << endl;
    cout<<"         3. LAPTOP CASUAL (untuk mahasiswa)" << endl;
    cout<<"         MASUKAN PILIHAN ANDA: ";
}

void rangebudget()
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         PILIH RANGE BUDGET YANG ANDA MILIKI !"<<endl;
    cout<<"         1. DIBAWAH 10 JUTA"<<endl;
    cout<<"         2. 15 - 10 JUTA"<<endl;
    cout<<"         3. DIATAS 15 JUTA"<<endl;
    cout<<"         4. KEMBALI KE MENU SEBELUMNYA"<<endl;
    cout<<"         MASUKAN PILIHAN ANDA: ";
}

void lihat_merk1(string aray[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         BERIKUT ADALAH LIST LAPTOP GAMING BUDGET DIBAWAH 10 JUTA: "<<endl;
    cout<<"         1. "<< aray[0] << endl;
    cout<<"         2. "<< aray[1] << endl;
    cout<<"         3. "<< aray[2] << endl;
    cout<<"         4. KEMBALI KE MENU SEBELUMNYA"<<endl;
    cout<<"         PILIH LAPTOP YANG ANDA INGINKAN UNTUK MELIHAT SPESIFIKASI LENGKAPNYA [1-4]"<<endl;
    cout<<"         MASUKAN PILIHAN ANDA: ";

}

void lihat_merk2(string aray[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         BERIKUT ADALAH LIST LAPTOP GAMING BUDGET 10-15 JUTA: "<<endl;
    cout<<"         1. "<< aray[0] << endl;
    cout<<"         2. "<< aray[1] << endl;
    cout<<"         3. "<< aray[2] << endl;
    cout<<"         4. KEMBALI KE MENU SEBELUMNYA"<<endl;
    cout<<"         PILIH LAPTOP YANG ANDA INGINKAN UNTUK MELIHAT SPESIFIKASI LENGKAPNYA [1-4]"<<endl;
    cout<<"         MASUKAN PILIHAN ANDA: ";

}

void lihat_merk3(string aray[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"         BERIKUT ADALAH LIST LAPTOP GAMING BUDGET DIATAS 15 JUTA: "<<endl;
    cout<<"         1. "<< aray[0] << endl;
    cout<<"         2. "<< aray[1] << endl;
    cout<<"         3. "<< aray[2] << endl;
    cout<<"         4. KEMBALI KE MENU SEBELUMNYA"<<endl;
    cout<<"         PILIH LAPTOP YANG ANDA INGINKAN UNTUK MELIHAT SPESIFIKASI LENGKAPNYA [1-4]"<<endl;
    cout<<"         MASUKAN PILIHAN ANDA: ";

}

void lihatSpek_1 (string merk[], string processor [], string storage[], string ram[], string layar[], string gpu[], string harga[], string link[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl<<endl;
    cout<<"         "<<merk [1]<<endl;
    cout<<"         SPESIFIKASI      ";
    cout<<endl<<endl;
    cout<<"         Processor       : " << processor [0]<<endl;
    cout<<"         Storage         : "<< storage[0]<<endl;
    cout<<"         RAM             : " << ram[0]<<endl;
    cout<<"         Resolusi Layar  : " << layar[0] << endl;
    cout<<"         GPU             : " << gpu[0] << endl;
    cout<<endl;
    cout<<endl;
    cout<<"         Harga           : Rp. " << harga[0]<<endl;
    cout<<"         Link Spesifikasi Lengkap: "<< link[0]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
}

void lihatSpek_2 (string merk[], string processor [], string storage[], string ram[], string layar[], string gpu[], string harga[], string link[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl<<endl;
    cout<<"         "<<merk [1]<<endl;
    cout<<"         SPESIFIKASI      "<<endl;
    cout<<"         Processor       : " << processor [1]<<endl;
    cout<<"         Storage         : "<< storage[1]<<endl;
    cout<<"         RAM             : " << ram[1]<<endl;
    cout<<"         Resolusi Layar  : " << layar[1] << endl;
    cout<<"         GPU             : " << gpu[1] << endl;
    cout<<endl;
    cout<<endl;
    cout<<"         Harga           : Rp. " << harga[1]<<endl;
    cout<<"         Link Spesifikasi Lengkap: "<< link[1]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
}

void lihatSpek_3 (string merk[], string processor [], string storage[], string ram[], string layar[], string gpu[], string harga[], string link[])
{
    cout<<endl<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<endl;
    cout<<endl<<endl;
    cout<<"         "<<merk [1]<<endl;
    cout<<"         SPESIFIKASI      "<<endl;
    cout<<"         Processor       : " << processor [2]<<endl;
    cout<<"         Storage         : "<< storage[2]<<endl;
    cout<<"         RAM             : " << ram[2]<<endl;
    cout<<"         Resolusi Layar  : " << layar[2] << endl;
    cout<<"         GPU             : " << gpu[2] << endl;
    cout<<endl;
    cout<<endl;
    cout<<"         Harga           : Rp. " << harga[2]<<endl;
    cout<<"         Link Spesifikasi Lengkap: "<< link[2]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
}

int main()
{
   //VARIABEL
    string merklaptopgaming_1 [3] {"HP PAVILION GAMING 15 EC0001AX","Lenovo IdeaPad L340 Gaming 15", "ASUS TUF FX505DD-R5597T"}; //BUDGET DIBAWAH 10 JUTA
    string merklaptopgaming_2 [3] {"ASUS TUF Gaming A15 FX506", "ACER PREDATOR NITRO 5 AN515-54-714C", "HP Pavilion Gaming 15-dk0042TX"};//BUDGET 10-15 JUTA
    string merklaptopgaming_3 [3] {"Predator Triton 500 (PT515-52)","MSI GS65 STEALTH 9SE-424ID","ASUS ROG G703GX"};//BUDGET DIATAS 15 JUTA

    string processorgaming_1 [3] {"AMD Ryzen 5 3550H","Intel Core i7-9750H","AMD Ryzen 5-3550H"};
    string processorgaming_2 [3] {"Processor (6C/12T, 11MB Cache, 4.0 GHz Max Boost)","9th Intel Core i7 - 9750H (12M Cache up to 4.50 GHz) + HM370","Intel® Core™ i7-9750H (2.6 GHz base frequency, up to 4.5 GHz base with Intel® Turbo Boost Technology, 12 MB cache, 6 cores)"};
    string processorgaming_3 [3] {"Intel® Core™ i7-10875H Processor (16M Cache, up to 5.10 GHz)","i7-9750H Processor up to 4.50 GHz","Intel® Core™ i9-8950HK"};

    string ramgaming_1 [3] {"8GB","8GB","8GB"};
    string ramgaming_2 [3] {"8GB","8GB","8GB"};
    string ramgaming_3 [3] {"32 GB","32GB","64 GB"};

    string layargaming_1 [3] {"15.6 inch 1920 X 1080","15.6 inch 1920 X 1080","15.6 inch 1920 X 1080"};
    string layargaming_2 [3] {"15.6 inch 1920 X 1080 144Hz","15.6 inch 1920 X 1080 144Hz","15.6 inch 1920 X 1080 144Hz"};
    string layargaming_3 [3] {"15.6 IPS FHD (1920x1080) ComfyView LED Display with nVidia G-SYNC & 300Hz Refresh Rate","15.6 FHD (1920*1080), 240Hz Thin Bezel","17.3 inch Res 1920 x 1080"};

    string gpugaming_1 [3] {"AMD Radeon Vega 8 Graphics NVIDIA GeForce GTX 1050","AMD Radeon Vega 10","NVIDIA GeForce GTX 1050"};
    string gpugaming_2 [3] {"GTX 1650ti 4GB DDR5 VRAM","GTX 1660Ti 6GB GDDR6","GTX 1650"};
    string gpugaming_3 [3] {"GeForce RTX 2080 8 GB","NVidia GeForce® RTX 2080, 8GB GDDR6","NVIDIA GeForce RTX 2080 8GB GDDR6"};

    string storagegaming_1 [3] {"SSD 512 GB","HDD 1TB, SSD, HDD+SSD/eMMC","HDD 1TB 5400 RPM"};
    string storagegaming_2 [3] {"SSD nvme 512 GB","HDD 1TB","1TB+256 SSD"};
    string storagegaming_3 [3] {"1TB SSD NVME","SSD 1TB NVme","3 X PCIE NVME 512GB"};

    string hargalaptopgaming_1 [3] {"8.950.000","7.535.006","7.500.000"};
    string hargalaptopgaming_2 [3] {"14.299.000","14.499.000","14.899.000"};
    string hargalaptopgaming_3 [3] {"59.999.000","47.290.000","57.499.000"};

    string linkgaming_1 [3] {"https://bit.ly/3oWf3eo","https://bit.ly/3qw8vmX","https://bit.ly/2LIebLU"};
    string linkgaming_2 [3] {"https://bit.ly/3bIwrzD","https://bit.ly/2KncRxB","https://bit.ly/39GjDHc"};
    string linkgaming_3 [3] {"https://bit.ly/39Gq7Wy","https://bit.ly/3qFeOVJ","https://bit.ly/38OklTG"};


    //LAPTOP EDITING

    string merklaptopedit_1 [3] {"ASUS X550IU","HP 15-Bw071ax","Dell Inspiron 3567"};//diabawah 10 jt
    string merklaptopedit_2 [3] {"MSI GF75 Thin 9RCX","HP Pavilion Gaming 15","Asus Vivobook F571GT"};//10-15
    string merklaptopedit_3 [3] {"Asus ZenBook Pro Duo i7","Apple Macbook Pro 2020","Acer ConceptD 7"};//diatas 15

    string processoredit_1 [3] {"AMD APU FX-9830 up to 3,7 GHz","Intel Core i3","intel Core i7 7500U"};
    string processoredit_2 [3] {"Intel Core i7 9750H","AMD Ryzen 7 3750H","Intel Core i7 9750H"};
    string processoredit_3 [3] {"i7-9750H, 2.6GHz hexa-core with Turbo Boost (up to 4.5GHz)","Intel Core i5 gen 8 quad-core 1,4 GHz, Turbo Boost hingga 3,9 GHz,","Intel® Core™ i7-9750H"};

    string ramedit_1 [3] {"8GB DDR4, 16 GB","8GB DDR4","8GB"};
    string ramedit_2 [3] {"8GB","8GB","8GB"};
    string ramedit_3 [3] {"32 GB 2666MHz DDR4","8GB 2133MHz LPDDR3","2 x 8 GB DDR4"};

    string layaredit_1 [3] {"15.6 inci 1920 x 1080","15.6 inci 1920 x 1080","15.6 inci 1366 x 768"};
    string layaredit_2 [3] {"layar 17.3Inch FullHD 1080p","15.6 inci 1920 x 1080","15.6 inci 1920 x 1080"};
    string layaredit_3 [3] {"15.6” OLED 4K (3840 x 2160) 16:9 touchscreen","13,3 inci (diagonal) dengan lampu latar LED dan IPS, res 2560 x 1600","15,6 inch IPS 4K UHD"};

    string gpuedit_1 [3] {"AMD Radeon RX 460","AMD Radeon R7 512 shader core","AMD Radeon R5 M430"};
    string gpuedit_2 [3] {"GTX 1650 4GB","GTX 1050Ti 4GB","GTX 1650 4GB"};
    string gpuedit_3 [3] {"NVIDIA® GeForce RTX™ 2060","Intel Iris Plus Graphics 645","GeForce RTX™ 2080 with Max-Q Design and 8GB of dedicated GDDR6 VRAM"};

    string storageedit_1 [3] {"HDD 1TB 5400rpm","HDD 1TB 5400 rpm SATA","HDD 1TB"};
    string storageedit_2 [3] {"SSD M.2 NVMe 256GB","SSD M.2 NVMe 256GB 256GB SSD M.2 NVMe + HDD 1TB","SSD 512GB M.2 NVMe + 32GB Intel Optane"};
    string storageedit_3 [3] {"1 TB PCIe® x4 SSD","512GB SSD storage"," 2 x 256 GB RAID"};

    string hargalaptopedit_1 [3] {"7.200.000","7.499.000","9.800.000"};
    string hargalaptopedit_2 [3] {"13.000.000","12.999.000","14.999.000"};
    string hargalaptopedit_3 [3] {"45.999.000","23.730.000","40.000.000"};

    string linkedit_1 [3] {"https://bit.ly/3bMZJgf","https://bit.ly/3qrqURZ","https://bit.ly/39Dr5TF"};
    string linkedit_2 [3] {"https://bit.ly/2Kl777m","https://bit.ly/2KpnGiE","https://bit.ly/3suxZmB"};
    string linkedit_3 [3] {"https://bit.ly/3nQKzcy","https://bit.ly/3oSFzW6","https://bit.ly/3qxibOl"};


    //LAPTOP CASUAL

    string merklaptopcasual_1 [3] {"HP 14S CF1051TU","ASUS X454YA","Acer Chromebook 514"};
    string merklaptopcasual_2 [3] {"Asus Zenbook UM431","ASUS VivoBook 14 K413FQ","Apple Macbook 12"};
    string merklaptopcasual_3 [3] {"Asus Zenbook UX534FTC","Apple MacBook Air M1 Chip 2020","Macbook Pro 2019 MUHQ2"};

    string processorcasual_1 [3] {"Intel Celeron 4205U","AMD Quad Core A8-7410","Intel Celeron N3450 "};
    string processorcasual_2 [3] {"AMD Ryzen 5 3500U","Intel® Core™ i7-10510U","Intel Core m3 dual-core 1,2 GHz "};
    string processorcasual_3 [3] {"Intel® Core™ i7-10510U Processor","Apple M1 chip with 8‑core CPU, 7‑core GPU, and 16‑core Neural Engine","1.4GHz quad-core 8th-gen Intel Core i5 processor"};

    string ramcasual_1 [3] {"4GB DDR4","4GB DDR4","4GB DDR4"};
    string ramcasual_2 [3] {"8GB","8GB","8GB"};
    string ramcasual_3 [3] {"16GB 2400MHZ DDR4","8GB unified memory","8GB 2133MHz LPDDR3"};

    string layarcasual_1 [3] {"14 inci 1366 x 768","14 inci 1366 x 768","14 inci 1920 x 1080"};
    string layarcasual_2 [3] {"14 inci	FullHD 1080p","14 inci	1920 x 1080","12 inci 2304 x 1440"};
    string layarcasual_3 [3] {"15.6 FHD","13,3 inci dengan panel Retina Display beresolusi 2.560 x 1.600 piksel","Layar Retina Display 13.3inch"};

    string gpucasual_1 [3] {"Intel HD Graphics 610","Radeon R5 Graphic","Intel HD Graphics 500"};
    string gpucasual_2 [3] {"GPU Radeon Vega 8","nvidia MX350","Intel HD Graphics 615"};
    string gpucasual_3 [3] {"NVIDIA® GTX1650 with Max-Q 4GB GDDR5 VRAM","include in Apple M1 chip","Intel Iris Plus Graphics 645"};

    string storagecasual_1 [3] {"SSD 512GB","HDD 500GB","64GB eMMC"};
    string storagecasual_2 [3] {"512GB SSD M.2 NVMe","512GB SSDPCIe","512GBSSD"};
    string storagecasual_3 [3] {"1TB SSD","512GB SSD","128GB SSD"};

    string hargalaptopcasual_1 [3] {"4.199.000","4.099.000","6.300.000"};
    string hargalaptopcasual_2 [3] {"11.499.000","12.368.000","13.500.000"};
    string hargalaptopcasual_3 [3] {"21.299.000","16.880.000","17.970.000"};

    string linkcasual_1 [3] {"https://bit.ly/3qlKb7k","https://bit.ly/3qt4AaA","https://bit.ly/3qynjln"};
    string linkcasual_2 [3] {"https://bit.ly/2LS4bj3","https://bit.ly/3sxffmB","https://bit.ly/39TIoQz"};
    string linkcasual_3 [3] {"https://bit.ly/35NstSk","https://bit.ly/39By7bv","https://bit.ly/2LwwyUk"};


    int a;
    mainMenu: // Label
    menu_utama();
    cin>>a;

    switch(a)
    {
    case 1:
        menu_gaming:
            int menuGaming;
            rangebudget();
            cin>>menuGaming;
            switch(menuGaming)
            {
            case 1:
                int merkgaming_1;
                lihat_merk1 (merklaptopgaming_1);
                cin>>merkgaming_1;
                switch(merkgaming_1)
                {
                case 1:
                    lihatSpek_1(merklaptopgaming_1, processorgaming_1, storagegaming_1, ramgaming_1, layargaming_1, gpugaming_1, hargalaptopgaming_1, linkgaming_1);
                    break;
                case 2:
                    lihatSpek_2(merklaptopgaming_1, processorgaming_1, storagegaming_1, ramgaming_1, layargaming_1, gpugaming_1, hargalaptopgaming_1, linkgaming_1);
                    break;
                case 3:
                    lihatSpek_3(merklaptopgaming_1, processorgaming_1, storagegaming_1, ramgaming_1, layargaming_1, gpugaming_1, hargalaptopgaming_1, linkgaming_1);
                    break;
                case 4:
                    goto menu_gaming;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkgaming_1
                break;
            case 2:
                int merkgaming_2;
                lihat_merk2(merklaptopgaming_2);
                cin>> merkgaming_2;
                switch (merkgaming_2)
                {
                case 1:
                    lihatSpek_1(merklaptopgaming_2, processorgaming_2, storagegaming_2, ramgaming_2, layargaming_2, gpugaming_2, hargalaptopgaming_2, linkgaming_2);
                    break;
                case 2:
                    lihatSpek_2(merklaptopgaming_2, processorgaming_2, storagegaming_2, ramgaming_2, layargaming_2, gpugaming_2, hargalaptopgaming_2, linkgaming_2);
                    break;
                case 3:
                    lihatSpek_3(merklaptopgaming_2, processorgaming_2, storagegaming_2, ramgaming_2, layargaming_2, gpugaming_2, hargalaptopgaming_2, linkgaming_2);
                    break;
                case 4:
                    goto menu_gaming;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkgaming_2
                break;
            case 3:
                int merkgaming_3;
                lihat_merk3(merklaptopgaming_3);
                cin>>merkgaming_3;
                switch(merkgaming_3)
                {
                case 1:
                    lihatSpek_1(merklaptopgaming_3, processorgaming_3, storagegaming_3, ramgaming_3, layargaming_3, gpugaming_3, hargalaptopgaming_3, linkgaming_3);
                    break;
                case 2:
                    lihatSpek_2(merklaptopgaming_3, processorgaming_3, storagegaming_3, ramgaming_3, layargaming_3, gpugaming_3, hargalaptopgaming_3, linkgaming_3);
                    break;
                case 3:
                    lihatSpek_3(merklaptopgaming_3, processorgaming_3, storagegaming_3, ramgaming_3, layargaming_3, gpugaming_3, hargalaptopgaming_3, linkgaming_3);
                    break;
                case 4:
                    goto menu_gaming;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkgaming_3
                break;
            case 4:
                goto mainMenu;
                break;
            default:
                tampilanDefault();
                break;
            }//end menuGaming
            break;
    case 2:
        menu_editing: // label
            int menuEditing;
            rangebudget();
            cin>>menuEditing;
            switch (menuEditing)
            {
            case 1:
                int merkEditing_1;
                lihat_merk1(merklaptopedit_1);
                cin>>merkEditing_1;
                switch(merkEditing_1)
                {
                case 1:
                    lihatSpek_1(merklaptopedit_1, processoredit_1, storageedit_1, ramedit_1, layaredit_1, gpuedit_1, hargalaptopedit_1, linkedit_1);
                    break;
                case 2:
                    lihatSpek_2(merklaptopedit_1, processoredit_1, storageedit_1, ramedit_1, layaredit_1, gpuedit_1, hargalaptopedit_1, linkedit_1);
                    break;
                case 3:
                    lihatSpek_3(merklaptopedit_1, processoredit_1, storageedit_1, ramedit_1, layaredit_1, gpuedit_1, hargalaptopedit_1, linkedit_1);
                    break;
                case 4:
                    goto menu_editing;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkEditing_1
                break;
            case 2:
                int merkEditing_2;
                lihat_merk2(merklaptopcasual_2);
                cin>>merkEditing_2;
                switch(merkEditing_2)
                {
                case 1:
                    lihatSpek_1(merklaptopedit_2, processoredit_2, storageedit_2,ramedit_2,layaredit_2,gpuedit_2,hargalaptopedit_2,linkedit_2);
                    break;
                case 2:
                    lihatSpek_2(merklaptopedit_2, processoredit_2, storageedit_2,ramedit_2,layaredit_2,gpuedit_2,hargalaptopedit_2,linkedit_2);
                    break;
                case 3:
                    lihatSpek_3(merklaptopedit_2, processoredit_2, storageedit_2,ramedit_2,layaredit_2,gpuedit_2,hargalaptopedit_2,linkedit_2);
                    break;
                case 4:
                    goto menu_editing;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkEditing_2
                break;
            case 3:
                int merkEditing_3;
                lihat_merk3(merklaptopedit_3);
                cin>> merkEditing_3;
                switch(merkEditing_3)
                {
                case 1:
                    lihatSpek_1(merklaptopedit_3, processoredit_3, storageedit_3, ramedit_3, layaredit_3, gpuedit_3, hargalaptopedit_3, linkedit_3);
                    break;
                case 2:
                    lihatSpek_2(merklaptopedit_3, processoredit_3, storageedit_3, ramedit_3, layaredit_3, gpuedit_3, hargalaptopedit_3, linkedit_3);
                    break;
                case 3:
                    lihatSpek_3(merklaptopedit_3, processoredit_3, storageedit_3, ramedit_3, layaredit_3, gpuedit_3, hargalaptopedit_3, linkedit_3);
                    break;
                case 4:
                    goto menu_editing;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkEditing_3
                break;
            case 4:
                goto mainMenu;
                break;
            default:
                tampilanDefault();
                break;
            }//end menuEditing
            break;
    case 3:
        menu_casual:
            int menuCasual;
            rangebudget();
            cin>>menuCasual;
            switch(menuCasual)
            {
            case 1:
                int merkCasual_1;
                lihat_merk1(merklaptopcasual_1);
                cin>>merkCasual_1;
                switch(merkCasual_1)
                {
                case 1:
                    lihatSpek_1(merklaptopcasual_1, processorcasual_1, storagecasual_1, ramcasual_1, layarcasual_1, gpucasual_1,hargalaptopcasual_1,linkcasual_1);
                    break;
                case 2:
                    lihatSpek_2(merklaptopcasual_1, processorcasual_1, storagecasual_1, ramcasual_1, layarcasual_1, gpucasual_1,hargalaptopcasual_1,linkcasual_1);
                    break;
                case 3:
                    lihatSpek_3(merklaptopcasual_1, processorcasual_1, storagecasual_1, ramcasual_1, layarcasual_1, gpucasual_1,hargalaptopcasual_1,linkcasual_1);
                    break;
                case 4:
                    goto menu_casual;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkCasual_1
                break;
            case 2:
                int merkCasual_2;
                lihat_merk2(merklaptopcasual_2);
                cin>> merkCasual_2;
                switch(merkCasual_2)
                {
                case 1:
                    lihatSpek_1(merklaptopcasual_2, processorcasual_2, storagecasual_2, ramcasual_2, layarcasual_2, gpucasual_2, hargalaptopcasual_2, linkcasual_2);
                    break;
                case 2:
                    lihatSpek_2(merklaptopcasual_2, processorcasual_2, storagecasual_2, ramcasual_2, layarcasual_2, gpucasual_2, hargalaptopcasual_2, linkcasual_2);
                    break;
                case 3:
                    lihatSpek_3(merklaptopcasual_2, processorcasual_2, storagecasual_2, ramcasual_2, layarcasual_2, gpucasual_2, hargalaptopcasual_2, linkcasual_2);
                    break;
                case 4:
                    goto menu_casual;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkCasual_2
                break;
            case 3:
                int merkCasual_3;
                lihat_merk3(merklaptopcasual_3);
                cin>>merkCasual_3;
                switch(merkCasual_3)
                {
                case 1:
                    lihatSpek_1(merklaptopcasual_3, processorcasual_3, storagecasual_3, ramcasual_3, layarcasual_3,gpucasual_3,hargalaptopcasual_3,linkcasual_3);
                    break;
                case 2:
                    lihatSpek_2(merklaptopcasual_3, processorcasual_3, storagecasual_3, ramcasual_3, layarcasual_3,gpucasual_3,hargalaptopcasual_3,linkcasual_3);
                    break;
                case 3:
                    lihatSpek_3(merklaptopcasual_3, processorcasual_3, storagecasual_3, ramcasual_3, layarcasual_3,gpucasual_3,hargalaptopcasual_3,linkcasual_3);
                    break;
                case 4:
                    goto menu_casual;
                    break;
                default:
                    tampilanDefault();
                    break;
                }//end merkCasual_3
                break;
            case 4:
                goto mainMenu;
                break;
            default:
                tampilanDefault();
                break;
            }//end menuCasual
            break;
    default:
        tampilanDefault();
        break;


    }//end MAIN MENU
    char yn;
    cout<<endl;
    cout<<"         Apakah ingin kembali ke menu utama? (y/n)"<<endl;
    cout<<"         PILIHAN ANDA: ";
    cin >> yn;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    cout<<"______________________________________________________________"<<endl;
    if (yn == 'y')
        goto mainMenu;
    else
        return 0;


    return 0;
}
