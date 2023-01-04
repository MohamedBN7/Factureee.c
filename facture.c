#include <stdio.h>
#include <time.h>

    int main() {
        char name[50];
        int code;
        int client_id;
        int RTX_4090;
        int Radeon_RX_6700_XT;
        int RTX_3090;
        int Radeon_RX_7900XT;
        int RTX_2080ti;
        int Intel_Core_I9_12900K;
        int Intel_Core_I9_11900KF;
        int Intel_Core_I9_10900K;
        int Ryzen_9_7950x;
        int Ryzen_7_5800x;
        int Ryzen_5_5600x;
        int T_FORCE_VULCAN_DDR5_5200MHZ_16G;
        int THERMALTAKE_08GB_3600_GHZ;
        int ASUS_ROG_Strix_Z490_E;
        int ASUS_ROG_X570;
        int ASUS_X670E;
        int ASUS_Z690;
        int FSP_CANNON_PRO_2000W;
        int EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular;
        int MSI_MAG_CORELIQUID_240R_V2;
        int ASUS_ROG_Strix_LC240_RGB;
        int Noctua_NH_D15;
        int EVO_M2_NVME_1TB;
        int EVO_SSD_500GB;
        int Western_Digital_4TB;
        int NZXT_H7_Elite;
        int Corsair_iCUE_4000X;
        int CORSAIR_7000D;
        float total;
        float Graphics_Cards_Total;
        float Motherboards_Total;
        float Cpu_Total;
        float RAMs_Total;
        float case_Total;
        float Psu_Total;
        float Storage_Total;
        float Cooling_Total;

        printf("------------\n");
        printf("Billing System\n");
        printf("------------\n");
        printf("Client Details\n\n");
        printf("Client Name: ");
        scanf("%s",&name);
        printf("Client ID: ");
        scanf("%d",&client_id);

        printf("------------\n");

        printf("Motherboard\n\n");
        printf("ASUS_ROG_Strix_Z490_E(129.99$)");
        scanf("%d",&ASUS_ROG_Strix_Z490_E);
        printf("ASUS_ROG_X570(349.99$)");
        scanf("%d",&ASUS_ROG_X570);
        printf("ASUS_X670E(325.99$)");
        scanf("%d",&ASUS_X670E);
        printf("ASUS_Z690(399.99$)");
        scanf("%d",&ASUS_Z690);


        printf("------------\n");

        printf("processors(Intel/AMD)\n\n");
        printf("Intel_Core_I9_12900K(707.50$)");
        scanf("%d",&Intel_Core_I9_12900K);
        printf("Intel_Core_I9_11900KF($574.00$)");
        scanf("%d",&Intel_Core_I9_11900KF);
        printf("Intel_Core_I9_10900K(418.50$)");
        scanf("%d",&Intel_Core_I9_10900K);
        printf("Ryzen_9_7950x(568.99$)");
        scanf("%d",&Ryzen_9_7950x);
        printf("Ryzen_7_5800x(339.99$)");
        scanf("%d",&Ryzen_7_5800x);
        printf("Ryzen_5_5600x(199.99$)");
        scanf("%d",&Ryzen_5_5600x);

        printf("------------\n");

        printf("Memory Sticks(RAM)\n\n");
        printf("T_FORCE_VULCAN_DDR5_5200MHZ_16G(308.36$)");
        scanf("%d",&T_FORCE_VULCAN_DDR5_5200MHZ_16G);
        printf("THERMALTAKE_08GB_3600_GHZ(75.09$)");
        scanf("%d",&THERMALTAKE_08GB_3600_GHZ);

        printf("------------\n");

        printf("Power Supply(PSU)\n\n");
        printf("FSP_CANNON_PRO_2000W(629.11$)");
        scanf("%d",&FSP_CANNON_PRO_2000W);
        printf("EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular(359.99$)");
        scanf("%d",&EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular);

        printf("------------\n");

        printf("Air/Water Cooling\n\n");
        printf("MSI_MAG_CORELIQUID_240R_V2(109.99$)");
        scanf("%d",&MSI_MAG_CORELIQUID_240R_V2);
        printf("ASUS_ROG_Strix_LC240_RGB(159.99$)");
        scanf("%d",&ASUS_ROG_Strix_LC240_RGB);
        printf("Noctua_NH_D15_AIR(99.99$)");
        scanf("%d",&Noctua_NH_D15);

        printf("------------\n");

        printf("Storage\n\n");
        printf("EVO_M2_NVME_1TB(99.99$)");
        scanf("%d",&EVO_M2_NVME_1TB);
        printf("EVO_SSD_500GB(51.99$)");
        scanf("%d",&EVO_SSD_500GB);
        printf("Western_Digital_4TB(60.00$)");
        scanf("%d",&Western_Digital_4TB);

        printf("------------\n");

        printf("Graphics Cards(NVIDIA/AMD)\n\n");
        printf("RTX_4090(2245.49$)");
        scanf("%d",&RTX_4090);
        printf("RX_6700_XT(599.99$)");
        scanf("%d",&Radeon_RX_6700_XT);
        printf("RTX_3090(1708.97$)");
        scanf("%d",&RTX_3090);
        printf("Radeon_RX_7900XT(949.99$)");
        scanf("%d",&Radeon_RX_7900XT);
        printf("RTX_2080ti_Founders_Edition(Used 699.99$)");
        scanf("%d",&RTX_2080ti);

        printf("------------\n");

        printf("Cases\n\n");
        printf("NZXT_H7_Elite(199.99$)");
        scanf("%d",&NZXT_H7_Elite);
        printf("Corsair_iCUE_4000X(144.99$)");
        scanf("%d",&Corsair_iCUE_4000X);
        printf("CORSAIR_7000D(229.99$)");
        scanf("%d",&CORSAIR_7000D);

        printf("------------\n");

        float asusz490;
        float asusx570;
        float asusx670e;
        float asusz690;

        asusz490 = 129.99 * ASUS_ROG_Strix_Z490_E;
        asusx570 = 349.99 * ASUS_ROG_X570;
        asusx670e = 325.99 * ASUS_X670E;
        asusz690 = 399.99 * ASUS_Z690;
        Motherboards_Total = asusz490+ asusx570+ asusx670e+ asusz690;
        printf("ASUS_ROG_Strix_Z490_E : ");
        printf("%f $\n",asusz490);
        printf("ASUS_ROG_X570 : ");
        printf("%f $\n",asusx570);
        printf("ASUS_X670E : ");
        printf("%f $\n",asusx670e);
        printf("ASUS_Z690 : ");
        printf("%f $\n",asusz690);
        printf("Motherboards Total Price : ");
        printf("%f $\n",Motherboards_Total);

        printf("------------\n");

        float i912900k;
        float i911900kf;
        float i910900k;
        float R97950x;
        float R75800x;
        float R55600x;

        i912900k = 707.50 * Intel_Core_I9_12900K;
        i911900kf = 574.00 * Intel_Core_I9_11900KF;
        i910900k = 418.50 * Intel_Core_I9_10900K;
        R97950x = 568.99 * Ryzen_9_7950x;
        R75800x = 339.99 * Ryzen_7_5800x;
        R55600x = 199.99 * Ryzen_5_5600x;
        Cpu_Total = i912900k + i911900kf + i910900k + R97950x + R75800x + R55600x;
        printf("Intel_Core_I9_12900K : ");
        printf("%f $\n",i912900k);
        printf("Intel_Core_I9_11900KF : ");
        printf("%f $\n",i911900kf);
        printf("Intel_Core_I9_10900K : ");
        printf("%f $\n",i910900k);
        printf("Ryzen_9_7950x : ");
        printf("%f $\n",R97950x);
        printf("Ryzen_7_5800x : ");
        printf("%f $\n",R75800x);
        printf("Ryzen_5_5600x : ");
        printf("%f $\n",R55600x);
        printf("Cpu Total Price : ");
        printf("%f $\n",Cpu_Total);

        printf("------------\n");

        float TFORCE;
        float THERMALTAKE;

        TFORCE = T_FORCE_VULCAN_DDR5_5200MHZ_16G * 308.36;
        THERMALTAKE = THERMALTAKE_08GB_3600_GHZ * 75.09;
        RAMs_Total = TFORCE + THERMALTAKE;
        printf("T_FORCE_VULCAN_DDR5_5200MHZ_16G : ");
        printf("%f $\n",TFORCE);
        printf("THERMALTAKE_08GB_3600_GHZ : ");
        printf("%f $\n",THERMALTAKE);
        printf("RAMs Total Price : ");
        printf("%f $\n",RAMs_Total);

        printf("------------\n");

        float FSP;
        float EVGA;
        FSP = 629.11 * FSP_CANNON_PRO_2000W;
        EVGA = 359.99 * EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular;
        Psu_Total = FSP + EVGA;
        printf("FSP_CANNON_PRO_2000W : ");
        printf("%f $\n",FSP);
        printf("EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular : ");
        printf("%f $\n",EVGA);
        printf("Power Supply Total Price : ");
        printf("%f $\n",Psu_Total);

        printf("------------\n");

        float EVOM2;
        float EVOSSD;
        float WesternDigital;
        EVOM2 = EVO_M2_NVME_1TB * 99.99;
        EVOSSD = EVO_SSD_500GB * 51.99;
        WesternDigital = Western_Digital_4TB * 60.00;
        Storage_Total = EVOM2 + EVOSSD + WesternDigital;
        printf("EVO_M2_NVME_1TB : ");
        printf("%f $\n",EVOM2);
        printf("EVO_SSD_500GB : ");
        printf("%f $\n",EVOSSD);
        printf("Western_Digital_4TB : ");
        printf("%f $\n",WesternDigital);
        printf("Storage Total Price : ");
        printf("%f $",Storage_Total);

        printf("------------\n");

        float MSIMAG;
        float ASUSROG;
        float NoctuaNH;
        MSIMAG = MSI_MAG_CORELIQUID_240R_V2 * 109.99;
        ASUSROG = ASUS_ROG_Strix_LC240_RGB * 159.99;
        NoctuaNH = Noctua_NH_D15 * 99.99;
        Cooling_Total = MSIMAG+ASUSROG+NoctuaNH;
        printf("MSI_MAG_CORELIQUID_240R_V2 : ");
        printf("%f $\n",MSIMAG);
        printf("ASUS_ROG_Strix_LC240_RGB : ");
        printf("%f $\n",ASUSROG);
        printf("Noctua_NH_D15 : ");
        printf("%f $\n",NoctuaNH);
        printf("AIR/WATER Cooling Total Price : ");
        printf("%f $\n",Cooling_Total);

        printf("------------\n");

        float RT4090;
        float RT3090;
        float RT2080ti;
        float R6700XT;
        float R7900XT;

        RT4090 = RTX_4090 * 2245.49;
        RT3090 = RTX_3090 * 1708.97;
        RT2080ti = RTX_2080ti * 699.99;
        R6700XT = Radeon_RX_6700_XT * 599.99;
        R7900XT = Radeon_RX_7900XT * 949.99;
        Graphics_Cards_Total = RT4090+ RT3090+ RT2080ti+ R6700XT+ R7900XT;
        printf("RTX_4090 : ");
        printf("%f $\n",RT4090);
        printf("RTX_3090 : ");
        printf("%f $\n",RT3090);
        printf("RTX_2080ti : ");
        printf("%f $\n",RT2080ti);
        printf("Radeon_RX_6700_XT : ");
        printf("%f $\n",R6700XT);
        printf("Radeon_RX_7900XT : ");
        printf("%f $\n",R7900XT);
        printf("Graphics Cards Total Price : ");
        printf("%f $\n",Graphics_Cards_Total);

        printf("------------\n");

        float NZXTH7;
        float Corsair_iCUE;
        float CORS7000D;
        NZXTH7 = NZXT_H7_Elite * 199.99;
        Corsair_iCUE = Corsair_iCUE_4000X * 144.99;
        CORS7000D = CORSAIR_7000D * 229.99;
        case_Total= NZXTH7+ Corsair_iCUE+ CORS7000D;
        printf("NZXT_H7_Elite : ");
        printf("%f $\n",NZXTH7);
        printf("Corsair_iCUE_4000X : ");
        printf("%f $\n",Corsair_iCUE);
        printf("CORSAIR_7000D : ");
        printf("%f $\n",CORS7000D);
        printf("Case Total Price : ");
        printf("%f $\n",case_Total);

        printf("------------\n");

        total=Motherboards_Total+Cpu_Total+RAMs_Total+Psu_Total+Storage_Total+Cooling_Total+Graphics_Cards_Total+case_Total;
        printf("Total Amount : ");
        printf("%f $\n",total);


        printf("------------\n");

        printf("--------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("Build Your High End Pc MarketPlace\n\n");
        printf("Client Name : ");
        printf("%s\n",name);
        printf("Client ID : ");
        printf("%d\n",client_id);
        printf("Product Name                            Quantity                        Price\n\n");
        printf("ASUS_ROG_Strix_Z490_E                    %d                                 %f$\n",ASUS_ROG_Strix_Z490_E,asusz490);
        printf("ASUS_ROG_X570                            %d                                 %f$\n",ASUS_ROG_X570,asusx570);
        printf("ASUS_X670E                               %d                                 %f$\n",ASUS_X670E,asusx670e);
        printf("ASUS_Z690                                %d                                 %f$\n",ASUS_Z690,asusz690);
        printf("Intel_Core_I9_12900K                     %d                                 %f$\n",Intel_Core_I9_12900K,i912900k);
        printf("Intel_Core_I9_11900KF                    %d                                 %f$\n",Intel_Core_I9_11900KF,i911900kf);
        printf("Intel_Core_I9_10900K                     %d                                 %f$\n",Intel_Core_I9_10900K,i910900k);
        printf("Ryzen_9_7950x                            %d                                 %f$\n",Ryzen_9_7950x,R97950x);
        printf("Ryzen_9_7950x                            %d                                 %f$\n",Ryzen_7_5800x,R75800x);
        printf("Ryzen_5_5600x                            %d                                 %f$\n",Ryzen_5_5600x,R55600x);
        printf("T_FORCE_VULCAN_DDR5_5200MHZ_16G          %d                                 %f$\n",T_FORCE_VULCAN_DDR5_5200MHZ_16G,TFORCE);
        printf("THERMALTAKE_08GB_3600_GHZ                %d                                 %f$\n",THERMALTAKE_08GB_3600_GHZ,THERMALTAKE);
        printf("FSP_CANNON_PRO_2000W                     %d                                 %f$\n",FSP_CANNON_PRO_2000W,FSP);
        printf("EVGA_SuperNOVA_1000_1000W                %d                                 %f$\n",EVGA_SuperNOVA_1000_T2_80_TITANIUM_1000W_Fully_Modular,EVGA);
        printf("EVO_M2_NVME_1TB                          %d                                 %f$\n",EVO_M2_NVME_1TB,EVOM2);
        printf("EVO_SSD_500GB                            %d                                 %f$\n",EVO_SSD_500GB,EVOSSD);
        printf("Western_Digital_4TB                      %d                                 %f$\n",Western_Digital_4TB,WesternDigital);
        printf("MSI_MAG_CORELIQUID_240R_V2               %d                                 %f$\n",MSI_MAG_CORELIQUID_240R_V2,MSIMAG);
        printf("ASUS_ROG_Strix_LC240_RGB                 %d                                 %f$\n",ASUS_ROG_Strix_LC240_RGB,ASUSROG);
        printf("Noctua_NH_D15                            %d                                 %f$\n",Noctua_NH_D15,NoctuaNH);
        printf("RTX_4090                                 %d                                 %f$\n",RTX_4090,RT4090);
        printf("RTX_3090                                 %d                                 %f$\n",RTX_3090,RT3090);
        printf("RTX_2080ti                               %d                                 %f$\n",RTX_2080ti,RT2080ti);
        printf("Radeon_RX_6700_XT                        %d                                 %f$\n",Radeon_RX_6700_XT,R6700XT);
        printf("Radeon_RX_7900XT                         %d                                 %f$\n",Radeon_RX_7900XT,R7900XT);
        printf("NZXT_H7_Elite                            %d                                 %f$\n",NZXT_H7_Elite,NZXTH7);
        printf("Corsair_iCUE_4000X                       %d                                 %f$\n",Corsair_iCUE_4000X,Corsair_iCUE);
        printf("CORSAIR_7000D                            %d                                 %f$\n",CORSAIR_7000D,CORS7000D);

        printf("Motherboards Total Price : %f$\n\n",Motherboards_Total);
        printf("Cpu Total Price : %f$\n\n",Cpu_Total);
        printf("RAMs Total Price : %f$\n\n",RAMs_Total);
        printf("Power Supply Total Price : %f$\n\n",Psu_Total);
        printf("Storage Total Price : %f$\n\n",Storage_Total);
        printf("AIR/WATER Cooling Total Price : %f$\n\n",Cooling_Total);
        printf("Graphics Cards Total Price : %f$\n\n",Graphics_Cards_Total);
        printf("Case Total Price : %f$\n\n",case_Total);
        printf("Total Price: %f$\n\n",total);


        printf("---------------------------------------------------------------------------------------------------------------------------------\n");
        {
            time_t current_time=time(NULL);
            struct tm*tm=localtime(&current_time);
            printf("%s\n",asctime(tm));


        }
        return 0;




    }
