#include <stdio.h>
int main(void)
{
    printf("Hello Everyone!!\nWelcome To Our Mart..\n");
    printf("Today We give you special Discount..!!\n\n\t***Extra 100/- off***\n\t***With Free Shipping & Delivery***\n\nOnly for You..!!");
    HOME:
    printf("\nOur Catagories:\n");
    printf("\t1->Electronics\n\t2->Toys");
    printf("\nToday's Deal:\n\t***Get Extra More Discount..***\n\t***Upto 30-Percent***\n\t***On Electronics Store***");
    int choice,product,brand,cost,disc,Buy;
    printf("\n\nWhich Product You Want To See??\n");
    printf("Enter Product Serial Number:");
    scanf("%d",&choice);
    if(1<=choice && choice<=2)
    {
        if(choice==1)
        {
            printf("\tCHOICE:ELECTRONICS\n");
            printf("\t\t11->Mobile(15000/- to 20000/-)\n\t\t12->Refrubrished Gadgets(7000/- to 13000/-)\n");
            printf("\t\tChose Variety Sl No.::");
            scanf("%d",&product);
            if(product==11)
            {
                printf("\t\t\tBrand 11(1)->Redmi(Starting Rs.19999/-Only)\n\t\t\tBrand 11(2)->POCO(Starting Rs.17999/-Only)");
                printf("\n\t\t\tChoose Brand:");
                scanf("%d",&brand);
                if(brand==111)
                {
                    printf("\t\t\t\tSpecific Name:REDMI NOTE 11\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tPROCESSOR:Snapdragon 680(4G)+OCTA-CORE 2.40GHz\n\t\t\t\t\tCAMERA:50MP+8MP(ULTRA-WIDE)+8MP(DEPTH)+2MP(MACRO)");
                    printf("\n\t\t\t\t\tSELFIE CAMERA:13MP\n\t\t\t\t\tBATTREY:5000mAh\n\t\t\t\t\tSIZE:Screen-6.4-inch AMOLED DISPLAY");
                    printf("\n\t\t\t\tCost:%d.00",cost=19999);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((19999*20)/100));
                    printf("\n\t\t\t\tExtra Discount:100.00");
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-(disc+100)));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
                else if(brand==112)
                {
                    printf("\t\t\t\tSpecific Name:POCO X3\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tPROCESSOR:Snapdragon 732(5G)+OCTA-CORE 2.01GHz\n\t\t\t\t\tCAMERA:64MP+8MP(ULTRA-WIDE)+8MP(MACRO)");
                    printf("\n\t\t\t\t\tSELFIE CAMERA:16MP\n\t\t\t\t\tBATTREY:4895mAh\n\t\t\t\t\tSIZE:Screen-6.67-inch FHD+");
                    printf("\n\t\t\t\tCost:%d.00",cost=17999);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((17999*20)/100));
                    printf("\n\t\t\t\tExtra Discount:100.00");
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-(disc+100)));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
            }
            else if(product==12)
            {
                printf("\t\t\tBrand 11(1)->Samsung(Starting Rs.14999/-Only)\n\t\t\tBrand 11(2)->VIVO(Starting Rs.12999/-Only)");
                printf("\n\t\t\tChoose Brand:");
                scanf("%d",&brand);
                if(brand==111)
                {
                    printf("\t\t\t\tSpecific Name: refrubrished Samsung M21\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tPROCESSOR:Unisoc 771T+OCTA-CORE 1.94GHz\n\t\t\t\t\tCAMERA:48MP+8MP(DEPTH)+8MP(MACRO)");
                    printf("\n\t\t\t\t\tSELFIE CAMERA:20MP\n\t\t\t\t\tBATTREY:5020mAh\n\t\t\t\t\tSIZE:Screen-6.33-inch FHD");
                    printf("\n\t\t\t\trefrubrished-Cost:%d",cost=12999);
                    printf("\n\t\t\t\tDiscount:%d",disc=((12999*30)/100));
                    printf("\n\t\t\t\tExtra Discount:100/-");
                    printf("\n\t\t\t\tAmount To Be Paid:%d",(cost-(disc+100)));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
                else if(brand==112)
                {
                    printf("\t\t\t\tSpecific Name: refrubrished VIVO T1\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tPROCESSOR:Mediatek Helio g23+OCTA-CORE 1.8GHz\n\t\t\t\t\tCAMERA:32MP+8MP(MACRO)");
                    printf("\n\t\t\t\t\tSELFIE CAMERA:32MP\n\t\t\t\t\tBATTREY:4000mAh\n\t\t\t\t\tSIZE:Screen-6.6-inch LCD");
                    printf("\n\t\t\t\trefrubrished-Cost:%d.00",cost=10999);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((10999*30)/100));
                    printf("\n\t\t\t\tExtra Discount:100.00");
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-(disc+100)));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
            }
        }
        else if(choice==2)
        {
            printf("\tCHOICE:TOYS\n");
            printf("\t\t21->RC Toys(AGE>=5)*(1000/- to 1600/-)\n\t\t22->Kids Toy(AGE<=5)*(150/- to 500/-)\n");
            printf("\t\tChose Variety Sl No.::");
            scanf("%d",&product);
            if(product==21)
            {
                printf("\t\t\tBrand 21(1)->RC_Helicopter(Starting Rs.1499/-Only)\n\t\t\tBrand 21(2)->RC_Monster_Car(Starting Rs.999/-Only)");
                printf("\n\t\t\tChoose Brand:");
                scanf("%d",&brand);
                if(brand==211)
                {
                    printf("\t\t\t\tSpecific Name:RC_COPTER PRO++\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tSIMULATE:Easy To Use(WIRELESS)\n\t\t\t\t\tCAMERA:Include 8MP UltraWide Camera(Bluetooth Sensibility)");
                    printf("\n\t\t\t\t\tABOVE THE GROUND:500 Meters\n\t\t\t\t\tBATTRY:External Battey Needed(5XRemote & 2XCopter)\n\t\t\t\t\t\WEIGHT:970g");
                    printf("\n\t\t\t\tCost:%d.00",cost=1599);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((1599*15)/100));
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-disc));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
                if(brand==212)
                {
                    printf("\t\t\t\tSpecific Name:RC_Monster_Master 2.0+\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tSIMULATE:Easy To Use(WIRELESS)\n\t\t\t\t\tCAMERA:Include 12MP Macro Camera(Bluetooth Sensibility)");
                    printf("\n\t\t\t\t\tRANGE FROM THE SOURCE:100 Meters\n\t\t\t\t\tBATTRY:External Battey Needed(3XRemote & 5XCar)\n\t\t\t\t\t\WEIGHT:2.01Kg");
                    printf("\n\t\t\t\tCost:%d.00",cost=1099);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((1099*15)/100));
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-disc));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
            }
            else if(product==22)
            {
                printf("\t\t\tBrand 22(1)->Plastic_Simple_Car(Starting Rs.149/-Only)\n\t\t\tBrand 22(2)->Kid's Cricket(Starting Rs.599/-Only)");
                printf("\n\t\t\tChoose Brand:");
                scanf("%d",&brand);
                if(brand==221)
                {
                    printf("\t\t\t\tSpecific Name:Delux PL Car\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tSIMULATE:Easy To Use\n\t\t\t\t\tCOLOUR:Green\n\t\t\t\t\tBATTERY:NO Battery");
                    printf("\n\t\t\t\tCost:%d.00",cost=219);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((219*15)/100));
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-disc));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
                if(brand==222)
                {
                    printf("\t\t\t\tSpecific Name:CRICKET COMBO\n\t\t\t\tSpecification:");
                    printf("\n\t\t\t\t\tINCLUDE:1Bat + 1Ball + 3Wickets + 2Bell\n\t\t\t\t\tMATERIAL:Plastic");
                    printf("\n\t\t\t\tCost:%d.00",cost=629);
                    printf("\n\t\t\t\tDiscount:%d.00",disc=((629*15)/100));
                    printf("\n\t\t\t\tAmount To Be Paid:%d.00",(cost-disc));
                    printf("\n\n\t\t\t\tDo You Want To Buy?(Yes->1/No->0):");
                    scanf("%d",&Buy);
                    if(Buy==1)
                        printf("\n\t\t\t\tHurry!!Paced Order Successfully!..Get It Next Friday");
                    else
                        printf("\n\t\t\t\tBack To Home..");
                        goto HOME;
                }
            }
        }
    }
    else
    {
        printf("\n\t::Server Timed Out::\n\t\tRETRY");
    }
    return 0;
}
