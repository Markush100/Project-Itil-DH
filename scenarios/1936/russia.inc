#Russian State
#Made by Markush

#Main section
country = {
   tag = RUS
   capital = 1176 #Blagoveschensk
   
ai_settings = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }

   #Resources
   
    energy                 = 1000
    metal                  = 1000
    rare_materials         = 1000
    oil                    = 500
    supplies               = 1000
    money                  = 100
    manpower               =  250
    transports             = 50
    escorts                = 5
	
	#Government	
 
   headofstate            = {  type = 9 id = 515001 } #Kornilov 
   headofgovernment       = {  type = 9 id = 515006 } #Rodzaevsky
   foreignminister        = {  type = 9 id = 515016 } 
   armamentminister       = {  type = 9 id = 515032 } #Meandrov
   ministerofsecurity     = {  type = 9 id = 515046 } 
   ministerofintelligence = {  type = 9 id = 515055 } 
   chiefofstaff           = {  type = 9 id = 515174 } 
   chiefofarmy            = {  type = 9 id = 515082 } 
   chiefofnavy            = {  type = 9 id = 515087 } 
   chiefofair             = {  type = 9 id = 515094 }  

   policy = {
    date  = {  year = 0 month = january day = 0  }
        democratic = 3
        political_left = 2
        free_market = 3
        freedom = 4
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }



  diplomacy = {
  relation = { tag = SOV value = -200 }
  relation = { tag = JAP value = 100 access = yes }
  relation = { tag = MAN value = -50 }
  relation = { tag = MON value = -80 }
  }


  techapps               = {
#Early Infantry Division  
1010  1020 1030 1040 1050 1060 1070 1080 1090
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#1930 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Hospital System 
14000 14010 14020
#Naval Infantry
##1560
#Engineers
1830 1840 1850 1860
#Tankette 
7600 7610 2620 2010 2630 2640
#Basic Armoured Car  
2860 2870 2880 2020
#Field Artillery 
2290 2300 2310 2900 
#Early Anti-Tank Artillery
#2400
#Early Static Anti-Air Artillery 
2800 2450
#Basic Anti-Air Artillery Brigade 
2810 2820
# Heavy Cruiser
3210 3220
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Short Range Submarine 
3610 3620 3630 3640
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810

#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Early Bomber 
4600 4610 4620 4630 4120 4130
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810
#ww1 navalbomber
#4700 4710

#Modern Agriculture  
5700 5710
#Computers & cryptografi
5310 54010 54020 5316 5326
#Manufactoring
5810 5820 5050 5830
#Improved Construction Engineering 
5800 5080 
#Basic Oil Refining 
##5190
#Medicine
5600 5610 5620 5630
# Land Doctrines WWI - Entente line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WWII - Defensive Focus 
6560 6030
#Naval Doctrines  
8010 8040  8050
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
}
inventions = { 3000027 }


#Territory

 nationalprovinces = { 247 248 251 253 255 256 257 498 499 500 501 502 503 504 505 506 507 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 } 


 ownedprovinces = { 1161 1163 1167 1168 1169 1170 1176 1177 1178 1179 1180  }

 
 controlledprovinces = { 1161 1163 1167 1168 1169 1170 1176 1177 1178 1179 1180  }


#OOB
}