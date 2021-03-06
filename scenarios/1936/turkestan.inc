#State of Turkestan
#Made by Markush

#Main section
country = {
   tag = TRK 
   capital = 1103 #Tashkent
   
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
 
   headofstate            = {  type = 9 id = 540001 } #enver pasha 
   headofgovernment       = {  type = 9 id = 540002 } #enver pasha
   foreignminister        = {  type = 9 id = 540003 } 
   armamentminister       = {  type = 9 id = 540004 } 
   ministerofsecurity     = {  type = 9 id = 540005 } 
   ministerofintelligence = {  type = 9 id = 540006 } 
   chiefofstaff           = {  type = 9 id = 540007 } 
   chiefofarmy            = {  type = 9 id = 540008 } 
   chiefofnavy            = {  type = 9 id = 540009 } 
   chiefofair             = {  type = 9 id = 540010 }  

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

 nationalprovinces = { 500 503 504 505 506 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1118  } 
 ownedprovinces = { 500 503 504 505 506 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1118  }
 controlledprovinces = { 500 503 504 505 506 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1118  }


#OOB

landunit = 
   {  id       = {  type = 10851 id = 1  } 
     name     = "Tashkent Muhafizi" 
     location = 1103 
     leader = 540001 #Enver
     Division = 
     {  id       = {  type = 10851 id = 2  } 
       name     = "1. Suvari Muhafizi" 
       type     = cavalry 
     model     = 1
      } 
     Division = 
     {  id       = {  type = 10851 id = 3  } 
       name     = "1. Suvari Muhafizi" 
       type     = cavalry 
     model     = 1
      } 
     Division = 
     {  id       = {  type = 10851 id = 4  } 
       name     = "1. Piyade Muhafizi" 
       type     = infantry 
       model     = 1
       extra = police
       brigade_model = 0
      }
  } 


  landunit = 
   {  id       = {  type = 10851 id = 5  } 
     name     = "1. Suvari Birligi" 
     location = 1118 
     leader = 540005 #Kairatev
     Division = 
     {  id       = {  type = 10851 id = 6  } 
       name     = "1. Suvari Tumeni" 
       type     = cavalry 
     model     = 6
      } 
     Division = 
     {  id       = {  type = 10851 id = 7  } 
       name     = "4. Suvari Tumeni" 
       type     = cavalry 
     model     = 6
      } 
     Division = 
     {  id       = {  type = 10851 id = 8  } 
       name     = "3. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      }
  } 

  landunit = 
   {  id       = {  type = 10851 id = 9  } 
     name     = "2. Suvari Birligi" 
     location = 503 
     leader = 540011 #Karasu
     Division = 
     {  id       = {  type = 10851 id = 10  } 
       name     = "2. Suvari Tumeni" 
       type     = cavalry 
     model     = 6
      } 
     Division = 
     {  id       = {  type = 10851 id = 11  } 
       name     = "8. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
     Division = 
     {  id       = {  type = 10851 id = 12  } 
       name     = "5. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      }
  }

    landunit = 
   {  id       = {  type = 10851 id = 13  } 
     name     = "3. Suvari Birligi" 
     location = 505
     leader = 540008 #Kholmatzhonov
     Division = 
     {  id       = {  type = 10851 id = 14  } 
       name     = "6. Suvari Tumeni" 
       type     = cavalry 
     model     = 8
      } 
     Division = 
     {  id       = {  type = 10851 id = 15  } 
       name     = "7. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
  }

  landunit = 
   {  id       = {  type = 10851 id = 16  } 
     name     = "4. Suvari Birligi" 
     location = 1111
     leader = 540007 #Cakmak
     Division = 
     {  id       = {  type = 10851 id = 17  } 
       name     = "8. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
     Division = 
     {  id       = {  type = 10851 id = 18  } 
       name     = "11. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
  }

  landunit = 
   {  id       = {  type = 10851 id = 19  } 
     name     = "5. Suvari Birligi" 
     location = 1097
     leader = 540012 #Aydogan
     Division = 
     {  id       = {  type = 10851 id = 20  } 
       name     = "9. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
     Division = 
     {  id       = {  type = 10851 id = 21  } 
       name     = "10. Suvari Tumeni" 
       type     = cavalry 
     model     = 7
      } 
  }


  landunit = 
   {  id       = {  type = 10851 id = 22  } 
     name     = "Antisovet. Assonovskaya Armiya" 
     location = 1110 
     leader   = 540004 #Assonov
     Division = 
     {  id       = {  type = 10851 id = 23  } 
       name     = "1-ya Belaya Strel'tsovskaya Diviziya" 
       type     = infantry 
       model     = 8
       extra = armored_car
       brigade_model = 0
      } 
     Division = 
     {  id       = {  type = 10851 id = 24  } 
       name     = "1-yye Belyye Volontery" 
       type     = militia 
       model     = 4
       extra = police
       brigade_model = 1
      } 
     Division = 
     {  id       = {  type = 10851 id = 25  } 
       name     = "2-yye Belyye Volontery" 
       type     = militia 
       model     = 4
      } 
  } 

  landunit = 
   {  id       = {  type = 10851 id = 26  } 
     name     = "Khwarazm Ordusu" 
     location = 1101
     leader = 540002 #Djemal
     Division = 
     {  id       = {  type = 10851 id = 27  } 
       name     = "1. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
     Division = 
     {  id       = {  type = 10851 id = 28  } 
       name     = "2. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
     Division = 
     {  id       = {  type = 10851 id = 29  } 
       name     = "3. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
     Division = 
     {  id       = {  type = 10851 id = 30  } 
       name     = "4. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
     Division = 
     {  id       = {  type = 10851 id = 31  } 
       name     = "5. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
     Division = 
     {  id       = {  type = 10851 id = 32  } 
       name     = "6. Piyade Alayi" 
       type     = militia 
     model     = 3
      } 
  }

  landunit = 
   {  id       = {  type = 10851 id = 33  } 
     name     = "Farsca Seferi Gucu" 
     location = 1098
     leader = 540013 #Hajar
     Division = 
     {  id       = {  type = 10851 id = 34  } 
       name     = "1. Farsca Tumeni" 
       type     = infantry 
     model     = 6
      } 
     Division = 
     {  id       = {  type = 10851 id = 35  } 
       name     = "2. Farsca Tumeni" 
       type     = infantry 
     model     = 6
      } 
     Division = 
     {  id       = {  type = 10851 id = 36  } 
       name     = "3. Farsca Tumeni" 
       type     = infantry 
     model     = 6
      } 
  }



}
