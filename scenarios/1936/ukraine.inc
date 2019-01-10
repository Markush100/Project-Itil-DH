#Republic of Ukraine
#Made by Markush

#Main section
country = {
   tag = UKR 
   capital = 617 #Kiev
   
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
 
   headofstate            = {  type = 9 id = 545011 }  # Hrushevsky
   headofgovernment       = {  type = 9 id = 545163 } # Vynnychenko
   foreignminister        = {  type = 9 id = 545099 } 
   armamentminister       = {  type = 9 id = 545115 } 
   ministerofsecurity     = {  type = 9 id = 545136 } 
   ministerofintelligence = {  type = 9 id = 545142 } 
   chiefofstaff           = {  type = 9 id = 545146 } 
   chiefofarmy            = {  type = 9 id = 545152 } 
   chiefofnavy            = {  type = 9 id = 545156 } 
   chiefofair             = {  type = 9 id = 545161 }  

   policy = {
    date  = {  year = 0 month = january day = 0  }
        democratic = 7
        political_left = 4
        free_market = 6
        freedom = 7
        professional_army = 4
        defense_lobby = 9
        interventionism = 2
    }



  diplomacy = {
  relation = { tag = SOV value = -200 }
  relation = { tag = GER value = 50 }
  relation = { tag = POL value = -40 }
  relation = { tag = ROM value = -10 }
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

 nationalprovinces = { 238 239 240 241 242 245 249 244 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 644 691 692 693 694   } 
 ownedprovinces = { 238 239 240 241 242 244 245 249 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 644 691 692 693 694  }
 controlledprovinces = { 238 239 240 241 242 244 245 249 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 644 691 692 693 694  }


#OOB

landunit = {
     id       = {  type = 32500 id = 1  } 
     location = 617
     name     = "Armiya Oborony Budynku" 
     Division = 
     {  id       = {  type = 32500 id = 2  } 
       name     = "1. Divizija" 
       type     = infantry 
     model = 7
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 32500 id = 3  } 
       name     = "2. Divizija" 
       type     = infantry 
     model = 7
        strength = 50 
       extra = artillery 
       brigade_model = 1     
      }
     Division = 
     {  id       = {  type = 32500 id = 4  } 
       name     = "3. Divizija" 
       type     = infantry 
       strength = 50
     model = 7
      } 
     Division = 
     {  id       = {  type = 32500 id = 5  } 
       name     = "1-a Kavaleriysʹka Bryhada" 
       type     = cavalry
     model = 7
       strength = 30 
      } 
    }  

   } 

