 
 ############################## 
 # Country definition for UKR # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = UKR
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } } 
	capital                = 617
	manpower               = 124 
	# Resource Reserves 
	energy                 = 3900
	metal                  = 2000
	rare_materials         = 2000
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10
    diplomacy = {
     relation = {  tag = ENG value = 50  } 
     relation = {  tag = EST value = 75  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 100  } 
     relation = {  tag = GER value = -10  } 
     relation = {  tag = GRE value = 35  } 
     relation = {  tag = HUN value = 50  } 
     relation = {  tag = LAT value = 75  } 
     relation = {  tag = LIT value = -125  } 
	 relation = {  tag = SOV value = -200  } 
    }
    
   SpyInfo                = {  country = "UKR" NumberOfSpies = 9  } 
   nationalprovinces      = { 238 239 240 241 242 244 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 625 626 633 634 635 636 637 638 639 640 641 644 691 692 693 694 695 696 } 
   ownedprovinces         = { 238 239 240 241 242 244 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 625 626 633 634 635 636 637 638 639 640 641 644 691 692 693 694 695 696 } 
   controlledprovinces    = { 238 239 240 241 242 244 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 625 626 633 634 635 636 637 638 639 640 641 644 691 692 693 694 695 696 } 
   # Air Doctrines 
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
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 7 
     political_left    = 1 
     freedom           = 4 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 6 
    } 

   # Firepower 
   # ########################################### 
   # ###Ukrainian Army########################## 
   # ########################################### 
   landunit = {
     id       = {  type = 32500 id = 1  } 
     location = 262 
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