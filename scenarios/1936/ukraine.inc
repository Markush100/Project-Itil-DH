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
       name     = "1-a Kavaleriys'ka Bryhada" 
       type     = cavalry
     model = 7
       strength = 30 
      } 
    }  

landunit = {
     id       = {  type = 32500 id = 6  } 
     location = 644
     name     = "1-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 7  } 
       name     = "4. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 8  } 
       name     = "5. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 9  } 
     location = 634
     name     = "2-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 10  } 
       name     = "6. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 11  } 
       name     = "7. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 12  } 
     location = 692
     name     = "3-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 13  } 
       name     = "8. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 14  } 
       name     = "9. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 15  } 
     location = 616
     name     = "4-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 120  } 
       name     = "10. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 16  } 
       name     = "11. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 17  } 
     location = 245
     name     = "5-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 18  } 
       name     = "12. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 19  } 
       name     = "13. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 20  } 
     location = 636
     name     = "6-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 21  } 
       name     = "14. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 22  } 
       name     = "15. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 23  } 
     location = 249
     name     = "7-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 24  } 
       name     = "16. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 25  } 
       name     = "17. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 26  } 
     location = 605
     name     = "8-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 27  } 
       name     = "18. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 28  } 
       name     = "19. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 29  } 
     location = 609
     name     = "9-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 30  } 
       name     = "20. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 31  } 
       name     = "21. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 32  } 
     location = 694
     name     = "10-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 33  } 
       name     = "22. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 34  } 
       name     = "23. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 35  } 
     location = 691
     name     = "11-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 36  } 
       name     = "24. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 37  } 
       name     = "25. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 38  } 
     location = 606
     name     = "12-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 39  } 
       name     = "26. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 40  } 
       name     = "27. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 41  } 
     location = 239
     name     = "13-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 42  } 
       name     = "28. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 43  } 
       name     = "29. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 44  } 
     location = 607
     name     = "14-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 45  } 
       name     = "30. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 46  } 
       name     = "31. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 47  } 
     location = 633
     name     = "15-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 48  } 
       name     = "32. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 49  } 
       name     = "33. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 50  } 
     location = 242
     name     = "16-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 51  } 
       name     = "34. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 52  } 
       name     = "35. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 53  } 
     location = 630
     name     = "Nezalezhnyy Kozats'kyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 54  } 
       name     = "Zaporiz'ki Kozaky" 
       type     = cavalry 
     model = 6
      } 
     Division = 
     {  id       = {  type = 32500 id = 55  } 
       name     = "Kubans'ki Kozaky" 
       type     = cavalry 
     model = 6
      } 
     Division = 
     {  id       = {  type = 32500 id = 56  } 
       name     = "Azovs'ki Kozaky" 
       type     = cavalry 
     model = 6
      } 
     Division = 
     {  id       = {  type = 32500 id = 57  } 
       name     = "Dons'ki Kozaky" 
       type     = cavalry 
     model = 6
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 58  } 
     location = 241
     name     = "17-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 59  } 
       name     = "36. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 60  } 
       name     = "37. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 61  } 
     location = 240
     name     = "18-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 62  } 
       name     = "38. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 63  } 
       name     = "39. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 64  } 
     location = 621
     name     = "19-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 65  } 
       name     = "40. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 66  } 
       name     = "41. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 67  } 
     location = 238
     name     = "20-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 68  } 
       name     = "42. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 69  } 
       name     = "43. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 70  } 
     location = 619
     name     = "21-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 71  } 
       name     = "44. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 72  } 
       name     = "45. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }

  landunit = {
     id       = {  type = 32500 id = 73  } 
     location = 618
     name     = "22-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 74  } 
       name     = "46. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 75  } 
       name     = "47. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }
  landunit = {
     id       = {  type = 32500 id = 76  } 
     location = 626
     name     = "23-y Prykordonnyy Korpus" 
     Division = 
     {  id       = {  type = 32500 id = 77  } 
       name     = "48. Divizija" 
       type     = infantry 
     model = 6
       strength = 30 
      } 
     Division = 
     {  id       = {  type = 32500 id = 78  } 
       name     = "49. Divizija" 
       type     = infantry 
     model = 6
       strength = 30
      } 
  }






}

