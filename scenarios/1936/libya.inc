	########################################
    # Country definition for LBY by Markush #
    ########################################
     
    #####################
    # Country main data #
    #####################
     
    country =
    {  tag                    = LBY
    	puppet                = ITA
		ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes} }
		manpower               = 50
		# Resource Reserves
		energy                 = 3600
		metal                  = 1800
		rare_materials         = 1000
		oil                    = 1000
		supplies               = 2000
		money                  = 500
		belligerence           = 0 # to avoid MP problems
		capital                = 419
		transports             = 400
		escorts                = 100

       diplomacy =
       {  
           relation = { tag = ITA value = 200 access = yes }
           relation = { tag = FRA value = -70 }
           relation = { tag = ENG value = -100 }
           relation = { tag = AUS value = -150 }
           relation = { tag = GER value = -150 }
           relation = { tag = SOV value = -20 }
           relation = { tag = YUG value = -50 }
           relation = { tag = SWI value = -80 }
           relation = { tag = SPR value = -20 }
           relation = { tag = GRE value = -50 }
           relation = { tag = CZE value = -100 }
           relation = { tag = SYR value = -50 }
        }
       SpyInfo                = {  country = "ITA" NumberOfSpies = 9  } 
       # Somaliland
       nationalprovinces      = {  740 741 742 744 745 746 747 748 749 
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777  }
                              
       ownedprovinces         = { 740 741 742 744 745 746 747 748 749 
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777  }

       controlledprovinces    = {  740 741 742 744 745 746 747 748 749 
                                750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777  }

	# Italy 1936 techs
	#######################
	techapps = {  

	# Manufacturing
	5810 5820 5050 5830 5060  
	# Construction Engineering 
	5800 5080 5090
	# Agriculture 
	5700 5710 5010 5020
	# Computers
	5310 54010 54020 54030 
	# Cryptography
	5316 5326 5327 
	# Radar
	
	# Oil Refining
	5190
	# Medicine
	5600 5610 5620 5630
	# Exp. Rocket
	5560

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 
	# Motorized Infantry
	1396
	# Naval Infantry
	1560 1570
	# Paratroopers
	
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650
	# Armored Car 
	2860 2870 2880 2020 
	# Artillery
	2290 2300 2310 2900 2910 2920 2930 
	# Anti-tank Artillery
	
	# Static Anti-Air Artillery 
	2800 2450 21180 21190
	# Anti-Air Artillery
	2810 2820 2510 

	# Hospital System 
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	# WWII Land Doctrines
	6560 6030

	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470
	# Battlecruiser  
	3310 3320 3330
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260
	# Destroyer 
	3010 3020 3030 3040 3050 3060 
	# Submarine 
	3610 3620 3630 3640 3650
	# Light Carrier 
	12100 
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820

	# Naval Doctrines
	# Engagement Theories
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphibious Warfare
	82300
	# Logistic Support
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560
	# Trade Interdiction Submarine
	8600 8610
	# Engagement Tactics - Fleet-in-Being column
	8900 8910 8920 8930 8940
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	
	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Escort Fighter 
	
	# Close Air Support
    4400
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber 
	4700 4710 
	# Seaplanes
	4740 4750 4760 4770 4780
	# CAG
	
	# Air Transport 
	4290 4250

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 
	
	}

	inventions = { 3000027 }
        policy =
       {  date              = {  year = 0 month = january day = 0  }
         democratic        = 5
         political_left    = 9
         freedom           = 4 
         free_market       = 4
         professional_army = 1
         defense_lobby     = 1
         interventionism   = 2
        }

       headofstate            = {  type = 9 id = 495001  }
       headofgovernment       = {  type = 9 id = 495002  }
       foreignminister        = {  type = 9 id = 495003  }
       armamentminister       = {  type = 9 id = 495004  }
       ministerofsecurity     = {  type = 9 id = 495005  }
       ministerofintelligence = {  type = 9 id = 495006  }
       chiefofstaff           = {  type = 9 id = 495007  }
       chiefofarmy            = {  type = 9 id = 495008  }
       chiefofnavy            = {  type = 9 id = 495009  }
       chiefofair             = {  type = 9 id = 495010  }

   landunit = 
   {  location = 747 
     name     = "Guardia rossa della Tunisia" 
     id       = {  type = 23510 id = 1  } 
     Division = 
     {  id       = {  type = 23510 id = 2  } 
       name     = "1a Guardia Rossa Araba" 
       type     = militia 
       model    = 4 
      } 
     Division = 
     {  id       = {  type = 23510 id = 3  } 
       name     = "2a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
      Division = 
     {  id       = {  type = 23510 id = 4  } 
       name     = "3a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
}

landunit = 
   {  location = 765 
     name     = "Guardia rossa della Tobruk" 
     id       = {  type = 23510 id = 5  } 
     Division = 
     {  id       = {  type = 23510 id = 6  } 
       name     = "4a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
      Division = 
     {  id       = {  type = 23510 id = 7  } 
       name     = "5a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
}

landunit = 
   {  location = 761 
     name     = "Guardia rossa della Benghazi" 
     id       = {  type = 23510 id = 8  } 
     Division = 
     {  id       = {  type = 23510 id = 9  } 
       name     = "6a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
      Division = 
     {  id       = {  type = 23510 id = 10  } 
       name     = "7a Guardia Rossa Araba" 
       type     = militia 
       model    = 4
      } 
}

landunit = 
   {  location = 776
     name     = "Cavalleria Ausiliaria" 
     id       = {  type = 23510 id = 11  } 
     Division = 
     {  id       = {  type = 23510 id = 12  } 
       name     = "1a Cavalleria Berbera" 
       type     = cavalry 
       model    = 3
      } 
     Division = 
     {  id       = {  type = 23510 id = 13  } 
       name     = "2a Cavalleria Berbera" 
       type     = cavalry 
       model    = 3
      } 
      Division = 
     {  id       = {  type = 23510 id = 14  } 
       name     = "3a Cavalleria Berbera" 
       type     = cavalry 
       model    = 3
      } 
}


}
